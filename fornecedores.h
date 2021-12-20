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

///// Structs

typedef struct endereco Endereco;

struct endereco{
  char pais[3];
  char numero[10];
  char bairro[80];
  char rua[80];
  char estado[80];
  char cidade[80];
  int status;

};

typedef struct razaoSocial RazaoSocial;

struct razaoSocial { //somente criei, ainda vou aplica-la
    char nome_empresa[30];
    char ramo[30];
    char tipo[10];
};

typedef struct fornecedor Fornecedor;

struct fornecedor{

    char nome[21];
    char cnpj[19];
    Endereco* endereco_fornecedor;
    RazaoSocial* razao_fornecedor;

};

/////
// Assinatura das funções

void moduloFornecedores(void);
char telaFornecedores(void);
void telaListarFornecedores(void);

Fornecedor* telaCadastrarFornecedor(void);

void telaExcluirFornecedores(void);
void telaEditarFornecedores(void);
void telaModificarFornecedor(void);

void telaExibirFornecedor(void);
void telaPesquisarFornecedor(void);

void cadastrarFornecedor(void);