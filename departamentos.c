///////////////////////////////////////////////////////////////////////////////
///                                                                         ///
///               Universidade Federal do Rio Grande do Norte               ///
///                   Centro de Ensino Superior do Seridó                   ///
///                 Departamento de Computação e Tecnologia                 ///
///                    Disciplina DCT1106 -- Programação                    ///
///                  Projeto Sistema de Controle de Estoque                 ///
///            Developed by @ana678 and @daviddevolin - Out, 2021           ///
///                                                                         ///
///////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>

#include "departamentos.h"
#include "produtos.h"
#include "util.h"
#include "auxiliar.h"

void moduloDepartamentos(void) {
    char opcao;

    do {
        opcao = telaDepartamentos();
        switch (opcao){
            case '1':
                cadastrarDepartamento();
                break;
            case '2':
                //telaListarDepartamento();
                listaDepartamentosAtivos();
                break;
            case '3':
                telaVerProdutosDepartamento();
                break;
            case '4':
                listarDepartamentosOrdenadados();
                break;
            case '5':
                pesquisarDepartamento();
                break;
            case '6':
                atualizarDepartamento();
                break;
            case '7':
                excluirDepartamento();
                break;
        }		
    } while (opcao != '0');
}
/////


void cadastrarDepartamento(void) {
	Departamento* dep;

	dep = telaCadastrarDepartamento();
    
    if(buscarDepartamento(dep->cpf) == NULL){
        gravarDepartamento(dep);

    }else{
        system("clear||cls");
        printf("\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                         ///\n");
        printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
        printf("///                   Centro de Ensino Superior do Serido                   ///\n");
        printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
        printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
        printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
        printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
        printf("///                                                                         ///\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("///                                                                         ///\n");
        printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
        printf("///                                                                         ///\n");
        printf("///                             - Departamento -                            ///\n");
        printf("///                                                                         ///\n");
        printf("///             ###############################################             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ####        DEPARTAMENTO JA EXISTE!        ####             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ###############################################             ///\n");
        printf("///                                                                         ///\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
        getchar();
    }
	free(dep);
}

void pesquisarDepartamento(void) {
    
    Departamento* dep;
	char* cpf;

	cpf = telaPesquisarDepartamento();
    dep = buscarDepartamento(cpf);
    exibirDepartamento(dep);
    
    free(dep); 
	free(cpf);
}

void atualizarDepartamento(void) {
    Departamento* dep;
	char* cpf;
    cpf = telaEditarDepartamento();
    dep = buscarDepartamento(cpf);
    editarDepartamento(dep);
    
    free(dep); 
	free(cpf);
}

void excluirDepartamento(void) {
    Departamento* dep;
	char* cpf;

	cpf = telaExcluirDepartamentos();
    dep = buscarDepartamento(cpf);
    excluirDepartamentoExistente(dep);
    free(dep); 
	free(cpf);
}

/////
// Funcoes Relacionadas ao Modulo Departamentos

char telaDepartamentos(void) {
    //system("clear||cls");
    char escolha;

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                         - Modulo Departamentos -                        ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Cadastrar Novo Departamento                               ///\n");
    printf("///            2. Listar Departamentos                                      ///\n");
    printf("///            3. Listar Produtos Departamento                              ///\n");
    printf("///            4. Lista Ordenada dos Departamentos                          ///\n");
    printf("///            5. Pesquisar Departamento                                    ///\n");
    printf("///            6. Editar Departamento                                       ///\n");
    printf("///            7. Excluir Departamento                                      ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}

Departamento* telaCadastrarDepartamento(void) {  
    system("clear||cls");
    Departamento* dep;
	dep = (Departamento*) malloc(sizeof(Departamento));

    int *vet;

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                      - Cadastro de Departamentos -                      ///\n");
    printf("///                                                                         ///\n"); 

    do{ 
        printf("///            # Insira o nome do novo departamento: ");
        scanf("%[^\n]", dep->nome);
        getchar();
        
    }while(!validaNome(dep->nome));

    vet = (int*) malloc(11*sizeof(int));
    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Qual o CPF do responsavel pelo departamento? ");
        scanf("%[^\n]", dep->cpf);
        getchar();
        int tamArray = 11;
        cpftoi(dep->cpf,vet,tamArray);

    }while(!validaCpf(vet));
    free(vet);
    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Qual o nome do responsavel pelo departamento? ");
        scanf("%[^\n]", dep->nome_responsavel);
        getchar();

    }while(!validaNome(dep->nome_responsavel));
    dep->status = '1';

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();
   
   return dep;
}

/*void telaListarDepartamento(void) {
    system("clear||cls");
    int escolha;

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                       - Lista de Departamentos -                        ///\n");
    printf("///                                                                         ///\n");    
    printf("///            1. Frios e Laticineos                                        ///\n");
    printf("///            2. Produtos de Limpeza                                       ///\n");
    printf("///            3. Produtos Higienicos                                       ///\n");
    printf("///            4. Padaria e Confeitaria                                     ///\n");
    printf("///            5. Condimentos                                               ///\n");    
    printf("///            6. Enlatados                                                 ///\n");  
    printf("///            7. Bebidas                                                   ///\n");
    printf("///            8. Vestuario                                                 ///\n"); 
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();

}*/

char* telaExcluirDepartamentos(void) {
    system("clear||cls");
    char *cpf;
    int *vet;
    cpf = (char*) malloc(14*sizeof(char));
    
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                        - Excluir Departamento -                         ///\n");
    printf("///                                                                         ///\n");
      
    vet = (int*) malloc(11*sizeof(int));
    printf("///                                                                         ///\n");
    do{
         printf("///            # Insira o CPF do responsavel pelo departamento:  ");
        scanf("%[^\n]", cpf);
        getchar();
        int tamArray = 11;
        cpftoi(cpf,vet,tamArray);

    }while(!validaCpf(vet));
    free(vet);
    
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . O departamento esta sendo excluido ... ");
    sleep(1);

    return cpf;
}

char* telaEditarDepartamento(void) {

    char *cpf;
    cpf = (char*) malloc(14*sizeof(char));
    int *vet;

    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                         - Editar Departamento -                         ///\n");
    printf("///                                                                         ///\n");  

    vet = (int*) malloc(11*sizeof(int));
    printf("///                                                                         ///\n");
    do{
         printf("///            # Insira o CPF do responsavel pelo departamento:  ");
        scanf("%[^\n]", cpf);
        getchar();
        int tamArray = 11;
        cpftoi(cpf,vet,tamArray);

    }while(!validaCpf(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Voce sera redirecionado para tela de edicao ... ");
    sleep(1);
    
    return cpf;
}


char* telaPesquisarDepartamento(void) {
    system("clear||cls");
    char *cpf;
    cpf = (char*) malloc(14*sizeof(char));
    int *vet;
    
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                        - Pesquisar Departamento -                       ///\n");
    printf("///                                                                         ///\n");  

    vet = (int*) malloc(11*sizeof(int));
    printf("///                                                                         ///\n");
    do{
         printf("///            # Insira o CPF do responsavel pelo departamento:  ");
        scanf("%[^\n]", cpf);
        getchar();
        int tamArray = 11;
        cpftoi(cpf,vet,tamArray);

    }while(!validaCpf(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Voce sera redirecionado para os detalhes desse departamento ... ");
    sleep(1);

    return cpf;
}

void telaErroArquivoDepartamento(void) {  
    system("clear||cls");

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                             - Departamento -                            ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####      ERRO NA GRAVACAO DO ARQUIVO      ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamento ... ");
    getchar();

}



void DepartamentoView(Departamento* dep){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                             - Departamento -                            ///\n");
    printf("///                                                                         ///\n");

	if (dep == NULL) {
        printf("///             ###############################################             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ####       DEPARTAMENTO INEXISTENTE!       ####             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ###############################################             ///\n");

	} else {

        printf("///            -> Informacoes do Departamento                               ///\n");
        printf("///                                                                         ///\n");
        printf("///            . Nome do Departamento: %s\n",dep->nome);
        printf("///            . Nome Do Responsavel: %s\n",dep->nome_responsavel);
        printf("///            . Cpf do Responsavel: %s\n", dep->cpf);

	}
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

void gravarDepartamento(Departamento * dep) {
	FILE* fp;

	fp = fopen("departamentos.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoDepartamento();
	}
	fwrite(dep, sizeof(Departamento), 1, fp);
	fclose(fp);
}

Departamento* buscarDepartamento(char* cpf) {
	FILE* fp;
	Departamento* dep;

	dep = (Departamento*) malloc(sizeof(Departamento));
	fp = fopen("departamentos.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoDepartamento();
	}
	while(fread(dep, sizeof(Departamento), 1, fp)) {
		if ((strcmp(dep->cpf, cpf) == 0) && (dep->status == '1')) {
			fclose(fp);
			return dep;
		}
	}
	fclose(fp);
	return NULL;
}

void exibirDepartamento(Departamento* dep) {
    DepartamentoView(dep);
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();
}

void excluirDepartamentoExistente(Departamento* depLido){
    FILE* fp;
    Departamento* depArq;

    if (depLido == NULL) {
        departamentoInexistente();
    }
    else {
        if(certezaExclusaoDepartamento(depLido)){
            depArq = (Departamento*) malloc(sizeof(Departamento));
            fp = fopen("departamentos.dat", "r+b");
            if (fp == NULL) {
                telaErroArquivoDepartamento();
                exit(1);
            }
            while(fread(depArq, sizeof(Departamento), 1, fp)) {
                if ((strcmp(depArq->cpf, depLido->cpf) == 0) && (depArq->status == '1')) {
                    depArq->status = '0';
                    fseek(fp, -1*sizeof(Departamento), SEEK_CUR);
                    fwrite(depArq, sizeof(Departamento), 1, fp);
                    fclose(fp);
                    sucessoExclusaoDepartamento();
                }
            }
            fclose(fp);
        }
    }
    free(depArq);
}

int certezaExclusaoDepartamento(Departamento* dep){

    char resp;
    DepartamentoView(dep);
    printf("\n              # Tem CERTEZA que deseja excluir esse departamento (s/n)?  ");
    scanf("%c",&resp);
    getchar();

    if(tolower(resp) == 's'){
        return 1;
    }
    return 0;
}

void sucessoExclusaoDepartamento(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                             - Departamento -                            ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####          SUCESSO NA EXCLUSAO!         ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();
}

void sucessoEdicaoDepartamento(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                             - Departamento -                            ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####           SUCESSO NA EDICAO!          ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();
}

char* escolherElementoEditar(Departamento* dep){
    char editar[2];
    char* escolha_editar;
    escolha_editar = (char*) malloc(2*sizeof(char));
    int opMaxima = 3;

    DepartamentoView(dep);
    do{
        printf("\n              # Qual parametro deseja editar? (1,2,3) ");
        scanf("%[^\n]", escolha_editar);
        getchar();

    }while (!validaParametro(escolha_editar,opMaxima));

    return escolha_editar;
}

void editarDepartamento(Departamento* dep){
    FILE* fp;
    Departamento* depArq;
    char* escolha_editar;

    if (dep == NULL) {
        departamentoInexistente();
    }
    else {
        escolha_editar = escolherElementoEditar(dep);
        depArq = (Departamento*) malloc(sizeof(Departamento));
        fp = fopen("departamentos.dat", "r+b");
        if (fp == NULL) {
            telaErroArquivoDepartamento();
            exit(1);
        }

        while(fread(depArq, sizeof(Departamento), 1, fp)) {
            if ((strcmp(depArq->cpf, dep->cpf) == 0) && (depArq->status == '1')) {
                DepartamentoView(dep);

                if(escolha_editar[0] == '1'){
                    do{ 
                        printf("\n              # Insira o novo nome do departamento: ");
                        scanf("%[^\n]", depArq->nome);
                        getchar();
                    }while(!validaNome(depArq->nome));

                }else if (escolha_editar[0] == '2'){
                    do{
                        printf("\n              # Nome do novo responsavel: ");
                        scanf("%[^\n]", depArq->nome_responsavel);
                        getchar();
                    }while(!validaNome(depArq->nome_responsavel));

                }else if (escolha_editar[0] == '3'){

                    int* cpf;
                    cpf = (int*) malloc(11*sizeof(int));
                    do{
                        printf("\n              # Novo CPF do responsavel pelo departamento: ");
                        scanf("%[^\n]", depArq->cpf);
                        getchar();
                        int tamArray = 11;
                        cpftoi(depArq->cpf,cpf,tamArray);

                    }while(!validaCpf(cpf));
                    free(cpf);

                }

                fseek(fp, -1*sizeof(Departamento), SEEK_CUR);
                fwrite(depArq, sizeof(Departamento), 1, fp);
                fclose(fp);
                printf("\n              -> Editando o Departamento . . .");
                sleep(1);
                sucessoEdicaoDepartamento();
            }
        }
        fclose(fp);
    }
    free(escolha_editar);
    free(depArq);
}

void departamentoInexistente(void){
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                             - Departamento -                            ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####       DEPARTAMENTO INEXISTENTE!       ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();
}


void listaDepartamentosAtivos(void) {
    FILE* fp;
    Departamento* dep;
    dep = (Departamento*) malloc(sizeof(Departamento));

    fp = fopen("departamentos.dat","rb");
    if (fp == NULL){
        telaErroArquivoDepartamento();
        exit(1);
    }

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                   - Lista de Departamentos Ativos -                     ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///   |       CPF       |       Responsavel       |       Nome       |      ///\n");
    printf("///                                                                         ///\n");

    while(fread(dep, sizeof(Departamento), 1, fp)) {
        if (dep->status == '1') {
            printf("///     %s            %s                   %s        \n",dep->cpf,dep->nome_responsavel, dep->nome);

        }
    }

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();

    fclose(fp);
    free(dep);
}

char* telaInserirNomeDepartamento(void){

    char *nome;
    system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                          - Nome Departamento -                          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    nome = (char*) malloc(20*sizeof(char));
    do{
        printf("///            # Insira o nome do departamento:  ");
        scanf("%[^\n]", nome);
        getchar();
    }while(!validaNome(nome));
    
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Os produtos estao sendo pesquisados ... ");
    sleep(1);

    return nome;
}

void telaVerProdutosDepartamento(void) {  
    system("clear||cls");
    FILE* fp;
    Produto* prod;
    char *depLido;
    prod = (Produto*) malloc(sizeof(Produto));

    fp = fopen("produtos.dat","rb");
    if (fp == NULL){
        telaErroArquivoDepartamento();
        exit(1);
    }

    depLido = telaInserirNomeDepartamento();

    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                       - Produtos do Departamento -                      ///\n");
    printf("///                                                                         ///\n");
    printf("///             |      Codigo      |   Qtd   |      Nome      |             ///\n");
    printf("///                                                                         ///\n");
    while(fread(prod, sizeof(Produto), 1, fp)) {
        if((strcmp(prod->depar, depLido) == 0) && (prod->status == '1')){
            printf("///                %s        %s         %s  \n" ,prod->cod, prod->qtd, prod->nome);
        }
    }
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();

    fclose(fp);
    free(depLido);
    free(prod);
}


/*void apagarListaDepartamento(Departamento **lista){
    Departamento *dep;
    
    while (*lista != NULL)
    {
   	 dep = *lista;
   	 *lista = (*lista)->prox;
   	 free(dep);
    }
    //printf("Lista excluida com sucesso! \n");    
}*/

void listarDepartamentosOrdenadados(void){
    
    system("clear||cls");
    FILE *fp;
    int i; 
    Departamento* novoDep;
    Departamento* lista;

    fp = fopen("departamentos.dat","rb");
    if (fp == NULL){
        telaErroArquivoDepartamento();
        exit(1);
    }

    // Montando a lista ordenada
    lista = NULL;
    novoDep = (Departamento*) malloc(sizeof(Departamento));

    while(fread(novoDep, sizeof(Departamento),1, fp)){

        if (novoDep->status == '1'){    
            if (lista == NULL) {
                lista = novoDep;
                novoDep->prox = NULL;
            } else if (strcmp(novoDep->nome,lista->nome) < 0) {

                novoDep->prox = lista;
                lista = novoDep;

            } else {

                Departamento* anter = lista;
                Departamento* atual = lista->prox;

                while ((atual != NULL) && strcmp(atual->nome,novoDep->nome) < 0) {
                
                anter = atual;
                atual = atual->prox;

                }
                
                anter->prox = novoDep;
                novoDep->prox = atual;
            }
        }
        novoDep = (Departamento*) malloc(sizeof(Departamento));
    }
    fclose(fp);

    // Exibindo a lista ordenada
    novoDep = lista;
    i = 1;
    while (novoDep != NULL) {
        printf("%d. %s", i, novoDep->nome);
        novoDep = novoDep->prox;
        i++;
    }

     system("clear||cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///               Universidade Federal do Rio Grande do Norte               ///\n");
    printf("///                   Centro de Ensino Superior do Serido                   ///\n");
    printf("///                 Departamento de Computacao e Tecnologia                 ///\n");
    printf("///                    Disciplina DCT1106 -- Programacao                    ///\n");
    printf("///                  Projeto Sistema de Controle de Estoque                 ///\n");
    printf("///            Developed by @ana678 and @daviddevolin - Out, 2021           ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///           = = = = = Sistema de Controle de Estoques = = = = =           ///\n");
    printf("///                                                                         ///\n");
    printf("///                     - Lista de Departamentos Ordenados -                ///\n");
    printf("///                                                                         ///\n");    
    novoDep = lista;
    i = 1;
    while (novoDep != NULL) {
        printf("///            %d. %s\n", i, novoDep->nome);
        novoDep = novoDep->prox;
        i++;
    }
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
   
    // Limpando a memória
    novoDep = lista;
    while (lista != NULL) {
        lista = lista->prox;
        free(novoDep->nome);
        free(novoDep);
        novoDep = lista;
    }
    getchar();
}