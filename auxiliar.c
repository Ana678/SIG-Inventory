#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

// Valida CPF

int validaCpf(int *cpf) {
  
  int d1, d2, vd1, vd2, soma, soma2;
  int valido= 1;  
  soma= 0;
  soma2= 0;

  for(int j = 0; j < 9; j++){ 
    int contagem = 0;// 0
    for(int i = 0; i < 11; i++){
      if (j == cpf[i]){
        contagem++;
      }
    }
    if (contagem == 11){
      valido=0;
    }
  }

  if (valido != 0){
    //soma digito 1
    int multiplicador = 10;
    for(int i =0; i<9;i++){
      soma += (cpf[i]*multiplicador);
      multiplicador--;
    }

    // soma digito 2
    int multiplicador2 = 11;
    for(int i = 0; i<10;i++){
        soma2 += (cpf[i]*multiplicador2);
        multiplicador2--;
      
    }

    //digito 1
    d1 = (soma *10)%11;

    if(d1 == 10){
      d1=0;
    }

    if(d1 == cpf[9]){
      vd1= 1;
    }else{
      vd1=0;
    }

    // digito 2
    d2 = (soma2 *10)%11;
    if(d2== 10){
      d2=0;
    }
    
    if(d2 == cpf[10]){
      vd2=1;
    }else{
      vd2=0;
    }

    // testando se cpf é valido
    if(vd1==1 && vd2 == 1){
      valido=1;
    }else{
      valido = 0;
    }
    
  }
  
  return valido;
}


// Valida CNPJ




// Valida Codigo de Barras

// Valida Nome
// 1 -> n encontrou erros       0 -> encontrou erros

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

int validaQuantidade(int qtd){
  int valido = 0;
  
  if(qtd >= 0){
    valido = 1;
  }
}
