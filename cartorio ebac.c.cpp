#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca de strings

int registro() //Menu de Registro de usu�rio
{
	//vari�veis para registro
	char arquivo[40]; 
	char nome[40];
	char sobrenome[40];
	char cpf[40];
	char cargo[40];
	
	printf("Digite o nome a ser cadastrado:\n "); //Armazenando nome a ser cadastrado
	scanf("%s",nome);
	
	strcpy(arquivo,nome); // Respons�vel por copiar o valor da string (nome)
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //escreve no arquivo criado
	fprintf(file,nome); //salva o valor da vari�vel (nome)
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,","); //espa�amento para inclus�o de dados complementares
	fclose(file);
	
	printf("Digite o sobrenome:\n "); //Armazenando sobrenome a ser cadastrado
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,","); //espa�amento para inclus�o de dados complementares
	fclose(file); //Fechamento do arquivo
	
	printf("Digite o CPF: \n"); //Armazenando CPF a ser cadastrado
	scanf("%s", cpf);
	
	file = fopen(arquivo,"a");//atualiza dados do arquivo 
	fprintf(file,cpf); //espa�amento para inclus�o de dados complementares
	fclose(file); //Fechamento do arquivo
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,","); //espa�amento para inclus�o de dados complementares
	fclose(file); //Fechamento do arquivo
	
	printf("Digite o cargo:\n "); //Armazenando o cargo a ser cadastrado
	scanf("%s",cargo);
	
	file =fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,cargo); //espa�amento para inclus�o de dados complementares
	fclose(file); //Fechamento do arquivo
	
	system("pause"); //pause nas op��es

}

int consulta() //Menu de consulta de usu�rios
{
	setlocale(LC_ALL, "Portuguese"); //Biblioteca de texto em portugu�s
	
	//Vari�veis a serem consultadas
	char nome[200];
	char cargo[40];
	char cpf[40]; 
	char conteudo[100]; 
	

	int opcao=0; //Variaveis de op��es
	int laco=1;
	
	for(laco=1;laco=1;)
	
	{
	system("cls"); //pause no menu
	
	setlocale (LC_ALL, "Portuguese"); //biblioteca de texto em portugu�s
	
	//Inicio do menu
	printf(" Escolha op��o de consulta: \n");
	printf("\t1 - Nome Completo ou parcial\n");
	printf("\t2 - CPF\n");
	printf("\t3 - Cargo\n\n");
	
	scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
	system("cls");

		switch(opcao) //inicio da selec�o
		{
			
		case 1:
		printf("Digite o CPF a ser consultado:\n"); //Armazendando dados de CPF a ser consultado
		scanf("%s", cpf);
		break;

		case 2:
		printf("Digite o CPF a ser consultado:\n"); //Armazendando dados de CPF a ser consultado
		scanf("%s", cpf);
		break;

		case 3:
		printf("Digite o CPF a ser consultado:\n"); //Armazendando dados de CPF a ser consultado
		scanf("%s", cpf);
		break;

		default:
		printf("Op��o n�o disponivel\n");
		system("pause");
		break;
		} //Fim da sele��o
}

 }

	
	FILE *file; //Seleciona o arquivo
	file = fopen(cpf,"r"); //Abre o arquivo
	
	if(file == NULL) //Op��o caso n�o exista usu�rio com dados cadastrados
	{
		printf("CPF n�o cadastrado.\n"); //Informa��o para o usu�rio	
	}
	
	while (fgets(conteudo, 100, file) != NULL) //Procurada arquivos existentes
{
	printf("\n Essas s�o as informa��es do usu�rio: "); //Mensagem para o usu�rio sobre dados encontrados
	printf("%s",conteudo);
	printf("\n\n");	
}

	system ("pause"); //pause nas op��es 

}
int deletar() //Menu de deletar usu�rios cadastrados
{
	char cpf[40]; //Variavel CPF
	
	printf("Digite o CPF a ser deletado:\n "); //Mensagem para o usu�rio inserir dados
	scanf ("%s", cpf); //Armazendando o CPF a ser deletado
	
	remove (cpf); //removendo cpf digitado pelo usu�rio		
	
	FILE *file; //Seleciona o arquivo
	file = fopen(cpf,"r"); //Abre o arquivo para leitura
	
	if (file == NULL) //Op��o caso usu�rio n�o seja encontrado
	{
	printf("Usu�rio n�o encontrado no sistema\n"); //Mensagem para usu�rio de arquivo n�o encontrado.
	}
	
	system("pause"); //pausar menu

}
	
int main() //menu de op��es do Cart�rio EBAC
{	
	int opcao=0; //Variaveis de op��es
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls"); //pause no menu
	
		setlocale (LC_ALL, "Portuguese"); //biblioteca de texto em portugu�s
	
	//Inicio do menu
	printf(" ### Cart�rio da EBAC ###\n\n ");
	printf("Escolha a op��o desejada: \n");
	printf("\t1 - Resgistrar usu�rio\n");
	printf("\t2 - Consultar usu�rio\n");
	printf("\t3 - Deletar usu�rio\n\n");
	printf("Digite a op��o desejada: \n");
	//Fim dp menu
	
	scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
	system("cls");

		switch(opcao) //inicio da selec�o
		{
			
		case 1:
		registro();
		break;
	
		case 2:
		consulta();
		break;
	
		case 3:
		deletar();
		break;
	
		default:
		printf("Op��o n�o disponivel\n");
		system("pause");
		break;
		} //Fim da sele��o
	}


	//Fim do Software Cart�rio EBAC


	



