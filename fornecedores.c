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

#include "fornecedores.h"
#include "util.h"
#include "auxiliar.h"

void moduloFornecedores(void) {
    char opcao;
    //Fornecedor *lista;
    //lista = NULL;

    do {
        opcao = telaFornecedores();
        switch(opcao) {
            case '1':
                cadastrarFornecedor();
                break;
            case '2':
                //telaListarFornecedores();
                listaFornecedoresAtivos();
                break;   
            case '3':
                listaFornecedoresPais();
                break;   
            case '4':
                pesquisarFornecedor();
                break;
            case '5':
                editarFornecedor();
                break;  
            case '6':
                excluirFornecedor();
                break;      
        } 		
    } while (opcao != '0');
}

/////
// Funcoes Relacionadas ao Modulo Fornecedores

void cadastrarFornecedor(void) {
	Fornecedor* forn;

    forn = telaCadastrarFornecedor();

    if(buscarFornecedor(forn->cnpj) == NULL){
        gravarFornecedor(forn);
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
        printf("///                              - Fornecedor -                             ///\n");
        printf("///                                                                         ///\n");
        printf("///             ###############################################             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ####         FORNECEDOR JA EXISTE!         ####             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ###############################################             ///\n");
        printf("///                                                                         ///\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
        getchar();
    
    }
    
	free(forn);
}

void pesquisarFornecedor(void) {
	Fornecedor* forn;
	char* cnpj;

	cnpj = telaPesquisarFornecedor();
	forn = buscarFornecedor(cnpj);
	exibirFornecedor(forn);
	free(forn); 
	free(cnpj);
}


void excluirFornecedor(void) {
    Fornecedor* forn;
	char* cnpj;

	cnpj = telaExcluirFornecedores();
    forn = buscarFornecedor(cnpj);
    excluirFornecedorExistente(forn);
    free(forn); 
	free(cnpj);
}

void editarFornecedor(void) {
    Fornecedor* forn;
	char* cnpj;

	cnpj = telaEditarFornecedor();
    forn = buscarFornecedor(cnpj);
    editarFornecedorExistente(forn);
    free(forn); 
	free(cnpj);
}

char telaFornecedores(void) {
    system("clear||cls");
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
    printf("///                         - Modulo Fornecedores -                         ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Cadastrar Novo Fornecedor                                 ///\n");
    printf("///            2. Listar Fornecedores                                       ///\n");
    printf("///            3. Listar Fornecedores por Pais                             ///\n");
    printf("///            4. Pesquisar Fornecedor                                      ///\n");
    printf("///            5. Editar Fornecedor                                         ///\n");
    printf("///            6. Excluir Fornecedor                                        ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}

Fornecedor* telaCadastrarFornecedor(void) {  
    system("clear||cls");

    Fornecedor* forn;
	forn = (Fornecedor*) malloc(sizeof(Fornecedor));
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
    printf("///                        - Cadastro de Fornecedor -                       ///\n");
    printf("///                                                                         ///\n");  
    do{
        printf("///            # Insira o nome do novo fornecedor: ");
        scanf("%[^\n]",forn->nome);
        getchar();
       
    }while (!validaNome(forn->nome));
    
    printf("///                                                                         ///\n");  
    printf("///            # Insira a razao social desse fornecedor: ");
    printf("\n"); 
    //NESTLE BRASIL LTDA. 
    char *razao;
    razao = (char*) malloc(73*sizeof(char));  
    preencheRazaoSocial(razao);
    strcpy(forn->razao_social,razao);
    free(razao);

    vet = (int*) malloc(14*sizeof(int));    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Qual o CNPJ desse fornecedor? ");
        scanf("%[^\n]",forn->cnpj);
        getchar(); 
        int tamArray = 14;
        cpftoi(forn->cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///            # Insira o endereco desse fornecedor: ");
    printf("\n");
    char *endereco;
    endereco = (char*) malloc(220*sizeof(char));  
    preencheEndereco(endereco);
    strcpy(forn->endereco,endereco);
    free(endereco);

    forn->status = '1';

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
    
    return forn;
}

/*void telaListarFornecedores(void) { 
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
    printf("///                       - Listagem de Fornecedores -                      ///\n");
    printf("///                                                                         ///\n");
    printf("///        |   N*  |         CNPJ        |     Nome da Empresa     |        ///\n");
    printf("///                                                                         ///\n");
    printf("///        |   1   | 14.854.618/0001-23  |         Havaianas       |        ///\n");
    printf("///        |   2   | 60.409.075/0001-52  |          Nestle         |        ///\n");
    printf("///        |   3   | 09.911.270/0001-29  |          Nescau         |        ///\n");
    printf("///        |   4   | 23.643.315/0110-06  |          Danone         |        ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
    
}*/

char* telaExcluirFornecedores(void) {
    system("clear||cls");
    char* cnpj;
    cnpj = (char*) malloc(19*sizeof(char));
    int *vet;
    
    printf("\n");
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
    printf("///                         - Excluir Fornecedor -                          ///\n");
    printf("///                                                                         ///\n");  
    vet = (int*) malloc(14*sizeof(int));    
    do{
        printf("///            # Insira o CNPJ do fornecedor: ");
        scanf("%[^\n]",cnpj);
        getchar(); 
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . O fornecedor esta sendo excluido ... ");
    sleep(1);


    return cnpj;
}

char* telaEditarFornecedor(void) {
    system("clear||cls");
    char* cnpj;
    cnpj = (char*) malloc(19*sizeof(char));
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
    printf("///                          - Editar Fornecedor -                          ///\n");
    printf("///                                                                         ///\n");  
    vet = (int*) malloc(14*sizeof(int));    
    do{
        printf("///            # Insira o CNPJ do fornecedor: ");
        scanf("%[^\n]",cnpj);
        getchar(); 
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Voce sera redirecionado para tela de edicao ... ");
    sleep(1);

    return cnpj;
}

char* telaPesquisarFornecedor(void) {
    system("clear||cls");
    char* cnpj;
    cnpj = (char*) malloc(19*sizeof(char));
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
    printf("///                         - Pesquisar Fornecedor -                        ///\n");
    printf("///                                                                         ///\n");  

    vet = (int*) malloc(14*sizeof(int));
    printf("///                                                                         ///\n");
    do{
        printf("///            # Insira o CNPJ do fornecedor:  ");
        scanf("%[^\n]", cnpj);
        getchar();
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);

    }while(!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Voce sera redirecionado para os detalhes desse fornecedor ... ");
    sleep(1);
    
    return cnpj;
}

void telaErroArquivoFornecedor(void) {  
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
    printf("///                              - Fornecedor -                             ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####      ERRO NA GRAVACAO DO ARQUIVO      ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();

}


void gravarFornecedor(Fornecedor* forn) {
	FILE* fp;

	fp = fopen("fornecedores.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoFornecedor();
	}
	fwrite(forn, sizeof(Fornecedor), 1, fp);
	fclose(fp);
}

Fornecedor* buscarFornecedor(char* cnpj) {
	FILE* fp;
	Fornecedor* forn;

	forn = (Fornecedor*) malloc(sizeof(Fornecedor));
	fp = fopen("fornecedores.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoFornecedor();
	}
	while(fread(forn, sizeof(Fornecedor), 1, fp)) {
		if ((strcmp(forn->cnpj, cnpj) == 0) && (forn->status == '1')) {
			fclose(fp);
			return forn;
		}
	}
	fclose(fp);
	return NULL;
}

void exibirFornecedor(Fornecedor* forn) {
    fornecedorView(forn);
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}

void excluirFornecedorExistente(Fornecedor* fornLido){
    FILE* fp;
    Fornecedor* fornArq;

    if (fornLido == NULL) {
        fornecedorInexistente();
    }
    else {
        if(certezaExclusaoFornecedor(fornLido)){
            fornArq = (Fornecedor*) malloc(sizeof(Fornecedor));
            fp = fopen("fornecedores.dat", "r+b");
            if (fp == NULL) {
                telaErroArquivoFornecedor();
                exit(1);
            }
            
            while(fread(fornArq, sizeof(Fornecedor), 1, fp)) {
                if ((strcmp(fornArq->cnpj, fornLido->cnpj) == 0) && (fornArq->status == '1')) {
                    fornArq->status = '0';
                    fseek(fp, -1*sizeof(Fornecedor), SEEK_CUR);
                    fwrite(fornArq, sizeof(Fornecedor), 1, fp);
                    fclose(fp);
                    sucessoExclusaoFornecedor();
                }
            }
            fclose(fp);
        }
    }
    free(fornArq);
}

int certezaExclusaoFornecedor(Fornecedor* forn){

    char resp;
    fornecedorView(forn);
    printf("\n              # Tem CERTEZA que deseja excluir esse fornecedor (s/n)?  ");
    scanf("%c",&resp);
    getchar();

    if(tolower(resp) == 's'){
        return 1;
    }
    return 0;
}

void sucessoExclusaoFornecedor(void){
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
    printf("///                              - Fornecedor -                             ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####          SUCESSO NA EXCLUSAO!         ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}

void sucessoEdicaoFornecedor(void){
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
    printf("///                              - Fornecedor -                             ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####           SUCESSO NA EDICAO!          ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}


void fornecedorView(Fornecedor* forn){
    
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
    printf("///                              - Fornecedor -                             ///\n");
    printf("///                                                                         ///\n");

	if (forn == NULL) {
        printf("///             ###############################################             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ####        FORNECEDOR INEXISTENTE!        ####             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ###############################################             ///\n");

	} else {

        printf("///            -> Informacoes do Fornecedor                                 ///\n");
        printf("///                                                                         ///\n");
        printf("///            . Nome do Fornecedor: %s\n", forn->nome);
        printf("///            . Razao Social: %s\n", forn->razao_social);
        printf("///            . CNPJ do Fornecedor: %s\n", forn->cnpj);
        printf("///            . Sede da Empresa: %s\n",forn->endereco);
	}
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

char* escolherElementoEditarFornecedor(Fornecedor* forn){
    char editar[2];
    char* escolha_editar;
    escolha_editar = (char*) malloc(2*sizeof(char));
    int opMaxima = 4;

    fornecedorView(forn);
    do{
        printf("\n              # Qual parametro deseja editar? (1,2,3,4) ");
        scanf("%[^\n]", escolha_editar);
        getchar();

    }while (!validaParametro(escolha_editar,opMaxima));

    return escolha_editar;
}

void editarFornecedorExistente(Fornecedor* forn){
    FILE* fp;
    Fornecedor* fornArq;
    char* escolha_editar;

    if (forn == NULL) {
        fornecedorInexistente();
    }
    else {
        escolha_editar = escolherElementoEditarFornecedor(forn);
        fornArq = (Fornecedor*) malloc(sizeof(Fornecedor));
        fp = fopen("fornecedores.dat", "r+b");
        if (fp == NULL) {
            telaErroArquivoFornecedor();
            exit(1);
        }

        while(fread(fornArq, sizeof(Fornecedor), 1, fp)) {
            if ((strcmp(fornArq->cnpj, forn->cnpj) == 0) && (fornArq->status == '1')) {
                fornecedorView(forn);

                if(escolha_editar[0] == '1'){
                    do{
                        printf("\n              # Novo nome do fornecedor: ");
                        scanf("%[^\n]",fornArq->nome);
                        getchar();
                    
                    }while (!validaNome(fornArq->nome));

                }else if (escolha_editar[0] == '2'){
                    printf("\n              # Insira a razao social desse fornecedor: ");
                    printf("\n"); 
                    char *razao;
                    razao = (char*) malloc(73*sizeof(char));  
                    preencheRazaoSocial(razao);
                    strcpy(fornArq->razao_social,razao);
                    free(razao);

                }else if (escolha_editar[0] == '3'){
                    int *vet;
                    vet = (int*) malloc(14*sizeof(int));    
                    do{
                        printf("\n              # Novo CNPJ desse fornecedor? ");
                        scanf("%[^\n]",fornArq->cnpj);
                        getchar(); 
                        int tamArray = 14;
                        cpftoi(fornArq->cnpj,vet,tamArray);
                        
                    }while (!validaCnpj(vet));
                    free(vet);

                }else if(escolha_editar[0] == '4'){
                    printf("\n              # Novo endereco do fornecedor: ");
                    printf("\n");
                    char *endereco;
                    endereco = (char*) malloc(220*sizeof(char));  
                    preencheEndereco(endereco);
                    strcpy(fornArq->endereco,endereco);
                    free(endereco);
                }

                fseek(fp, -1*sizeof(Fornecedor), SEEK_CUR);
                fwrite(fornArq, sizeof(Fornecedor), 1, fp);
                fclose(fp);
                printf("\n              -> Editando o Fornecedor . . .");
                sleep(1);
                sucessoEdicaoFornecedor();
            }
        }
        fclose(fp);
    }
    free(fornArq);
}


void fornecedorInexistente(void){
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
    printf("///                              - Fornecedor -                             ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####       FORNECEDOR INEXISTENTE!         ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}

void listaFornecedoresAtivos(void) {
    FILE* fp;
    Fornecedor* forn;
    forn = (Fornecedor*) malloc(sizeof(Fornecedor));

    fp = fopen("fornecedores.dat","rb");
    if (fp == NULL){
        telaErroArquivoFornecedor();
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
    printf("///                   - Lista de Fornecedores Ativos -                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("/// |       CNPJ        |    Nome    |     R.S     |       Endereco       | ///\n");
    printf("///                                                                         ///\n");

    while(fread(forn, sizeof(Fornecedor), 1, fp)) {
        if (forn->status == '1') {
            printf("///  %s   %s         %s            %s\n",forn->cnpj,forn->nome, forn->razao_social, forn->endereco);

        }
    }

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();

    fclose(fp);
    free(forn);

}


char* selecionarPais(void){
    char *pais;
    pais = (char*)malloc(3*sizeof(char));

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
    printf("///                         - Pesquisar Fornecedor -                        ///\n");
    printf("///                                                                         ///\n");  
    printf("///                                                                         ///\n");
    do{
        printf("///            # Insira o pais que deseja pesquisar:  ");
        scanf("%[^\n]", pais);
        getchar();
    }while(!validaPais(pais));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Pesquisando Fornecedores ... ");
    sleep(1);

    return pais;
}

void listaFornecedoresPais(void) {
    FILE* fp;
    Fornecedor* forn;
    forn = (Fornecedor*) malloc(sizeof(Fornecedor));

    fp = fopen("fornecedores.dat","rb");
    if (fp == NULL){
        telaErroArquivoFornecedor();
        exit(1);
    }
    char* pais;
    char* ultimoscaracteres;
    pais = selecionarPais();

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
    printf("///                   - Lista de Fornecedores Ativos -                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("/// |       CNPJ        |    Nome    |     R.S     |       Endereco       | ///\n");
    printf("///                                                                         ///\n");

    while(fread(forn, sizeof(Fornecedor), 1, fp)) {
        ultimoscaracteres = pegarDoisUltimos(forn->endereco);
        if (forn->status == '1' && (strcmp(ultimoscaracteres, pais) == 0)) {
            printf("///  %s   %s         %s            %s\n",forn->cnpj,forn->nome, forn->razao_social, forn->endereco);

        }
    }

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();

    fclose(fp);
    free(pais);
    free(ultimoscaracteres);
    free(forn);
}