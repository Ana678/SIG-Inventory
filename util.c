
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "util.h"

/// cpf char para inteiro
void cpftoi(char str[],int *v, int tamArray){
  int tam,cont,num;
  char cnum;

  tam = strlen(str);
  cont = 0;

  for(int i=0; i < tam; i++){
    if(str[i] != '.' && str[i] != '-' && str[i] != '/'){
      if(str[i]=='0'){
        v[cont]= 0;            
        cont +=1;
      }
      else{
        cnum = str[i];
        num = atoi(&cnum);
        v[cont] = num;           
        cont +=1;
      }
    }
  }

  // se ainda sobrar espacos, porque a pessoa digitou qtd insuficiente de numeros, ele preenche com -1
  if((cont+1) != tamArray){
    while((cont+1) <= tamArray){
      v[cont] = -1;  
      cont++;
    }
  }
}

// Retirada do site https://wagnergaspar.com/como-converter-uma-string-em-maiusculo-ou-minusculo-em-qualquer-so-com-a-linguagem-c/

void transformUpper(char s1[], char s2[]){
    int i = 0;
    while(s1[i] != '\0'){
        s2[i] = toupper(s1[i]);
        i++;
    }
    s2[i] = '\0';
}
