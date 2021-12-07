#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "auxiliar.h"
#include "util.h"


////////////////////////////////////////////////////
//             Valida Codigo de Barras            //

int validaCDB(char cdb[14]) {
  int somaPar=0;
  int somaImpar=0;
  
  if(strlen(cdb) == 13){
    for(int i =0; i < strlen(cdb) -1; i++){
      if(i%2 == 0){
        char cnum = cdb[i];
        somaPar += atoi(&cnum);
        
      }else{     
        int numConvertido = 0;  
        if(cdb[i] == '0'){
          numConvertido = 0;
        }else{
          char cnum = cdb[i];
          numConvertido = atoi(&cnum);

        }
        somaImpar += numConvertido*3;
      }
    }

    int restoTotal = (somaPar+somaImpar)%10;
    char n = cdb[12];
    int numConvertido = atoi(&n);

    if((10 - restoTotal) == (numConvertido)){
      return 1;
    }else{
      return 0;
    }
  }else{
    return 0;
  }
  
}

////////////////////////////////////////////////////
//                  Valida Nome                   //

// 1 -> n encontrou erros       0 -> encontrou erros

int validaNome(char nome[21]){
    
  char caracteres_excluidos[] = "0123456789,-:;[]{}*#"; //definir caracteres inuteis

  for(int i = 0; i < strlen(nome); i++){        
    for(int j = 0; j < strlen(caracteres_excluidos); j++){
      if(nome[i] == caracteres_excluidos[j]){
          return 0;
      }
    }
  }
  return 1;
}

////////////////////////////////////////////////////
//               Valida Quantidade                //

int validaQuantidade(int qtd){
  int valido = 0;
  
  if(qtd >= 0){
    valido = 1;
  }
}

