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
#include "departamentos.h"

void moduloDepartamentos(void) {
    char opcao;
    do {
        opcao = telaDepartamentos();
        switch (opcao){
            case '1':
                telaCadastrarDepartamento();
                break;
            case '2':
                telaListarDepartamento();
                break;
            case '3':
                telaExcluirDepartamentos();
                break;
        }		
    } while (opcao != '0');
}

/////
// Funcoes Relacionadas ao Modulo Fornecedores

char telaDepartamentos(void) {
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
    printf("///                         - Modulo Departamentos -                        ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Cadastrar Novo Departamento                               ///\n");
    printf("///            2. Listar Departamentos                                      ///\n");
    printf("///            3. Excluir Departamento                                      ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;

}

void telaCadastrarDepartamento(void) {  
    system("clear||cls");

    char nome[20];
    char cpf[12];
    char nome_responsavel[15];

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
    printf("///            # Insira o nome do novo departamento: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome);
    getchar();

    printf("///                                                                         ///\n");
    printf("///            # Qual o CPF do responsavel pelo departamento? ");
    scanf("%[0-9]", cpf);
    getchar();

    printf("///                                                                         ///\n");
    printf("///            # Qual o nome do responsavel pelo departamento? ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", nome_responsavel);
    getchar();

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();
   
}

void telaDetalharDepartamento(void){  
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
    printf("///                       - Detalhes do Departamento -                      ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            -> Informacoes do Departamento                               ///\n");
    printf("///                                                                         ///\n");
    printf("///            . Nome Do Departamento: Vestuario                            ///\n");
    printf("///            . Quantidade de produtos: 300                                ///\n");
    printf("///            . Nome Do Responsavel: Julio                                 ///\n");
    printf("///            . Cpf do Responsavel: 111.111.111-11                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            -> Acoes                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Alterar Dados do Departamento                             ///\n");
    printf("///            2. Ver Produtos Departamento                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Escolha uma acao: ");
    scanf("%d", &escolha);
    getchar();
    
    if (escolha == 1){
        telaEditarDepartamento();
    }
    else if(escolha == 2){
        telaVerProdutosDepartamento();
    }
    
}

void telaVerProdutosDepartamento(void) {  
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
    printf("///                       - Produtos do Departamento -                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            | Codigo do Produto |   Nome      | Quantidade |             ///\n");
    printf("///                                                                         ///\n");
    printf("///            | 0193467745875     |   Sapato    |     6      |             ///\n");
    printf("///            | 0193467364524     |   Chinelo   |     11     |             ///\n");
    printf("///            | 0193345786242     |   Meias     |     8      |             ///\n");
    printf("///            | 1343494863725     |   Camisas   |     20     |             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();

}

void telaEditarDepartamento(void) {  
    system("clear||cls");
    char editar;
    int escolha_editar;
    
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
    printf("///            1. Nome do Departamento: Vestuario                           ///\n");
    printf("///            2. Nome Do Responsavel: Julio                                ///\n");
    printf("///            3. Cpf do Responsavel: 111.111.111-11                        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja editar algum parametro(s/n)? ");
    scanf("%c", &editar);
    getchar();

    printf("\n///              . Qual parametro deseja editar? ");
    scanf("%d", &escolha_editar);
    getchar();

    printf("\n///              . Nome do Departamento: Roupas                             ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja editar algum parametro(s/n)? ");
    scanf("%c", &editar);
    getchar();

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();
}

void telaListarDepartamento(void) {
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
    printf("\n               # Digite o numero do departamento para detalha-lo: ");
    scanf("%d", &escolha);
    getchar();

    if (escolha >= 1 && escolha <= 8) {
        telaDetalharDepartamento();
    }

}

void telaExcluirDepartamentos(void) {
    system("clear||cls");
    char cpf[12];
    
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
    printf("///            # Insira o CPF do responsavel pelo departamento:  ");
    scanf("%[0-9.]",cpf);
    getchar();

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Departamentos ... ");
    getchar();
}