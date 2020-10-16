#include <stdio.h>

int main() {
 
  int vetor[10] = {10, 12, 5, 3, 50, 10, 6, 5, 8, 1};
  int procura,
	i,
	n = 10,
  	p = 0;
  int guardaPosicao[n];

	//Definição do número que procuro 
    procura = 10;
	printf("O número buscado é: %d\n", procura);
	 
	
	//Verifica se o número procurado existe
	for(i = 0; i < n ; i++){
		if( vetor[i] == procura ){
			guardaPosicao[p] = i;
			p++;
		}
	}

	//Imprime a posição do número procurado 
	if ( p == 1 ){
		
		for(i = 0; i < p ; i++){
		printf("A posição do número %d é: %i \n", procura, guardaPosicao[i]);	
		}			
	
	}else if( p > 1){
		
		printf("O número %d está nas seguintes posições: \n", procura); 
		for(i = 0; i < p ; i++){
		printf("%i\n", guardaPosicao[i]);	
		}	

	}
	else{
		printf("Número não encontrado");
	}

	
  return 0;
}