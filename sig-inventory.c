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

void telaRelatorios(void);
void telaCadastros(void);
void telaFluxoProdutos(void);
void telaListarFornecedores(void);

void telaProdutos(void);
void telaCadastrarProduto(void);
void telaEditarProduto(void);

void telaDepartamentos(void);
void telaCadastrarDepartamento(void);
void telaDetalharDepartamento(void);
void telaEditarDepartamento(void);
void telaVerProdutosDepartamento(void);

void telaCadastrarFornecedor(void);
void telaEditarFornecedor(void);



/////
// Programa principal
//    telaSobre();
//    telaPrincipal();
//    telaEquipe();

//    telaRelatorios();
//    telaCadastros();
//    telaProdutos();
//    telaDepartamentos();
//    telaFluxoProdutos();
//    telaListarFornecedores();

//    telaCadastrarProduto();
//    telaEditarProduto();
    
//    telaCadastrarDepartamento();
//    telaDetalharDepartamento();
//    telaVerProdutosDepartamento();
//    telaEditarDepartamento();
    
//    telaCadastrarFornecedor();
//    telaEditarFornecedor();
    
int main(void) {

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
    printf("\n               # Aperte s para sair ... ");
    // aq tbm ????? 
    sair = getchar();

    if (sair == 's'){
        telaPrincipal();
    }else{
        telaSobre();
    }
    
}


void telaPrincipal(void) {
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
    printf("///            1. Listar Produto                                            ///\n");
    printf("///            2. Listar Departamentos                                      ///\n");
    printf("///            3. Obter um Relatorio                                        ///\n");
    printf("///            4. Fazer um Cadastro                                         ///\n");
    printf("///            5. Cadastrar Fluxo de Produtos                               ///\n");
    printf("///            6. Listar Fornecedores                                       ///\n");
    printf("///            7. Ler Sobre o Projeto                                       ///\n");
    printf("///            8. Ver Participantes do Projeto                              ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");                                                                       ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1){
        telaProdutos();

    }else if (escolha == 2){
        telaDepartamentos();

    }else if (escolha == 3){
        telaRelatorios();

    }else if (escolha == 4){
        telaCadastros();

    }else if (escolha == 5){
        telaFluxoProdutos();

    }else if (escolha == 6){
        telaListarFornecedores();
    
    }else if (escolha == 7){
        telaSobre();

    }else if (escolha == 8){
        
        telaEquipe();

    }else if (escolha == 0){
        system("clear||cls");

    }else{
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
    printf("\n               # Aperte s para sair ... ");
    // aq tbm
    sair = getchar();

    if (sair == 's'){
        telaPrincipal();
    }else{
        telaEquipe();
    }

}

void telaProdutos(void) {  
    system("clear||cls");
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
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1) {
        telaEditarProduto();

    }else if (escolha == 2){
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaProdutos();

    }else if (escolha == 0){
        telaPrincipal();
    
    }else{
        telaProdutos();
    }

}


void telaDepartamentos(void) {
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
    printf("///            0. Sair                                                      ///\n");    
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Digite o numero do departamento para detalha-lo: ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1 || escolha == 2 || escolha == 3 || escolha == 4 || escolha == 5 || escolha == 6 || escolha == 7 || escolha == 8) {
        telaDetalharDepartamento();

    }else if (escolha == 0){
        telaPrincipal();

    }else{
        telaDepartamentos();
    }
}


void telaRelatorios(void) {  
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
    printf("\n               # Aperte s para sair ... ");
    // aq tbm
    sair = getchar();
    
    if (sair == 's'){
        telaPrincipal();
    }else{
        telaRelatorios();
    }
}

void telaCadastros(void) {  
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
    printf("///                              - Cadastros -                              ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Cadastrar Novo Produto                                    ///\n");
    printf("///            2. Cadastrar Novo Departamento                               ///\n");
    printf("///            3. Cadastrar Novo Fornecedor                                 ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1){
        telaCadastrarProduto();

    }else if (escolha == 2){
        telaCadastrarDepartamento();

    }else if (escolha == 3){
        telaCadastrarFornecedor();

    }else if(escolha == 0){
        telaPrincipal();
    }else{
        telaCadastros();
    }
}

void telaFluxoProdutos(void) {  
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
    printf("///                          - Fluxo de Produtos -                          ///\n");
    printf("///                                                                         ///\n");  
    printf("///            # Insira o codigo do produto:                                ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja (a) adicionar ou (r) retirar do estoque?            ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Qual a quantidade?                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Aperte s para sair ... ");
    sair = getchar();

    //aq tbm
    if (sair == 's'){
        telaPrincipal();
    }else{
        telaFluxoProdutos();
    }
}

void telaListarFornecedores(void) {  
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
    printf("///                       - Listagem de Fornecedores -                      ///\n");
    printf("///                                                                         ///\n");
    printf("///        |   Nº  |         CNPJ        |     Nome da Empresa     |        ///\n");
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
        telaEditarFornecedor();

    }else if (escolha == 0){
        telaPrincipal();

    }else{
        telaListarFornecedores();
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
    printf("\n               # Aperte s para sair ... ");
    sair = getchar();

    //aq tbm
    if (sair == 's'){
        telaPrincipal();
    }else{
        getchar();
        telaCadastrarProduto();
    }
}

void telaEditarProduto(void) {  
    system("clear||cls");
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
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Por fim, deseja executar qual acao (1/0)?  ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1) {
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaEditarProduto();

    }else if (escolha == 0){
        telaPrincipal();

    }else{
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
    printf("\n               # Aperte s para sair ... ");
    sair = getchar();

    //aq tbm
    if (sair == 's'){
        telaPrincipal();
    }else{
        getchar();
        telaCadastrarDepartamento();
    }
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
    printf("///            2. Excluir Departamento                                      ///\n");
    printf("///            3. Ver Produtos Departamento                                 ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao?   ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1){
        telaEditarDepartamento();

    }else if (escolha == 2) {
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaDetalharDepartamento();

    }else if(escolha == 3){
        telaVerProdutosDepartamento();
    
    }else if (escolha == 0){
        telaPrincipal();

    }else{
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
    printf("\n               # Aperte s para sair ... ");
    sair = getchar();

    if (sair == 's'){
        telaPrincipal();
    }else{
        telaVerProdutosDepartamento();
    }
}

void telaEditarDepartamento(void) {  
    system("clear||cls");

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
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Por fim, deseja executar qual acao (1/0)?  ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1) {
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaEditarDepartamento();

    }else if (escolha == 0){
        telaPrincipal();

    }else{
        telaEditarDepartamento();
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
    printf("\n               # Aperte s para sair ... ");
    sair = getchar();

    if (sair == 's'){
        telaPrincipal();
    }else{
        getchar();
        telaCadastrarFornecedor();
    }
    
}

void telaEditarFornecedor(void) {  
    system("clear||cls");
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
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Por fim, deseja executar qual acao (1/0)?  ");
    scanf("%d", &escolha);
    getchar();

    if (escolha == 1) {
        printf("\n///           = = = = = AINDA NAO E POSSIVEL EXCLUIR = = = = =            ///\n");
        telaEditarFornecedor();

    }else if (escolha == 0){
        telaPrincipal();

    }else{
        telaEditarFornecedor();
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////
