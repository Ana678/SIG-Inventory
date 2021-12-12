#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "auxiliar.h"
#include "util.h"
#include <ctype.h>

////////////////////////////////////////////////////
//                   Valida CPF                   //

int validaCpf(int *cpf) {
  
  if(cpf[10] != -1){
    int d1, d2, vd1, vd2, soma, soma2;
    vd1 = 0;
    vd2 = 0;
    soma= 0;
    soma2= 0;

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
    }

    // digito 2
    d2 = (soma2 *10)%11;
    if(d2== 10){
      d2=0;
    }
    
    if(d2 == cpf[10]){
      vd2=1;
    }

    // testando se cpf é valido
    if(vd1==1 && vd2 == 1){
      return 1;
    }
    
  }
  return 0;
}

////////////////////////////////////////////////////
//                  Valida CNPJ                   //

int validaCnpj(int *cnpj){

  if (cnpj[13] != -1){
    int peso, soma1, soma2, d1Valido, d2Valido;
    soma1 = 0;
    soma2 = 0;
    d1Valido = 0;
    d2Valido = 0;

    
    // verificando primeiro digito
    peso = 5;
    for(int i = 0; i < 12; i++){
      soma1 += (cnpj[i])*peso;
      
      if(peso == 2){
        peso = 9;
      }else{
        peso--;
      }
    }

    int restod1 = 11 - ((soma1)%11);
    if (restod1 == 10){
      restod1 = 0;
    }

    if(restod1 == cnpj[12]){
      d1Valido = 1;
    }
    
    // verificando segundo digito
    peso = 6;
    for(int i = 0; i < 13; i++){
      soma2 += (cnpj[i])*peso;
      
      if(peso == 2){
        peso = 9;
      }else{
        peso--;
      }
    }

    int restod2 = 11-((soma2)%11);

    if (restod2 == 10){
      restod2 = 0;
    }

    if(restod2 == cnpj[13]){
      d2Valido = 1;
    }
    
    // verificando se ambos os digitos sao validos

    if(d1Valido == 1 && d2Valido == 1){
      return 1;
    }
  }
  return 0;
}

////////////////////////////////////////////////////
//             Valida Codigo de Barras            //

int validaCDB(char cdb[14]) {
  int somaPar=0;
  int somaImpar=0;
  int len = strlen(cdb);
  char cnum;

  if(len == 13){
    for(int i =0; i < strlen(cdb) -1; i++){
      if(i%2 == 0){
        cnum = cdb[i];
        somaPar += atoi(&cnum);
        
      }else{     
        int numConvertido = 0;  
        if(cdb[i] != '0'){
          cnum = cdb[i];
          numConvertido = atoi(&cnum);
        }
        somaImpar += numConvertido*3;
  
      }
    }
    
    int restoTotal = (somaPar + somaImpar)%10;
    int ultCaracter = atoi(&cdb[12]);

    if((10 - restoTotal) == (ultCaracter)){
      return 1;
    }
  }
  return 0;
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


int validaQuantidade (char qtd[]){
	int cont = 0;
	int tam= strlen(qtd);

 
	
	for(int i=0; i<tam ; i++){
    
		if(isdigit(qtd[i])){
      
			cont++;
		}
    
	}
  
  if (tam == cont){
    return 1;
  }
  return 0;
}


////////////////////////////////////////////////////
//                Valida Endereco                 //

int validaPais(char pais[3]){
  
  int valido = 0;
  if(strlen(pais) == 2){
    for(int i = 0; i < strlen(pais); i++){
      if(!isdigit(pais[i]) && pais[i] == toupper(pais[i])){
        valido += 1;
      }
    }

    if(valido == strlen(pais)){
      return 1;
    }
  }
  return 0;

}

int validaEndereco(char dado[80]){  
  
  int valido = 0;
  if(strlen(dado) != 0){
    for(int i = 0; i < strlen(dado); i++){
      if(!isdigit(dado[i])){
        valido += 1;
      }
    }

    if(valido == strlen(dado)){
      return 1;
    }
  }
  return 0;

}

////////////////////////////////////////////////////
//               Valida Opcao (s/n)               //


int validaOpcao(char n){
  
	if (n == 'S' || n == 's' || n == 'N' || n == 'n'){
		return 1;

	}
	return 0;
}

////////////////////////////////////////////////////
//           Valida Parametro (1,2,3,4)           //

int validaParametro(char op[2], int max){
  
	if (isdigit(op[0]) && strlen(op) == 1 && op[1] == '\0'){
		int opInt = atoi(&op[0]);
    if(opInt > 0 && opInt <= max){
      return 1;
    }
	}
	return 0;
}

////////////////////////////////////////////////////
//              Valida Razao Sp            //