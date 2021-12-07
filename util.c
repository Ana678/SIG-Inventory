
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "util.h"

/// cpf char para inteiro
void cpftoi(char str[],int *v){
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
}