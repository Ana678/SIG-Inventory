
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/// cpf char para inteiro
int cpftoi (char str[15]){
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
                cpfNum [cont]= num;           
                cont +=1;
            }
        }
  }
  return cpfNum;
}