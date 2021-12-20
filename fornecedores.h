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


typedef struct razaoSocial RazaoSocial;

struct razaoSocial { //somente criei, ainda vou aplica-la
    char nome_empresa[30];
    char ramo[30];
    char tipo[10];
};

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


/////
// Assinatura das funções

void moduloFornecedores(void);
char telaFornecedores(void);
void telaListarFornecedores(void);
void telaCadastrarFornecedor(void);
void telaExcluirFornecedores(void);
void telaEditarFornecedores(void);
void telaModificarFornecedor(void);
