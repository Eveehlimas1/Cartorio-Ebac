#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> // biblioteca de strings

int registro()
{
	char arquivo[40];
	char nome[40];
	char sobrenome[40];
	char cpf[40];
	char cargo[40];
	
	printf("Digite o nome a ser cadastrado:\n ");
	scanf("%s",nome);
	
	strcpy(arquivo,nome); // Responsável por copiar o valor da string (nome)
	
	FILE *file; //cria o arquivo
	file = fopen(arquivo, "w"); //escreve no arquivo criado
	fprintf(file,nome); //salva o valor da variável (nome)
	fclose(file); //fecha o arquivo
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome:\n ");
	scanf("%s", sobrenome);
	
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o CPF: \n");
	scanf("%s", cpf);
	
	file = fopen(arquivo,"a");
	fprintf(file,cpf);
	fclose(file);
	
	file = fopen(arquivo,"a"); //atualiza dados do arquivo 
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo:\n ");
	scanf("%s",cargo);
	
	file =fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");

}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:\n");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("CPF não cadastrado.\n");	
	}
	
	while (fgets(conteudo, 200, file) != NULL)
	{
	printf("\n Essas são as informações do usuário: ");
	printf("%s",conteudo);
	printf("\n\n");	
	}

	system ("pause");

}

int deletar()
{	
	setlocale(LC_ALL, "Portugese");
	
	char cpf[40];

	printf("Digite o CPF a ser deletado:\n ");
	scanf("%s", cpf);
	
	remove (cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Usuário não encontrado no sistema\n");
		system("pause");
	}
}

int main()
{	
	int opcao=0;
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls");		
	
		setlocale (LC_ALL, "Portuguese");
	
	//Inicio do menu
	printf(" ### Cartório da EBAC ###\n\n ");
	printf("Escolha a opção desejada: \n");
	printf("\t1 - Resgistrar usuário\n");
	printf("\t2 - Consultar usuário\n");
	printf("\t3 - Deletar usuário\n\n");
	printf("\t4 - Sair do sistema\n");
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
			
			case 4:
			printf("Obrigada por utilizar o sistema. \n\n");
			return 0;
			break;
			
			
			
			default:
			printf("Opção não disponivel\n");
			system("pause");
			break;
			} //Fim da seleção
		}
	}



	



