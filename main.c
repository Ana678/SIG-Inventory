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
#include "fornecedores.h"

/////
// Assinatura das funções
void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);

void telaDepartamentos(void);
void telaCadastrarDepartamento(void);
void telaDetalharDepartamento(void);
void telaEditarDepartamento(void);
void telaVerProdutosDepartamento(void);
void telaListarDepartamento(void);

int main(void) {
    system("clear||cls");
    telaPrincipal();
    
    return 0;
}

/////
// Funções

void telaSobre(void) {
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
    printf("///         Esse programa pretende ajudar no controle de estoque de um      ///\n");
    printf("/// supermercado, por meio do fornecimento de ferramentas que auxiliam      ///\n");
    printf("/// o cliente, seja este o gerente ou um funcionario de uma empresa, com    ///\n");
    printf("/// a organizacao do seu espaco para estoque, buscando armazenamento efi-   ///\n");
    printf("/// ciente e bem estruturado para que empresa evite gastos desnecessarios,  ///\n");
    printf("/// assim como a falta de produtos.                                         ///\n");
    printf("///         Esse projeto trata-se de um requisito parcial para a obtencao   ///\n");
    printf("/// da nota da primeira unidade da disciplina de Programacao DCT1106, assim ///\n");
    printf("/// como sera um arquivo que marca o aprendizado de uma nova linguagem de   ///\n");
    printf("/// programacao, contribuindo, portanto, para a formacao profissional dos   ///\n");
    printf("/// envolvidos.                                                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Aperte v para voltar para tela principal ... ");
    sair = getchar();

    if (sair == 'v'){
        system("clear||cls");
        telaPrincipal();
    }else{
        telaSobre();
    }
    
}


void telaPrincipal(void) {
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
    printf("///            1. Modulo Produtos                                           ///\n");
    printf("///            2. Modulo Departamentos                                      ///\n");
    printf("///            3. Modulo Fornecedores                                       ///\n");
    printf("///            4. Ler Sobre o Projeto                                       ///\n");
    printf("///            5. Ver Participantes do Projeto                              ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");                                                                       ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%d", &escolha);
    getchar();
    
    switch(escolha){
        case 1:
            system("clear||cls");
            telaProdutos();
            break;

        case 2:
            system("clear||cls");
            telaDepartamentos();
            break;
            
        case 3:
            system("clear||cls");   
            telaFornecedores();
            break;

        case 4:
            telaSobre();
            break;
    
        case 5:
            telaEquipe();
            break;

        case 0:
            break;
        
        default:
            system("clear||cls");
            printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
            telaPrincipal();
            
    }

}

void telaEquipe(void) {
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
    printf("///            Este projeto  esta sendo desenvolvido por:                   ///\n");
    printf("///                                                                         ///\n");
    printf("///            Ana Carolina de Araujo                                       ///\n");
    printf("///            E-mail: carolina.araujo.017@ufrn.edu.br                      ///\n");
    printf("///            Redes sociais: @ana678                                       ///\n");
    printf("///                                                                         ///\n");
    printf("///            David do Nascimento Santos                                   ///\n");
    printf("///            E-mail: davidccb@live.com                                    ///\n");
    printf("///            Redes sociais: @daviddevolin                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///            Repositorio: https://github.com/Ana678/SIG-Inventory.git     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Aperte v para voltar para tela principal ... ");
    
    sair = getchar();

    if (sair == 'v'){
        system("clear||cls");
        telaPrincipal();
    }else{
        telaEquipe();
    }

}

void telaDepartamentos(void) {
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
    printf("///                         - Modulo Departamentos -                        ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Cadastrar Novo Departamento                               ///\n");
    printf("///            2. Listar Departamentos                                      ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%d", &escolha);
    getchar();
    
    switch (escolha){
        case 1:
            system("clear||cls");
            telaCadastrarDepartamento();
            break;
        case 2:
            system("clear||cls");
            telaListarDepartamento();
            break;
        case 0:
            system("clear||cls");
            telaPrincipal();
            break;

        default:
            system("clear||cls");
            printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
            telaProdutos();
    }

}


/// TELAS SECUNDÁRIAS

////////////////////////////////////         PRODUTOS         ////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////         DEPARTAMENTOS         /////////////////////////////////

void telaCadastrarDepartamento(void) {  
    system("clear||cls");

    char nome[20];
    char cpf[11];
    char nome_responsavel[15];
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
    printf("\n               # Aperte v para voltar  para a tela departamentos ... ");
    sair = getchar();

    
    if (sair == 'v'){
        system("clear||cls");
        telaDepartamentos();
    }else{
        getchar();
        telaCadastrarDepartamento();
    }
}

void telaDetalharDepartamento(void){  

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
    printf("///            2. Excluir Departamento                                      ///\n");
    printf("///            3. Ver Produtos Departamento                                 ///\n");
    printf("///            0. Voltar para  tela principal                               ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao?   ");
    scanf("%d", &escolha);
    getchar();

    switch (escolha)
    {
    case 1:
        system("clear||cls");
        telaEditarDepartamento();
        break;

    case 2:
        system("clear||cls");
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaDetalharDepartamento();
        break;
        
    case 3:
        telaVerProdutosDepartamento();
        break;

    case 0:
        system("clear||cls");
        telaPrincipal();
        break;
        
    default:
        system("clear||cls");
        printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
        telaDetalharDepartamento();
    }
}

void telaVerProdutosDepartamento(void) {  
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
    printf("\n               # Aperte v para voltar para tela principal ... ");
    sair = getchar();

    if (sair == 'v'){
        system("clear||cls");
        telaPrincipal();
    }else{
        telaVerProdutosDepartamento();
    }
}

void telaEditarDepartamento(void) {  
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
    printf("///            -> Acoes                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Excluir Departamento                                      ///\n");
    printf("///            2. Voltar aos Detalhes do Departamento                       ///\n");
    printf("///            0. Voltar para tela principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Por fim, deseja executar qual acao (1/0)?  ");
    scanf("%d", &escolha);
    getchar();

    switch (escolha){
        case 1:
            system("clear||cls");
            printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
            telaEditarDepartamento();
            break;

        case 2:
            system("clear||cls");
            telaDetalharDepartamento();
            break;

        case 0:
            system("clear||cls");
            telaPrincipal();
            break;
        
        default:
            system("clear||cls");
            printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
            telaEditarDepartamento();
            break;
    }
}

void telaListarDepartamento(void) {
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
    printf("///            0. Voltar para Tela Principal                                ///\n");    
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Digite o numero do departamento para detalha-lo: ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1 || escolha == 2 || escolha == 3 || escolha == 4 || escolha == 5 || escolha == 6 || escolha == 7 || escolha == 8) {
        system("clear||cls");
        telaDetalharDepartamento();

    }else if (escolha == 0){
        system("clear||cls");
        telaPrincipal();

    }else{
        system("clear||cls");
        printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
        telaListarDepartamento();
    }
}


//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////         FORNECEDORES         //////////////////////////////////



//////////////////////////////////////////////////////////////////////////////////////////////////