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
#include "fornecedores.h"
#include "util.h"
#include "auxiliar.h"

void moduloFornecedores(void) {
    char opcao;
    do {
        opcao = telaFornecedores();
        switch(opcao) {
            case '1':
                telaCadastrarFornecedor();
                break;
            case '2':
                telaListarFornecedores();
                break;   
            case '3':
                telaPesquisarFornecedor();
                break;
            case '4':
                telaEditarFornecedores();
                break;  
            case '5':
                telaExcluirFornecedores();
                break;      
        } 		
    } while (opcao != '0');
}

/////
// Funcoes Relacionadas ao Modulo Fornecedores

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
    printf("///            3. Pesquisar Fornecedor                                      ///\n");
    printf("///            4. Editar Fornecedor                                         ///\n");
    printf("///            5. Excluir Fornecedor                                        ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}

void telaCadastrarFornecedor(void) {  
    system("clear||cls");

    char nome[21];
    char cnpj[19];
    int *vet;

    char pais[3];
    char numero[10];
    char bairro[80];
    char rua[80];
    char estado[80];
    char cidade[80];

    char nome_empresa[30];
    char ramo[30];
    char tipo[10];

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
        scanf("%[^\n]",nome);
        getchar();
       
    }while (!validaNome(nome));
    
    printf("///                                                                         ///\n");  
    printf("///            # Insira a razao social desse fornecedor: ");
    printf("\n");
    do{
        printf("///              . Qual a natureza juridica da empresa (MEI, EI, LTDA, etc.)? ");
        scanf("%[^\n]",tipo);
        getchar();
    }while(!validaTipoEmpresa(tipo));

    printf("\n");
    do{
        printf("///              . Qual o nome de identificao da empresa? ");
        scanf("%[^\n]",nome_empresa);
        getchar();
    }while(!isUpperName(nome_empresa,tipo));

    printf("\n");
    do{
        printf("///              . Qual a area de atuacao da empresa? ");
        scanf("%[^\n]",ramo);
        getchar();
    }while(!areaAtuacao(ramo));

    vet = (int*) malloc(14*sizeof(int));    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Qual o CNPJ desse fornecedor? ");
        scanf("%[^\n]",cnpj);
        getchar(); 
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///            # Insira o endereco desse fornecedor: ");

    printf("\n");
    do{
        printf("///              . Qual o Pais (BR|AR|US)? ");
        scanf("%[^\n]",pais);
        getchar();
    }while(!validaPais(pais));
        
    printf("\n");

    do{
        printf("///              . Qual o Estado? ");
        scanf("%[^\n]",estado);
        getchar();
    }while(!validaEndereco(estado));
        
    printf("\n");

    do{
        printf("///              . Qual a cidade? ");
        scanf("%[^\n]",cidade);
        getchar();
    }while(!validaEndereco(cidade));
        
    printf("\n");

    do{
        printf("///              . Qual o bairro? ");
        scanf("%[^\n]",bairro);
        getchar();
    }while(!validaEndereco(bairro));
        
    printf("\n");

    do{
        printf("///              . Qual o nome da rua? ");
        scanf("%[^\n]",rua);
        getchar();
    }while(!validaEndereco(rua));
        
    printf("\n");

    do{
        printf("///              . Qual o numero? ");
        scanf("%[^\n]",numero);
        getchar();
    }while(!validaQuantidade(numero));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
    
}

void telaListarFornecedores(void) { 
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
    
}

void telaModificarFornecedor(void) { 
    system("clear||cls"); 
    char editar[2];
    char escolha_editar[2];
    int opMaxima = 4;

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
    printf("///                         - Editando Fornecedor -                         ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Nome do Fornecedor: Nestle                                ///\n");
    printf("///            2. Razao Social: NESTLE BRASIL LTDA.                         ///\n");
    printf("///            3. CNPJ do Fornecedor: 60.409.075/0001-52                    ///\n");
    printf("///            4. Sede da Empresa: Sao Paulo, Brasil                        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    do{
        printf("///            # Deseja editar algum parametro(s/n)? ");
        scanf("%[^\n]", editar);
        getchar();

    }while(!validaOpcao(editar));

    printf("\n");
    do{
        printf("///              . Qual parametro deseja editar? ");
        scanf("%[^\n]", escolha_editar);
        getchar();
    }while (!validaParametro(escolha_editar,opMaxima));

    printf("\n///              . Nome do Fornecedor: Nestle Brasil                        ///\n");
    printf("///                                                                         ///\n");
    do{
        printf("///            # Deseja editar algum parametro(s/n)? ");
        scanf("%[^\n]", editar);
        getchar();

    }while(!validaOpcao(editar));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}

void telaExcluirFornecedores(void) {
    system("clear||cls");
    char cnpj[19];
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
    printf("///                         - Excluir Fornecedor -                          ///\n");
    printf("///                                                                         ///\n");  
    vet = (int*) malloc(14*sizeof(int));    
    do{
        printf("///            # Qual o CNPJ do fornecedor que voce deseja excluir ?? ");
        scanf("%[^\n]",cnpj);
        getchar(); 
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}

void telaEditarFornecedores(void) {
    system("clear||cls");
    char cnpj[19];
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
        printf("///            # Qual o CNPJ do fornecedor que voce deseja editar ?? ");
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
    telaModificarFornecedor();
}

void telaPesquisarFornecedor(void) {
    system("clear||cls");
    char cnpj[19];
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
    telaExibirFornecedor();
}

void telaExibirFornecedor(void) {  
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
    printf("///            -> Informacoes do Fornecedor                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///            . Nome do Fornecedor: Nestle                                ///\n");
    printf("///            . Razao Social: NESTLE BRASIL LTDA.                         ///\n");
    printf("///            . CNPJ do Fornecedor: 60.409.075/0001-52                    ///\n");
    printf("///            . Sede da Empresa: Sao Paulo, Brasil                        ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();

}