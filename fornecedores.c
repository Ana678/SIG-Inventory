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
#include <unistd.h>
#include <string.h>
#include "fornecedores.h"
#include "util.h"
#include "auxiliar.h"

void moduloFornecedores(void) {
    char opcao;
    do {
        opcao = telaFornecedores();
        switch(opcao) {
            case '1':
                cadastrarFornecedor();
                break;
            case '2':
                telaListarFornecedores();
                break;   
            case '3':
                pesquisarFornecedor();
                break;
            case '4':
                telaEditarFornecedores();
                break;  
            case '5':
                telaExcluirFornecedores();
                break;      
        } 		
    } while (opcao != '0');
}

/////
// Funcoes Relacionadas ao Modulo Fornecedores

void cadastrarFornecedor(void) {
	Fornecedor* forn;

	forn = telaCadastrarFornecedor();
    gravarFornecedor(forn);
	free(forn);
}

void pesquisarFornecedor(void) {
	Fornecedor* forn;
	char* cnpj;

	cnpj = telaPesquisarFornecedor();
	forn = buscarFornecedor(cnpj);
	exibirAluno(forn);
	free(forn); 
	free(cnpj);
}

/*

void cadastrarAluno(void) {
	Aluno *aln;

	aln = telaCadastrarAluno();
	gravarAluno(aln);
	free(aln);
}


void pesquisarAluno(void) {
	Aluno* aln;
	char* matr;

	matr = telaPesquisarAluno();
	aln = buscarAluno(matr);
	exibirAluno(aln);
	free(aln); 
	free(matr);
}

*/

char telaFornecedores(void) {
    system("clear||cls");
    char escolha;

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
    printf("///            3. Pesquisar Fornecedor                                      ///\n");
    printf("///            4. Editar Fornecedor                                         ///\n");
    printf("///            5. Excluir Fornecedor                                        ///\n");
    printf("///            0. Voltar para Tela Principal                                ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n               # Deseja executar qual acao? ");
    scanf("%c", &escolha);
    getchar();
    
    return escolha;
}

Fornecedor* telaCadastrarFornecedor(void) {  
    system("clear||cls");

    Fornecedor* forn;
	forn = (Fornecedor*) malloc(sizeof(Fornecedor));
    int *vet;

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
    do{
        printf("///            # Insira o nome do novo fornecedor: ");
        scanf("%[^\n]",forn->nome);
        getchar();
       
    }while (!validaNome(forn->nome));
    
    printf("///                                                                         ///\n");  
    printf("///            # Insira a razao social desse fornecedor: ");
    printf("\n"); 
    //NESTLE BRASIL LTDA. 
    char *razao;
    razao = (char*) malloc(73*sizeof(char));  
    preencheRazaoSocial(razao);
    strcpy(forn->razao_social,razao);
    free(razao);

    vet = (int*) malloc(14*sizeof(int));    
    printf("///                                                                         ///\n");
    do{
        printf("///            # Qual o CNPJ desse fornecedor? ");
        scanf("%[^\n]",forn->cnpj);
        getchar(); 
        int tamArray = 14;
        cpftoi(forn->cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///            # Insira o endereco desse fornecedor: ");
    printf("\n");
    char *endereco;
    endereco = (char*) malloc(220*sizeof(char));  
    preencheEndereco(endereco);
    strcpy(forn->endereco,endereco);
    free(endereco);

    forn->status = '1';

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
    
    return forn;
}

void telaListarFornecedores(void) { 
    system("clear||cls");
    
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
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
    
}

void telaModificarFornecedor(void) { 
    system("clear||cls"); 
    char editar[2];
    char escolha_editar[2];
    int opMaxima = 4;

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
    printf("///                         - Editando Fornecedor -                         ///\n");
    printf("///                                                                         ///\n");  
    printf("///            1. Nome do Fornecedor: Nestle                                ///\n");
    printf("///            2. Razao Social: NESTLE BRASIL LTDA.                         ///\n");
    printf("///            3. CNPJ do Fornecedor: 60.409.075/0001-52                    ///\n");
    printf("///            4. Sede da Empresa: Sao Paulo, Brasil                        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    do{
        printf("///            # Deseja editar algum parametro(s/n)? ");
        scanf("%[^\n]", editar);
        getchar();

    }while(!validaOpcao(editar));

    printf("\n");
    do{
        printf("///              . Qual parametro deseja editar? ");
        scanf("%[^\n]", escolha_editar);
        getchar();
    }while (!validaParametro(escolha_editar,opMaxima));

    printf("\n///              . Nome do Fornecedor: Nestle Brasil                        ///\n");
    printf("///                                                                         ///\n");
    do{
        printf("///            # Deseja editar algum parametro(s/n)? ");
        scanf("%[^\n]", editar);
        getchar();

    }while(!validaOpcao(editar));

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}

void telaExcluirFornecedores(void) {
    system("clear||cls");
    char cnpj[19];
    int *vet;
    
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
    printf("///                         - Excluir Fornecedor -                          ///\n");
    printf("///                                                                         ///\n");  
    vet = (int*) malloc(14*sizeof(int));    
    do{
        printf("///            # Qual o CNPJ do fornecedor que voce deseja excluir ?? ");
        scanf("%[^\n]",cnpj);
        getchar(); 
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}

void telaEditarFornecedores(void) {
    system("clear||cls");
    char cnpj[19];
    int *vet;
    
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
    printf("///                          - Editar Fornecedor -                          ///\n");
    printf("///                                                                         ///\n");  
    vet = (int*) malloc(14*sizeof(int));    
    do{
        printf("///            # Qual o CNPJ do fornecedor que voce deseja editar ?? ");
        scanf("%[^\n]",cnpj);
        getchar(); 
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);
        
    }while (!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Voce sera redirecionado para tela de edicao ... ");
    sleep(1);
    telaModificarFornecedor();
}

char* telaPesquisarFornecedor(void) {
    system("clear||cls");
    char* cnpj;
    cnpj = (char*) malloc(19*sizeof(char));
    int *vet;
    
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
    printf("///                         - Pesquisar Fornecedor -                        ///\n");
    printf("///                                                                         ///\n");  

    vet = (int*) malloc(14*sizeof(int));
    printf("///                                                                         ///\n");
    do{
         printf("///            # Insira o CNPJ do fornecedor:  ");
        scanf("%[^\n]", cnpj);
        getchar();
        int tamArray = 14;
        cpftoi(cnpj,vet,tamArray);

    }while(!validaCnpj(vet));
    free(vet);

    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              . Voce sera redirecionado para os detalhes desse fornecedor ... ");
    sleep(1);
    
    return cnpj;
}

void telaErroArquivoFornecedor(void) {  
    system("clear||cls");

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
    printf("///                              - Fornecedor -                             ///\n");
    printf("///                                                                         ///\n");
    printf("///             ###############################################             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ####      ERRO NA GRAVACAO DO ARQUIVO      ####             ///\n");
    printf("///             ####                                       ####             ///\n");
    printf("///             ###############################################             ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();

}


void gravarFornecedor(Fornecedor* forn) {
	FILE* fp;

	fp = fopen("fornecedores.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoFornecedor();
	}
	fwrite(forn, sizeof(Fornecedor), 1, fp);
	fclose(fp);
}

Fornecedor* buscarFornecedor(char* cnpj) {
	FILE* fp;
	Fornecedor* forn;

	forn = (Fornecedor*) malloc(sizeof(Fornecedor));
	fp = fopen("fornecedores.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoFornecedor();
	}
	while(fread(forn, sizeof(Fornecedor), 1, fp)) {
		if ((strcmp(forn->cnpj, cnpj) == 0) && (forn->status == '1')) {
			fclose(fp);
			return forn;
		}
	}
	fclose(fp);
	return NULL;
}

void exibirAluno(Fornecedor* forn) {
    system("clear||cls");
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
    printf("///                              - Fornecedor -                             ///\n");
    printf("///                                                                         ///\n");

	if (forn == NULL) {
        printf("///             ###############################################             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ####        FORNECEDOR INEXISTENTE!        ####             ///\n");
        printf("///             ####                                       ####             ///\n");
        printf("///             ###############################################             ///\n");

	} else {

        printf("///            -> Informacoes do Fornecedor                                 ///\n");
        printf("///                                                                         ///\n");
        printf("///            . Nome do Fornecedor: %s\n", forn->nome);
        printf("///            . Razao Social: %s\n", forn->razao_social);
        printf("///            . CNPJ do Fornecedor: %s\n", forn->cnpj);
        printf("///            . Sede da Empresa: %s\n",forn->endereco);
	}
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n              # Pressione ENTER para voltar para Menu de Fornecedores ... ");
    getchar();
}