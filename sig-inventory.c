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
int main(void) {
    telaSobre();
    telaPrincipal();
    telaEquipe();

    telaRelatorios();
    telaCadastros();
    telaProdutos();
    telaDepartamentos();
    telaFluxoProdutos();
    telaListarFornecedores();

    telaCadastrarProduto();
    telaEditarProduto();
    
    telaCadastrarDepartamento();
    telaDetalharDepartamento();
    telaVerProdutosDepartamento();
    telaEditarDepartamento();
    
    telaCadastrarFornecedor();
    telaEditarFornecedor();
    
    return 0;
}

/////
// Funções

void telaSobre(void) {
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
    printf("\n");
}


void telaPrincipal(void) {
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
    printf("///            1. Produtos                                                  ///\n");
    printf("///            2. Departamentos                                             ///\n");
    printf("///            3. Relatorios                                                ///\n");
    printf("///            4. Cadastros                                                 ///\n");
    printf("///            5. Fluxo de Produtos                                         ///\n");
    printf("///            6. Listar Fornecedores                                       ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja executar qual acao?                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}



void telaEquipe(void) {
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
    printf("\n");
}

void telaProdutos(void) {  
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
    printf("///            # Insira o codigo do produto que esta procurando?            ///\n");
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
    printf("///            # Deseja executar qual acao?                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}


void telaDepartamentos(void) {
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
    printf("///            # Digite o numero do departamento para detalha-lo:           ///\n"); 
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}


void telaRelatorios(void) {  
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
    printf("///            # Deseja sair(s/n)?                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaCadastros(void) {  
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
    printf("///            # Escolha o que voce deseja cadastrar:                       ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaFluxoProdutos(void) {  
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
    printf("\n");
}

void telaListarFornecedores(void) {  
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
    printf("///            |         CNPJ        |     Nome da Empresa     |            ///\n");
    printf("///                                                                         ///\n");
    printf("///            | 14.854.618/0001-23  |         Havaianas       |            ///\n");
    printf("///            | 60.409.075/0001-52  |          Nestle         |            ///\n");
    printf("///            | 09.911.270/0001-29  |          Nescau         |            ///\n");
    printf("///            | 23.643.315/0110-06  |          Danone         |            ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja sair(s/n)?                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

/// TELAS SECUNDÁRIAS

////////////////////////////////////         PRODUTOS         ////////////////////////////////////

void telaCadastrarProduto(void) {  
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
    printf("///            # Insira o nome do novo produto:                             ///\n");
    printf("///                                                                         ///\n");  
    printf("///            # Insira o codigo desse produto:                             ///\n");
    printf("///                                                                         ///\n");  
    printf("///            # Insira o fornecedor desse produto:                         ///\n");
    printf("///                                                                         ///\n");  
    printf("///            # Insira o departamento desse produto:                       ///\n");
    printf("///                                                                         ///\n");  
    printf("///            # Quantidade inicial desse produto:                          ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Qual a quantidade minima ideal desse produto?              ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Qual a quantidade maxima ideal desse produto?              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaEditarProduto(void) {  
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
    printf("///            # Deseja editar algum parametro(s/n)? s                      ///\n");
    printf("///              . Qual parametro deseja editar? 2                          ///\n");
    printf("///              . Nome do Produto: Chinelo Rosa                            ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja editar algum parametro(s/n)? n                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            -> Acoes                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Excluir Produto                                           ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Por fim, deseja executar qual acao (1/0)? 0                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////         DEPARTAMENTOS         /////////////////////////////////

void telaCadastrarDepartamento(void) {  
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
    printf("///            # Insira o nome do novo departamento:                        ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Qual o CPF do responsavel pelo departamento?               ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Qual o nome do responsavel pelo departamento?              ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaDetalharDepartamento(void){  
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
    printf("///            # Deseja executar qual acao?                                 ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaVerProdutosDepartamento(void) {  
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
    printf("///            # Deseja sair(s/n)?                                          ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaEditarDepartamento(void) {  
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
    printf("///            # Deseja editar algum parametro(s/n)? s                      ///\n");
    printf("///              . Qual parametro deseja editar? 1                          ///\n");
    printf("///              . Nome do Departamento: Roupas                             ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja editar algum parametro(s/n)? n                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            -> Acoes                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Excluir Departamento                                      ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Por fim, deseja executar qual acao (1/0)? 0                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////         FORNECEDORES         //////////////////////////////////

void telaCadastrarFornecedor(void) {  
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
    printf("///            # Insira o nome do novo fornecedor:                          ///\n");
    printf("///                                                                         ///\n");  
    printf("///            # Insira a razao social desse fornecedor:                    ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Qual o CNPJ desse fornecedor?                              ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Onde e a sede desse fornecedor?                            ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

void telaEditarFornecedor(void) {  
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
    printf("///            # Deseja editar algum parametro(s/n)? s                      ///\n");
    printf("///              . Qual parametro deseja editar? 1                          ///\n");
    printf("///              . Nome do Departamento: Nestle Brasil                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Deseja editar algum parametro(s/n)? n                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            -> Acoes                                                     ///\n");
    printf("///                                                                         ///\n");
    printf("///            1. Excluir Departamento                                      ///\n");
    printf("///            0. Sair                                                      ///\n");
    printf("///                                                                         ///\n");
    printf("///            # Por fim, deseja executar qual acao (1/0)? 0                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
}

//////////////////////////////////////////////////////////////////////////////////////////////////
