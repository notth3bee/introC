#include <stdio.h>

int main(){
	
	int i, qtd;	
	float soma=0;
	
	printf("Digite a quantidade de numeros que vai processar:\n");
	scanf("%d",&qtd);	
	
for(i=1;i<=qtd;i++){

	soma+=i;	
}
	
	printf("O resultado da soma dos numeros de [1] a [%d] eh: [%3.2f].\n",qtd,soma);
	
	return 0;
}


