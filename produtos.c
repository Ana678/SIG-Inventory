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

void moduloProdutos(void) {
    char opcao;
    do {
        opcao = telaProdutos();
        switch(opcao) {
            case '1': 	
                system("clear||cls");
                telaCadastrarProduto();
                break;
            case '2': 	
                system("clear||cls");
                telaFluxoProdutos();
                break;
            case '3': 	
                system("clear||cls");
                telaPesquisarProdutos();
                break;
            case '4': 	
                telaRelatoriosProdutos();
                break;
        } 		
    } while (opcao != '0');
}

/////
// Funcoes Relacionadas ao Modulo Produtos

char telaProdutos(void) {  
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

    char prod[20];
    char cod[12];
    char forn[14];
    char depar[10];

    int qtd;
    int qtd_minima;
    int qtd_maxima;

    char sair;
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
    printf("///            # Insira o nome do novo produto: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", prod);
    getchar();

    printf("///                                                                         ///\n");  
    printf("///            # Insira o codigo desse produto: ");
    scanf("%[0-9]", cod);
    getchar(); 

    printf("///                                                                         ///\n");      		
    printf("///            # Insira o CNPJ do fornecedor: ");
    scanf("%[0-9]", forn);
    getchar();

    printf("///                                                                         ///\n");  
    printf("///            # Insira o nome do departamento: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", depar);
    getchar();

    printf("///                                                                         ///\n");  
    printf("///            # Quantidade inicial do produto: ");
    scanf("%d", &qtd);
    getchar();

    printf("///                                                                         ///\n");
    printf("///            # Qual a quantidade minima ideal desse produto? ");
    scanf("%d", &qtd_minima);
    getchar();
    
    printf("///                                                                         ///\n");
    printf("///            # Qual a quantidade maxima ideal desse produto? ");
    scanf("%d", &qtd_maxima);
    getchar();

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Aperte s para sair dessa tela ... ");
    scanf("%c",&sair);
    getchar();
    
    if (sair == 's'){
        system("clear||cls");
        telaProdutos();
    }else{
        getchar();
        telaCadastrarProduto();
    }
}

void telaPesquisarProdutos(void) {  
    int escolha;
    int codigo;

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
    printf("///            # Insira o codigo do produto que esta procurando? ");
    scanf("%d", &codigo);
    getchar();
    
    printf("///                                                                         ///\n");
    printf("///            -> Informacoes do produto                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            . Codigo: 0012343566778                                      ///\n");
    printf("///            . Nome: Chinelo Preto                                        ///\n");
    printf("///            . Marca: Havaianas                                           ///\n");
    printf("///            . Quantidade: 14                                             ///\n");
    printf("///            . Departamento: Vestuario                                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            -> Acoes                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Alterar Dados de Produto                                  ///\n");
    printf("///            2. Excluir Produto                                           ///\n");
    printf("///            0. Voltar para Tela Produtos                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%d", &escolha);
    getchar();

    switch (escolha){
    case 1:
        system("clear||cls");
        telaEditarProduto();
        break;
    
    case 2:
        system("clear||cls");
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaPesquisarProdutos();
        break;
    case 0:
        system("clear||cls");
        telaProdutos();
        break;
    default:
        system("clear||cls");
        printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
        telaPesquisarProdutos();
    }

}

void telaRelatoriosProdutos(void) {  
    system("clear||cls");
    char sair;
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
    printf("\n               # Aperte v para voltar para tela produtos ... ");
    scanf("%c",&sair);
    getchar();
    
    if (sair == 'v'){
        system("clear||cls");
        telaProdutos();
    }else{
        telaRelatoriosProdutos();
    }
}

void telaEditarProduto(void) {  
    //system("clear||cls");
    char editar;
    int escolha_editar;
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
    printf("///            # Deseja editar algum parametro(s/n)? ");
    scanf("%c", &editar);
    getchar();

    printf("\n///              . Qual parametro deseja editar? ");
    scanf("%d", &escolha_editar);
    getchar();

    printf("\n///              . Novo Nome do Produto: Chinelo Rosa                       ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja editar algum parametro(s/n)? ");
    scanf("%c", &editar);
    getchar();

    printf("///                                                                         ///\n");
    printf("///            -> Acoes                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Excluir Produto                                           ///\n");
    printf("///            0. Voltar para Tela Produtos                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Por fim, deseja executar qual acao (1/0)?  ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1) {
        system("clear||cls");
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaEditarProduto();

    }else if (escolha == 0){
        system("clear||cls");
        telaProdutos();

    }else{
        system("clear||cls");
        printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
        telaEditarProduto();
    }
}

void telaFluxoProdutos(void) {  
    system("clear||cls");
    
    char cod[12];
    char acao;
    int qtd;
    
    char sair;
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
    printf("///            # Insira o codigo do produto: ");
    scanf("%[0-9]",cod);
    getchar();
    
    printf("///                                                                         ///\n");
    printf("///            # Deseja (a) adicionar ou (r) retirar do estoque? ");
    scanf("%c", &acao);
    getchar();

    printf("///                                                                         ///\n");
    printf("///            # Qual a quantidade? ");
    scanf("%d", &qtd);
    getchar();

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Aperte s para sair dessa tela ... ");
    scanf("%c",&sair);
    getchar();

    if (sair == 's'){
        system("clear||cls");
        telaProdutos();
    }else{
        telaFluxoProdutos();
    }
}
