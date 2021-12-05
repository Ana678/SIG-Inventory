#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

// Valida CPF

    //faz os testes do cpf





// Valida CNPJ




// Valida Codigo de Barras

// Valida Nome
// 0 -> n encontrou erros       1 -> encontrou erros

int validaNome(char nome[21]){
    
    char caracteres_excluidos[] = "0123456789,-:;[]{}*#"; //definir caracteres inuteis
    int validado = 1;

    for(int i = 0; i < tamanhoString(nome); i++){        
        for(int j = 0; j < tamanhoString(caracteres_excluidos); j++){
            if(nome[i] == caracteres_excluidos[j]){
                validado = 0;
            }
        }
    }
    return validado;
}


// Valida Quantidade

