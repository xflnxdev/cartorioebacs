#include <stdio.h>  //ninlioteca de comunica�ao com o usuario
#include <stdlib.h> //biblioteca de aloca�ao de espa�o em memoria
#include <locale.h> //bliblioteca de aloca�ao de texto por regiao
#include <string.h> //biblioteca responsavel por cuidar das strings

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];


	printf("Digite o CPF a ser cadastrado:");
	scanf("%s", cpf);

	strcpy(arquivo, cpf); //responsavel por copiar os vcalores das strings
	
	FILE *file; //cria o arquivo 
	file = fopen(arquivo,"w"); //cria o arquivo
	fprintf (file,cpf);// salvo o valor da variavel
	fclose(file); // fecho o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("digite o nome a ser cadastrado:");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado:");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado:");
	scanf("%s",cargo);
	
	file= fopen(arquivo,"a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");

	
}

int consulta()
{
	setlocale(LC_ALL, "Portuguese");
	
	char cpf[40];

	char conteudo[200];
	
	printf("Digite o CPF a ser consultado:");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");

	if(file == NULL)
	{
		printf("Nao foi possivel de abrir o arquivo, nao localizado!\n");
		
	}
	while(fgets(conteudo,200,file)!=NULL)
	{
		printf("\n Essas sao as informacoes do usuario:");
		printf("%s",conteudo);
		printf("\n\n"); 
		
	}
		
		system("pause"); 
			
			
			
			
			
			
			
			
			
			
			
}

int deletar()
{
	printf("Voce escolheu deletar nomes! \n");
			system("pause");
}




int main ()
{
	int opcao=0; //definindo as variaveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
		system("cls");
		
		setlocale(LC_ALL, "Portuguese");
	
		printf("### Cartorio da EBAC ###\n\n"); //definindo a linguagem
		printf("Escolha a op�ao desejada do menu\n\n"); //inicio do menu
		printf("\t1 - Registrar nomes\n");
		printf("\t2 - Consultar nomes\n");
		printf("\t3 - Deletar nomes \n\n");
		printf("Op�ao: "); //fin do menu
	
		scanf("%d",&opcao );
	
		system("cls");


		switch(opcao)
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
				printf("Essa opcao nao esta disponivel!\n");
			system("pause");
			break;
		}

	
	
	}
    
}
