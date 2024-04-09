#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> // biblioteca de strings

int registro() //Menu de Registro de usuário
{
	//variáveis para registro
	char arquivo[40]; 
	char nome[40];
	char sobrenome[40];
	char cpf[40];
	char cargo[40];
	
	printf("Digite o nome a ser cadastrado:\n "); //Armazenando nome a ser cadastrado
	scanf("%s",nome);
	
	strcpy(arquivo,nome); // Responsável por copiar o valor da string (nome)
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //escreve no arquivo criado
	fprintf(file,nome); //salva o valor da variável (nome)
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,","); //espaçamento para inclusão de dados complementares
	fclose(file);
	
	printf("Digite o sobrenome:\n "); //Armazenando sobrenome a ser cadastrado
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,","); //espaçamento para inclusão de dados complementares
	fclose(file); //Fechamento do arquivo
	
	printf("Digite o CPF: \n"); //Armazenando CPF a ser cadastrado
	scanf("%s", cpf);
	
	file = fopen(arquivo,"a");//atualiza dados do arquivo 
	fprintf(file,cpf); //espaçamento para inclusão de dados complementares
	fclose(file); //Fechamento do arquivo
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,","); //espaçamento para inclusão de dados complementares
	fclose(file); //Fechamento do arquivo
	
	printf("Digite o cargo:\n "); //Armazenando o cargo a ser cadastrado
	scanf("%s",cargo);
	
	file =fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,cargo); //espaçamento para inclusão de dados complementares
	fclose(file); //Fechamento do arquivo
	
	system("pause"); //pause nas opções

}

int consulta() //Menu de consulta de usuários
{
	setlocale(LC_ALL, "Portuguese"); //Biblioteca de texto em português
	
	//Variáveis a serem consultadas
	char nome[200];
	char cargo[40];
	char cpf[40]; 
	char conteudo[100]; 
	

	int opcao=0; //Variaveis de opções
	int laco=1;
	
	for(laco=1;laco=1;)
	
	{
	system("cls"); //pause no menu
	
	setlocale (LC_ALL, "Portuguese"); //biblioteca de texto em português
	
	//Inicio do menu
	printf(" Escolha opção de consulta: \n");
	printf("\t1 - Nome Completo ou parcial\n");
	printf("\t2 - CPF\n");
	printf("\t3 - Cargo\n\n");
	
	scanf("%d", &opcao); //armazenando a escolha do usuário
	
	system("cls");

		switch(opcao) //inicio da selecão
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
		printf("Opção não disponivel\n");
		system("pause");
		break;
		} //Fim da seleção
}

 }

	
	FILE *file; //Seleciona o arquivo
	file = fopen(cpf,"r"); //Abre o arquivo
	
	if(file == NULL) //Opção caso não exista usuário com dados cadastrados
	{
		printf("CPF não cadastrado.\n"); //Informação para o usuário	
	}
	
	while (fgets(conteudo, 100, file) != NULL) //Procurada arquivos existentes
{
	printf("\n Essas são as informações do usuário: "); //Mensagem para o usuário sobre dados encontrados
	printf("%s",conteudo);
	printf("\n\n");	
}

	system ("pause"); //pause nas opções 

}
int deletar() //Menu de deletar usuários cadastrados
{
	char cpf[40]; //Variavel CPF
	
	printf("Digite o CPF a ser deletado:\n "); //Mensagem para o usuário inserir dados
	scanf ("%s", cpf); //Armazendando o CPF a ser deletado
	
	remove (cpf); //removendo cpf digitado pelo usuário		
	
	FILE *file; //Seleciona o arquivo
	file = fopen(cpf,"r"); //Abre o arquivo para leitura
	
	if (file == NULL) //Opção caso usuário não seja encontrado
	{
	printf("Usuário não encontrado no sistema\n"); //Mensagem para usuário de arquivo não encontrado.
	}
	
	system("pause"); //pausar menu

}
	
int main() //menu de opções do Cartório EBAC
{	
	int opcao=0; //Variaveis de opções
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls"); //pause no menu
	
		setlocale (LC_ALL, "Portuguese"); //biblioteca de texto em português
	
	//Inicio do menu
	printf(" ### Cartório da EBAC ###\n\n ");
	printf("Escolha a opção desejada: \n");
	printf("\t1 - Resgistrar usuário\n");
	printf("\t2 - Consultar usuário\n");
	printf("\t3 - Deletar usuário\n\n");
	printf("Digite a opção desejada: \n");
	//Fim dp menu
	
	scanf("%d", &opcao); //armazenando a escolha do usuário
	
	system("cls");

		switch(opcao) //inicio da selecão
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
		printf("Opção não disponivel\n");
		system("pause");
		break;
		} //Fim da seleção
	}


	//Fim do Software Cartório EBAC


	



