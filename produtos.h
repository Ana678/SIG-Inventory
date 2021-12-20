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

/////

typedef struct produto Produto;
struct produto {
  char nome [30];
  char cnpj[19];
  char cod[14];
  char depar[10];
  char qtd[10];
  char qtd_minima[10];
  char qtd_maxima[10];
  int status;
};




// Assinatura das funções

void moduloProdutos(void);
void telaFluxoProdutos(void);
char telaProdutos(void);
void telaRelatoriosProdutos(void);
Produto* telaCadastrarProduto(void);
void telaEditarProduto(void);
void telaExcluirProdutos(void);
void telaModificarProduto(void);
void cadastrarProduto(void);
void telaPesquisarProduto(void);
void telaExibirProduto(void);