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

typedef struct produto Produto;

struct produto {
  char nome[30];
  char cnpj[19];
  char cod[14];
  char depar[10];
  char qtd[10];
  char qtd_minima[10];
  char qtd_maxima[10];
  char status;
  Produto *prox;
};

//////


// Assinatura das funções

void moduloProdutos(void);
char* telaFluxoProdutos(void);
char telaProdutos(void);
Produto* telaCadastrarProduto(void);
char* telaEditarProduto(void);
char* telaExcluirProdutos(void);

void cadastrarProduto(void);
void pesquisarProduto(void);

void telaErroArquivoProduto(void);
void gravarProduto(Produto* prod);
char* telaPesquisarProduto(void);
Produto* buscarProduto(char* cod);
void exibirProduto(Produto* prod);

void excluirProduto(void);
int certezaExclusaoProduto(Produto* prod);
void sucessoExclusaoProduto(void);
void excluirProdutoExistente(Produto* prodLido);

void produtoView(Produto* prod);

void atualizarProduto(void);
char* escolherElementoEditarProduto(Produto* prod);
void sucessoEdicaoProduto(void);
void editarProduto(Produto* prod);

void cadastrarFluxoProdutos(void);

void cadastrarFluxoProdutoExistente(Produto* prod);

void produtoInexistente(void);

void listaProdutosAtivos(void);
void listarProdutosSituacao(void);
char escolherSituacaoListar(void);

void listarProdutosOrdenadados(void);