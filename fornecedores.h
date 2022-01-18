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

void telaExcluirFornecedores(void);
void telaEditarFornecedores(void);
void telaModificarFornecedor(void);

void telaExibirFornecedor(void);
char* telaPesquisarFornecedor(void);

void cadastrarFornecedor(void);
void telaErroArquivoFornecedor(void);
void pesquisarFornecedor(void);

void gravarFornecedor(Fornecedor* forn);
Fornecedor* buscarFornecedor(char* cnpj);
void exibirAluno(Fornecedor* forn);