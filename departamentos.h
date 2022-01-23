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
// Structs

typedef struct departamento Departamento;

struct departamento
{
    char nome[20];
    char cpf[15];
    char nome_responsavel[15];
    char status;

};

/////
// Assinatura das funções

void moduloDepartamentos(void);
char telaDepartamentos(void);

//cadastrar departamento
Departamento* telaCadastrarDepartamento(void);

void telaDetalharDepartamento(void);
void telaEditarDepartamento(void);
void telaVerProdutosDepartamento(void);
void telaListarDepartamento(void);
void telaExcluirDepartamentos(void);
void telaModificarDepartamento(void);

void cadastrarDepartamento(void);
void pesquisarDepartamento(void);
void atualizarDepartamento(void);
void excluirDepartamento(void);

char* telaPesquisarDepartamento(void);
void telaErroArquivoDepartamento(void);

void gravarDepartamento(Departamento * dep);
Departamento* buscarDepartamento(char* cpf);
void exibirDepartamento(Departamento* dep);