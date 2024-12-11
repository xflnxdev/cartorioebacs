#include <stdio.h>  //biblioteca de comunica�ao com o usuario
#include <stdlib.h> //biblioteca de aloca�ao de espa�o em memoria
#include <locale.h> //bliblioteca de aloca�ao de texto por regiao
#include <string.h> //biblioteca responsavel por cuidar das strings

int registro() // opcao registrar
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
	
	system("pause"); // fin da opcao registrar

	
}

int consulta() // opcao consultar
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
		
		system("pause"); //fin da opcao consultar
			
			
			
			
			
			
			
			
			
			
			
}

int deletar() //opcao deletar
{
	char cpf[40];
	
	printf("Digite o cpf a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
   
    FILE *file;
    file = fopen(cpf, "r"); 
    
    if (file == NULL) {
        printf("O usuario nao se encontra no sistema! \n");
        system("pause");
		} 
	    else {
        fclose(file); 
        remove(cpf);  
        printf("CPF deletado com sucesso!\n");
        system("pause");
    }
	
			//fin da opcao deletar
}




int main ()
{
	int opcao=0; //definindo as variaveis
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
	printf("### Cartorio da EBAC ###\n\n");
	printf("login de administrado\n\nDigite a sua senha:"); //criacao de senha
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(senhadigitada,"admin");
	
	if(comparacao ==0)
	{
	 
	        
	        
	    
          	for(laco=1;laco=1;)
	        {
	
		   system("cls");
		
		   setlocale(LC_ALL, "Portuguese");
	 
		     printf("### Cartorio da EBAC ###\n\n"); //definindo a linguagem
		      printf("Escolha a op�ao desejada do menu\n\n"); //inicio do menu
		     printf("\t1 - Registrar nomes\n");
		     printf("\t2 - Consultar nomes\n");
		      printf("\t3 - Deletar nomes \n\n");
		       printf("\t4 - sair do sistema \n\n ");
	
	        //fin do menu
	
		            scanf("%d",&opcao );
	
		          system("cls");


	        	switch(opcao) //inicio da selecao do menu
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
			   printf("obrigado por utilizar o sistema\n");
			   return 0;
			     break;
			
	
			
			   default:
				printf("Essa opcao nao esta disponivel!\n");
	
			   	   system("pause");
		         break;//fin da selecao de menu
		         
			} }
     
	
	
			}
    else
        printf("senha incoreta"); //fin da criacao de senha
    
}
       
