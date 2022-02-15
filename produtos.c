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

#include "produtos.h"
#include "auxiliar.h"
#include "util.h"

void moduloProdutos(void) {
    char opcao;
    //Produto *lista;
    //lista = NULL;

    do {
        opcao = telaProdutos();
        switch(opcao) {
            case '1': 	
                cadastrarProduto();
                break;
            case '2':
                listaProdutosAtivos(); 	
                break;
            case '3': 	
                pesquisarProduto();
                break;
            case '4': 	
                cadastrarFluxoProdutos();
                break;
            case '5': 
                telaRelatoriosProdutos();	
                break;
            case '6': 	
                atualizarProduto();
                break;
            case '7':
                excluirProduto();
                break;
        } 		
    } while (opcao != '0');
}

/////
// Funcoes Relacionadas ao Modulo Produtos

void cadastrarProduto(void) {
	Produto* prod;

	prod = telaCadastrarProduto();

    if(buscarProduto(prod->cod) == NULL){
        gravarProduto(prod);
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
        printf("///                                - Produto -                              ///\n");
        printf("///                                                                         ///\n");
        printf("///             ###############################################             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ####           PRODUTO JA EXISTE!          ####             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ###############################################             ///\n");
        printf("///                                                                         ///\n");
        printf("///////////////////////////////////////////////////////////////////////////////\n");
        printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
        getchar();
    }

	free(prod);
}

void pesquisarProduto(void) {
    
    Produto* prod;
	char* cod;

	cod = telaPesquisarProduto();
    prod = buscarProduto(cod);
    exibirProduto(prod);
    free(prod); 
	free(cod);
}

void atualizarProduto(void) {
    Produto* prod;
	char* cod;

	cod = telaEditarProduto();
    prod = buscarProduto(cod);
    editarProduto(prod);
    
    free(prod); 
	free(cod);
}

void excluirProduto(void){
    Produto *prod;
    char* cod;

    cod = telaExcluirProdutos();
    prod = buscarProduto(cod);
    excluirProdutoExistente(prod);
    free(prod); 
	free(cod);
}

void cadastrarFluxoProdutos(void){
    Produto *prod;
    char* cod;

    cod = telaFluxoProdutos();
    prod = buscarProduto(cod);
    cadastrarFluxoProdutoExistente(prod);
    free(prod); 
	free(cod);
}

char telaProdutos(void) {  
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
    printf("///                           - Modulo Produtos -                           ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Cadastrar Novo Produto                                    ///\n"); 
    printf("///            2. Listar Produtos                                           ///\n");
    printf("///            3. Pesquisar Produto                                         ///\n");
    printf("///            4. Cadastrar Fluxo de Produtos                               ///\n");   
    printf("///            5. Obter um Relatorio                                        ///\n");
    printf("///            6. Editar um Produto                                         ///\n");
    printf("///            7. Excluir um Produto                                        ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}


Produto* telaCadastrarProduto(void) {  
    system("clear||cls");

    Produto* prod;
	prod = (Produto*) malloc(sizeof(Produto));
    
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
    printf("///                         - Cadastro de Produto -                         ///\n");
    printf("///                                                                         ///\n");  
    do{
        printf("///            # Insira o nome do novo produto: ");
        scanf("%[^\n]", prod->nome);
        getchar();

    }while (!validaNome(prod->nome));
    
    printf("///                                                                         ///\n");  
    do{
        printf("///            # Insira o codigo desse produto: ");
        scanf("%[^\n]", prod->cod);
        getchar();

    }while (!validaCDB(prod->cod));   
    
    vet = (int*) malloc(14*sizeof(int));    
    printf("///                                                                         ///\n");      		
    do{
        printf("///            # Insira o CNPJ do fornecedor: ");
        scanf("%[^\n]", prod->cnpj);
        getchar();
        int tamArray = 14;
        cpftoi(prod->cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);
    
    printf("///                                                                         ///\n"); 
    do{
        printf("///            # Insira o nome do departamento: ");
        scanf("%[^\n]", prod->depar);
        getchar();
    }while(!validaNome(prod->depar));
    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Quantidade atual do produto: ");
        scanf("%[^\n]", prod->qtd);
        getchar();
    }while(!validaQuantidade(prod->qtd));
    
    printf("///                                                                         ///\n");    
    do{
        printf("///            # Qual a quantidade MINIMA ideal desse produto? ");
        scanf("%[^\n]", prod->qtd_minima);
        getchar();

    }while(!validaQuantidade(prod->qtd_minima));
    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Qual a quantidade MAXIMA ideal desse produto? ");
        scanf("%[^\n]", prod->qtd_maxima);
        getchar();

    }while(!validaQuantidade(prod->qtd_maxima));
    
    prod->status = '1';

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();

    return prod;
}


char* telaPesquisarProduto(void) {
    system("clear||cls");
    char* cod;
    cod = (char*) malloc(14*sizeof(char));

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
    printf("///                          - Pesquisar Produto -                         ///\n");
    printf("///                                                                         ///\n");  

    do{    
        printf("///            # Insira o codigo do produto:  ");
        scanf("%[^\n]", cod);
        getchar();
    }while (!validaCDB(cod));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Voce sera redirecionado para os detalhes do produto ... ");
    sleep(1);
    
    return cod;
}

void telaRelatoriosProdutos(void) {  
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
    printf("///                       - Relatorio dos Produtos -                        ///\n");
    printf("///                                                                         ///\n");
    printf("///            | Codigo do Produto | Quantidade | Situacao |                ///\n");
    printf("///                                                                         ///\n");
    printf("///            | 0193467787878     |     6      | Estavel  |                ///\n");
    printf("///            | 0193467799975     |     11     | Excesso  |                ///\n");
    printf("///            | 0193345657689     |     8      | Escassa  |                ///\n");
    printf("///            | 1343490657878     |     20     | Excesso  |                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();

}

char* telaFluxoProdutos(void) {  
    system("clear||cls");
    
    char* cod;
    cod = (char*) malloc(14*sizeof(char));
    
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
    printf("///                          - Fluxo de Produtos -                          ///\n");
    printf("///                                                                         ///\n");  
    do{
        printf("///            # Insira o codigo do produto: ");
        scanf("%[^\n]", cod);
        getchar();
    }while (!validaCDB(cod));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . O Produto esta sendo procurado ... ");
    sleep(1);

    return cod;

}

char* telaExcluirProdutos(void) {
    system("clear||cls");
    char* cod;
    cod = (char*) malloc(14*sizeof(char));

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
    printf("///                           - Excluir Produto -                           ///\n");
    printf("///                                                                         ///\n");  
    do{    
        printf("///            # Insira o codigo do produto:  ");
        scanf("%[^\n]", cod);
        getchar();
    }while (!validaCDB(cod));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . O Produto esta sendo excluido ... ");
    sleep(1);

    return cod;
}


char* telaEditarProduto(void) {
    system("clear||cls");
    char* cod;
    cod = (char*) malloc(14*sizeof(char));

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
    printf("///                            - Editar Produto -                           ///\n");
    printf("///                                                                         ///\n");  
    do{    
        printf("///            # Insira o codigo do produto:  ");
        scanf("%[^\n]", cod);
        getchar();
    }while (!validaCDB(cod));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Voce sera redirecionado para tela de edicao ... ");
    sleep(1);

    return cod;
}

void telaErroArquivoProduto(void) {  
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
    printf("///                                - Produto -                              ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####      ERRO NA GRAVACAO DO ARQUIVO      ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();

}

void gravarProduto(Produto* prod) {
	FILE* fp;

	fp = fopen("produtos.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoProduto();
	}
	fwrite(prod, sizeof(Produto), 1, fp);
	fclose(fp);
}


Produto* buscarProduto(char* cod) {
	FILE* fp;
	Produto* prod;

	prod = (Produto*) malloc(sizeof(Produto));
	fp = fopen("produtos.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoProduto();
	}
	while(fread(prod, sizeof(Produto), 1, fp)) {
		if ((strcmp(prod->cod, cod) == 0) && (prod->status == '1')) {
			fclose(fp);
			return prod;
		}
	}
	fclose(fp);
	return NULL;
}

void exibirProduto(Produto* prod) {
    produtoView(prod);
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();
}


void excluirProdutoExistente(Produto* prodLido){

    FILE* fp;
    Produto* prodArq;

    if (prodLido == NULL) {
        produtoInexistente();
    }
    else {
        if(certezaExclusaoProduto(prodLido)){
            prodArq = (Produto*) malloc(sizeof(Produto));
            fp = fopen("produtos.dat", "r+b");
            if (fp == NULL) {
                telaErroArquivoProduto();
                exit(1);
            }
            while(fread(prodArq, sizeof(Produto), 1, fp)) {
                if ((strcmp(prodArq->cod, prodLido->cod) == 0) && (prodArq->status == '1')) {
                    prodArq->status = '0';
                    fseek(fp, -1*sizeof(Produto), SEEK_CUR);
                    fwrite(prodArq, sizeof(Produto), 1, fp);
                    fclose(fp);
                    sucessoExclusaoProduto();
                }
            }
            fclose(fp);
        }
    }
    free(prodArq);
}

int certezaExclusaoProduto(Produto* prod){

    char resp;
    produtoView(prod);
    printf("\n              # Tem CERTEZA que deseja excluir esse produto (s/n)?  ");
    scanf("%c",&resp);
    getchar();

    if(tolower(resp) == 's'){
        return 1;
    }
    return 0;
}

void sucessoExclusaoProduto(void){
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
    printf("///                                - Produto -                              ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####          SUCESSO NA EXCLUSAO!         ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();
}

void sucessoEdicaoProduto(void){
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
    printf("///                                - Produto -                              ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####           SUCESSO NA EDICAO!          ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();
}

void produtoView(Produto* prod){

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
    printf("///                                - Produto -                              ///\n");
    printf("///                                                                         ///\n");
    if (prod == NULL) {
        printf("///             ###############################################             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ####          PRODUTO INEXISTENTE!         ####             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ###############################################             ///\n");

	} else {
    printf("///            -> Informacoes do Produto                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            . Codigo do Produto: %s\n",prod->cod);
    printf("///            . Nome do Produto: %s\n",prod->nome);
    printf("///            . CNPJ Fornecedor: %s\n",prod->cnpj);
    printf("///            . Departamento: %s\n",prod->depar);
    printf("///            . Quantidade Atual: %s\n",prod->qtd);
    printf("///            . Quantidade Minima Ideal: %s\n",prod->qtd_minima);
    printf("///            . Quantidade Maxima Ideal: %s\n",prod->qtd_maxima);
    }
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
}

char* escolherElementoEditarProduto(Produto* prod){
    char editar[2];
    char* escolha_editar;
    escolha_editar = (char*) malloc(2*sizeof(char));
    int opMaxima = 7;

    produtoView(prod);
    do{
        printf("\n              # Qual parametro deseja editar? (1,2,3,4,5,6,7) ");
        scanf("%[^\n]", escolha_editar);
        getchar();

    }while (!validaParametro(escolha_editar,opMaxima));

    return escolha_editar;
}

void editarProduto(Produto* prod){
    FILE* fp;
    Produto* prodArq;
    char* escolha_editar;

    if (prod == NULL) {
        produtoInexistente();
    }
    else {
        escolha_editar = escolherElementoEditarProduto(prod);
        prodArq = (Produto*) malloc(sizeof(Produto));
        fp = fopen("produtos.dat", "r+b");
        if (fp == NULL) {
            telaErroArquivoProduto();
            exit(1);
        }

        while(fread(prodArq, sizeof(Produto), 1, fp)) {
            if ((strcmp(prodArq->cod, prod->cod) == 0) && (prodArq->status == '1')) {
                produtoView(prod);

                if(escolha_editar[0] == '1'){
                    do{
                        printf("\n              # Novo codigo do produto: ");
                        scanf("%[^\n]", prodArq->cod);
                        getchar();
                    }while (!validaCDB(prodArq->cod));  

                }else if (escolha_editar[0] == '2'){
 
                    do{
                        printf("\n              # Novo nome do produto: ");
                        scanf("%[^\n]", prodArq->nome);
                        getchar();

                    }while (!validaNome(prodArq->nome));
                }else if (escolha_editar[0] == '3'){

                    int* vet;
                    vet = (int*) malloc(14*sizeof(int));      		
                    do{
                        printf("\n              # Novo CNPJ do fornecedor: ");
                        scanf("%[^\n]", prodArq->cnpj);
                        getchar();
                        int tamArray = 14;
                        cpftoi(prodArq->cnpj,vet,tamArray);
                        
                    }while (!validaCnpj(vet));
                    free(vet);

                }else if (escolha_editar[0] == '4'){
                    do{
                        printf("\n              # Novo nome do departamento: ");
                        scanf("%[^\n]", prodArq->depar);
                        getchar();
                    }while(!validaNome(prodArq->depar));
    
                }else if (escolha_editar[0] == '5'){
                    do{
                        printf("\n              # Nova quantidade atual do produto: ");
                        scanf("%[^\n]", prodArq->qtd);
                        getchar();
                    }while(!validaQuantidade(prodArq->qtd));
                }
                else if (escolha_editar[0] == '6'){
                    do{
                        printf("\n              # Nova quantidade MINIMA ideal: ");
                        scanf("%[^\n]", prodArq->qtd_minima);
                        getchar();

                    }while(!validaQuantidade(prodArq->qtd_minima));

                }else if (escolha_editar[0] == '7'){
                    do{
                        printf("\n              # Nova quantidade MAXIMA ideal: ");
                        scanf("%[^\n]", prodArq->qtd_maxima);
                        getchar();

                    }while(!validaQuantidade(prodArq->qtd_maxima));
                } 

                fseek(fp, -1*sizeof(Produto), SEEK_CUR);
                fwrite(prodArq, sizeof(Produto), 1, fp);
                fclose(fp);
                printf("\n              -> Editando Produto . . .");
                sleep(1);
                sucessoEdicaoProduto();
            }
        }
        fclose(fp);
    }
    free(prodArq);
}

char* escolhaFluxo(Produto* prod){
    char* acao;
    acao = (char*) malloc(2*sizeof(char));
    produtoView(prod);
    do{
        printf("\n              # Deseja (a) adicionar ou (r) retirar do estoque? ");
        scanf("%[^\n]", acao);
        getchar();
    }while (!validaAcao(acao));

    return acao;
}

void cadastrarFluxoProdutoExistente(Produto* prod){
    FILE* fp;
    Produto* prodArq;
    char* escolha;
    char qtd[10];
    char result[10];

    if (prod == NULL) {
        produtoInexistente();
    }
    else {  
        escolha = escolhaFluxo(prod);
        prodArq = (Produto*) malloc(sizeof(Produto));
        fp = fopen("produtos.dat", "r+b");
        if (fp == NULL) {
            telaErroArquivoProduto();
            exit(1);
        }

        while(fread(prodArq, sizeof(Produto), 1, fp)) {
            if ((strcmp(prodArq->cod, prod->cod) == 0) && (prodArq->status == '1')) {
                produtoView(prod);
                do{
                    printf("\n              # Qual a quantidade? ");
                    scanf("%[^\n]", qtd);
                    getchar();
                    
                }while(!validaQuantidade(qtd));

                int a,b;

                a = atoi(prod->qtd);
                b = atoi(qtd);

                if(escolha[0] == 'a'){
                    itoa((a+b),result,10);
                }else if(escolha[0] == 'r'){
                    itoa((a-b),result,10);
                }  

                strcpy(prodArq->qtd,result);
                        
                fseek(fp, -1*sizeof(Produto), SEEK_CUR);
                fwrite(prodArq, sizeof(Produto), 1, fp);
                fclose(fp);
                printf("\n              -> Cadastrando Fluxo . . .");
                sleep(1);
                sucessoEdicaoProduto();
            }
        }
        fclose(fp);
    }
    free(prodArq);
}

void produtoInexistente(void){
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
    printf("///                                - Produto -                              ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####          PRODUTO INEXISTENTE!         ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produto ... ");
    getchar();
}

void listaProdutosAtivos(void) {
    FILE* fp;
    Produto* prod;
    prod = (Produto*) malloc(sizeof(Produto));

    fp = fopen("produtos.dat","rb");
    if (fp == NULL){
        telaErroArquivoProduto();
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
    printf("///                   - Lista de Produtos Ativos -                          ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///  |     Codigo     |     Nome    | Qtd |      Fornecedor    |   Dep.   | ///\n");
    printf("///                                                                         ///\n");

    while(fread(prod, sizeof(Produto), 1, fp)) {
        if (prod->status == '1') {
            printf("///    %s       %s       %s     %s      %s\n" ,prod->cod, prod->nome, prod->qtd, prod->cnpj,prod->depar);

        }
    }

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();

    fclose(fp);
    free(prod);
}