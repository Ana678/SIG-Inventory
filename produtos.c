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
#include "produtos.h"
#include "auxiliar.h"
#include "util.h"

void moduloProdutos(void) {
    char opcao;
    do {
        opcao = telaProdutos();
        switch(opcao) {
            case '1': 	
                telaCadastrarProduto();
                break;
            case '2': 	
                telaFluxoProdutos();
                break;
            case '3': 	
                telaPesquisarProdutos();
                break;
            case '4': 	
                telaRelatoriosProdutos();
                break;
            case '5': 	
                telaEditarProduto();
                break;
            case '6': 	
                telaExcluirProdutos();
                break;
        } 		
    } while (opcao != '0');
}

/////
// Funcoes Relacionadas ao Modulo Produtos

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
    printf("///            2. Cadastrar Fluxo de Produtos                               ///\n");
    printf("///            3. Pesquisar Produto                                         ///\n");
    printf("///            4. Obter um Relatorio                                        ///\n");
    printf("///            5. Editar um Produto                                         ///\n");
    printf("///            6. Excluir um Produto                                        ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}


void telaCadastrarProduto(void) {  
    system("clear||cls");
    
    char cnpj[19];
    int *vet;

    char prod[20];
    char cod[14];
    
    char depar[10];
    char qtd[10];
    char qtd_minima[10];
    char qtd_maxima[10];

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
        scanf("%[^\n]", prod);
        getchar();

    }while (!validaNome(prod));
    
    printf("///                                                                         ///\n");  
    do{
        printf("///            # Insira o codigo desse produto: ");
        scanf("%[^\n]", cod);
        getchar();

    }while (!validaCDB(cod));   
    
    vet = (int*) malloc(14*sizeof(int));    
    printf("///                                                                         ///\n");      		
    do{
        printf("///            # Insira o CNPJ do fornecedor: ");
        scanf("%[^\n]", cnpj);
        getchar();
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);
    
    printf("///                                                                         ///\n"); 
    do{
        printf("///            # Insira o nome do departamento: ");
        scanf("%[^\n]", depar);
        getchar();
    }while(!validaNome(depar));
    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Quantidade inicial do produto: ");
        scanf("%[^\n]", qtd);
        getchar();
    }while(!validaQuantidade(qtd));
    
    printf("///                                                                         ///\n");    
    do{
        printf("///            # Qual a quantidade minima ideal desse produto? ");
        scanf("%[^\n]", qtd_minima);
        getchar();

    }while(!validaQuantidade(qtd_minima));
    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Qual a quantidade maxima ideal desse produto? ");
        scanf("%[^\n]", qtd_maxima);
        getchar();

    }while(!validaQuantidade(qtd_maxima));
    
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();
}

void telaPesquisarProdutos(void) {  
    system("clear||cls");

    int escolha;
    char cod[14];

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
    printf("///                               - Produtos -                              ///\n");
    printf("///                                                                         ///\n");
    do{
        printf("///            # Insira o codigo do produto que esta procurando? ");
        scanf("%[^\n]", cod);
        getchar();
    }while (!validaCDB(cod));  
        
    printf("///                                                                         ///\n");
    printf("///            -> Informacoes do produto                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            . Codigo: 0012343566778                                      ///\n");
    printf("///            . Nome: Chinelo Preto                                        ///\n");
    printf("///            . Marca: Havaianas                                           ///\n");
    printf("///            . Quantidade: 14                                             ///\n");
    printf("///            . Departamento: Vestuario                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();

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

void telaModificarProduto(void) {  
    system("clear||cls");

    char editar[2];
    char escolha_editar[2];
    int opMaxima = 7;

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
    printf("///                           - Editar Produto -                            ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Codigo do Produto: 0192942442                             ///\n");
    printf("///            2. Nome do Produto: Chinelo Preto                            ///\n");
    printf("///            3. Marca Fornecedora: Havaianas                              ///\n");
    printf("///            4. Quantidade Atual: 14                                      ///\n");
    printf("///            5. Departamento: Vestuario                                   ///\n");
    printf("///            6. Quantidade Minima Ideal: 12                               ///\n");
    printf("///            7. Quantidade Maxima Ideal: 40                               ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    do{
        printf("///            # Deseja editar algum parametro(s/n)? ");
        scanf("%[^\n]", editar);
        getchar();

    }while(!validaOpcao(editar));

    printf("///                                                                         ///\n");  
    do{
        printf("///              . Qual parametro deseja editar? ");
        scanf("%[^\n]", escolha_editar);
        getchar();
        
    }while(!validaParametro(escolha_editar,opMaxima));
    

    printf("\n///              . Novo Nome do Produto: Chinelo Rosa                       ///\n");
    printf("///                                                                         ///\n");
    do{
        printf("///            # Deseja editar algum parametro(s/n)? ");
        scanf("%[^\n]", editar);
        getchar();

    }while(!validaOpcao(editar));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();

}

void telaFluxoProdutos(void) {  
    system("clear||cls");
    
    char cod[14];
    char acao[2];
    char qtd[10];
    
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
    do{
        printf("///            # Deseja (a) adicionar ou (r) retirar do estoque? ");
        scanf("%[^\n]", acao);
        getchar();
    }while (!validaAcao(acao));

    printf("///                                                                         ///\n");
    do{
        printf("///            # Qual a quantidade? ");
        scanf("%[^\n]", qtd);
        getchar();
        
    }while(!validaQuantidade(qtd));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();

}

void telaExcluirProdutos(void) {
    system("clear||cls");
    char cod[14];   

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
    printf("\n              # Pressione ENTER para voltar para Menu de Produtos ... ");
    getchar();
}


void telaEditarProduto(void) {
    system("clear||cls");
    char cod[14];
    
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
    telaModificarProduto();
}