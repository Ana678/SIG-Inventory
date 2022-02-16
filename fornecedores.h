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

typedef struct fornecedor Fornecedor;

struct fornecedor{

    char nome[21];
    char cnpj[19];    
    char razao_social[73];
    char endereco[220];
    char status;

};

/////
// Assinatura das funções

void moduloFornecedores(void);
char telaFornecedores(void);
void telaListarFornecedores(void);

Fornecedor* telaCadastrarFornecedor(void);

char* telaExcluirFornecedores(void);
char* telaEditarFornecedor(void); 
void telaModificarFornecedor(void);

char* telaPesquisarFornecedor(void);

void cadastrarFornecedor(void);
void telaErroArquivoFornecedor(void);
void pesquisarFornecedor(void);

void gravarFornecedor(Fornecedor* forn);
Fornecedor* buscarFornecedor(char* cnpj);
void exibirFornecedor(Fornecedor* forn);

void excluirFornecedorExistente(Fornecedor* fornLido);
void excluirFornecedor(void);

int certezaExclusaoFornecedor(Fornecedor* forn);
void sucessoExclusaoFornecedor(void);

void fornecedorView(Fornecedor* forn);
char* escolherElementoEditarFornecedor(Fornecedor* forn);
void editarFornecedor(void);
void editarFornecedorExistente(Fornecedor* forn);
void sucessoEdicaoFornecedor(void);
void fornecedorInexistente(void);
void listaFornecedoresAtivos(void);

void listaFornecedoresPais(void);
char* selecionarPais(void);