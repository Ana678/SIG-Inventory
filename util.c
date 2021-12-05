
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

/// cpf char para inteiro
int cpftoi(char str[15]){
    int tam,cont;
    int cpfNum[11];  
    tam = strlen(str);
    char cnum;
    cont = 0;
    int num;
    for(int i=0; i < tam; i++){
        if(str[i] != '.' && str[i] != '-'){
            if(str[i]=='0'){
                cpfNum[cont]= 0;            
                cont +=1;
            }
            else{
                cnum = str[i];
                num = atoi(&cnum);
                cpfNum[cont] = num;           
                cont +=1;
            }
        }
  }
  return cpfNum;
}

// Funcao serve para calcular o tamanho de uma string que esta sendo usada
//funcao inspirada: https://wagnergaspar.com/como-descobrir-o-tamanho-de-uma-string-com-a-linguagem-de-programacao-c/

int tamanhoString(char nome[]){
  int tamanho, i;
  tamanho = i = 0;

  while(nome[i] != '\0'){
    i++;
    tamanho++;
  }
  return tamanho;
}