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
    for(int i =0; i<9;i++){
      switch (i){
        case 0:
          soma += (cpf[i]*10);
          break;

        case 1:
          soma += (cpf[i]*9);
          break;

        case 2:
          soma += (cpf[i]*8);
          break;
          
        case 3:
          soma += (cpf[i]*7);
          break;

        case 4:
          soma += (cpf[i]*6);
          break;

        case 5:
          soma += (cpf[i]*5);
          break;

        case 6:
          soma += (cpf[i]*4);
          break;

        case 7:
          soma += (cpf[i]*3);
          break;

        case 8:
          soma += (cpf[i]*2);
          break;
      }
    }

    // soma digito 2
    for(int i = 0; i<10;i++){
      switch (i){
        case 0:
          soma2 += (cpf[i]*11);
          break;

        case 1:
          soma2 += (cpf[i]*10);
          break;

        case 2:
          soma2 += (cpf[i]*9);
          break;
        
        case 3:
          soma2 += (cpf[i]*8);
          break;

        case 4:
          soma2 += (cpf[i]*7);
          break;

        case 5:
          soma2 += (cpf[i]*6);
          break;

        case 6:
          soma2 += (cpf[i]*5);
          break;

        case 7:
          soma2 += (cpf[i]*4);
          break;

        case 8:
          soma2 += (cpf[i]*3);
          break;
        case 9:
          soma2 += (cpf[i]*2);
          break;
      }
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

