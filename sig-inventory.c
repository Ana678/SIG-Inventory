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

/////
// Assinatura das funções
void telaSobre(void);
void telaPrincipal(void);
void telaEquipe(void);
void telaFluxoProdutos(void);

void telaProdutos(void);
void telaRelatoriosProdutos(void);
void telaCadastrarProduto(void);
void telaPesquisarProdutos(void);
void telaEditarProduto(void);

void telaDepartamentos(void);
void telaCadastrarDepartamento(void);
void telaDetalharDepartamento(void);
void telaEditarDepartamento(void);
void telaVerProdutosDepartamento(void);
void telaListarDepartamento(void);

void telaFornecedores(void);
void telaListarFornecedores(void);
void telaCadastrarFornecedor(void);
void telaEditarFornecedor(void);
    
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
    printf("///            4. Cadastrar Fluxo de Produtos                               ///\n");
    printf("///            5. Ler Sobre o Projeto                                       ///\n");
    printf("///            6. Ver Participantes do Projeto                              ///\n");
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
            telaFluxoProdutos();
            telaSobre();
            break;

        case 5:
            telaSobre();
            break;
    
        case 6:
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

void telaProdutos(void) {  
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
    printf("///                           - Modulo Produtos -                           ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Cadastrar Novo Produto                                    ///\n");
    printf("///            2. Pesquisar Produto                                         ///\n");
    printf("///            3. Obter um Relatorio                                        ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%d", &escolha);
    getchar();
    
    switch (escolha){
        case 1:
            system("clear||cls");
            telaCadastrarProduto();
            break;
        case 2:
            system("clear||cls");
            telaPesquisarProdutos();
            break;
        case 3:
            telaRelatoriosProdutos();
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

void telaFornecedores(void) {
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
    printf("///                         - Modulo Fornecedores -                         ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Cadastrar Novo Fornecedor                                 ///\n");
    printf("///            2. Listar Fornecedores                                       ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%d", &escolha);
    getchar();
    
    switch (escolha){
        case 1:
            system("clear||cls");
            telaCadastrarFornecedor();
            break;
        case 2:
            system("clear||cls");
            telaListarFornecedores();
            break;
        case 0:
            system("clear||cls");
            telaPrincipal();
            break;

        default:
            system("clear||cls");
            printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
            telaFornecedores();
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
    sair = getchar();

    if (sair == 's'){
        system("clear||cls");
        telaPrincipal();
    }else{
        telaFluxoProdutos();
    }
}

/// TELAS SECUNDÁRIAS

////////////////////////////////////         PRODUTOS         ////////////////////////////////////

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
    sair = getchar();
    
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
    
    sair = getchar();
    
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

void telaCadastrarFornecedor(void) {  
    system("clear||cls");
    
    char nome[20];
    char razao_social[30];
    char cnpj[14];
    char sede[60];

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
    printf("///                        - Cadastro de Fornecedor -                       ///\n");
    printf("///                                                                         ///\n");  
    printf("///            # Insira o nome do novo fornecedor: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",nome);
    getchar();
    
    printf("///                                                                         ///\n");  
    printf("///            # Insira a razao social desse fornecedor: ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]",razao_social);
    getchar();
    
    printf("///                                                                         ///\n");
    printf("///            # Qual o CNPJ desse fornecedor? ");
    scanf("%[0-9.]",cnpj);
    getchar();
    
    printf("///                                                                         ///\n");
    printf("///            # Onde e a sede desse fornecedor? ");
    scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ,:-.0-9]",sede);
    getchar();
    
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Aperte s para sair dessa tela  ... ");
    sair = getchar();

    if (sair == 's'){
        system("clear||cls");
        telaFornecedores();
    }else{
        getchar();
        telaCadastrarFornecedor();
    }
    
}

void telaListarFornecedores(void) {  
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
    printf("\n               # Digite o numero do fornecedor para edita-lo: ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1 || escolha == 2 || escolha == 3 || escolha == 4) {
        system("clear||cls");
        telaEditarFornecedor();

    }else{
        system("clear||cls");
        printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
        telaListarFornecedores();
    }
}

void telaEditarFornecedor(void) {  
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
    printf("///                         - Editar de Fornecedor -                        ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Nome do Fornecedor: Nestle                                ///\n");
    printf("///            2. Razao Social: NESTLE BRASIL LTDA.                         ///\n");
    printf("///            3. CNPJ do Fornecedor: 60.409.075/0001-52                    ///\n");
    printf("///            3. Sede da Empresa: Sao Paulo, Brasil                        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja editar algum parametro(s/n)? ");
    scanf("%c", &editar);
    getchar();

    printf("///              . Qual parametro deseja editar? ");
    scanf("%d", &escolha_editar);
    getchar();

    printf("\n///              . Nome do Fornecedor: Nestle Brasil                        ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja editar algum parametro(s/n)? ");
    scanf("%c", &editar);
    getchar();

    printf("///                                                                         ///\n");
    printf("///            -> Acoes                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Excluir Fornecedor                                        ///\n");
    printf("///            2. Voltar a Listar Fornecedores                              ///\n");
    printf("///            0. Voltar para Tela Fornecedores                             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Por fim, deseja executar qual acao (1/0)?  ");
    scanf("%d", &escolha);
    getchar();

    switch (escolha){
    case 1:
        system("clear||cls");
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaEditarFornecedor();
        break;

    case 2:
        system("clear||cls");
        telaListarFornecedores();
        break;

    case 0:
        system("clear||cls");
        telaFornecedores();
        break;
        
    default:
        system("clear||cls");
        printf("\n///              = = = = = INSIRA UMA OPCAO VALIDA! = = = = =               ///\n");
        telaEditarFornecedor();
    }
     
}

//////////////////////////////////////////////////////////////////////////////////////////////////