#include <stdio.h>

int main(){

	int opcao;	
	
	printf("Digite a sua opcao\n");
	scanf("%d",&opcao);
	
switch (opcao){

	case 1:
	printf("Voc� escolheu a opcao 1.\n");
	break;
	case 2:
    	printf("Voc� escolheu a opcao 2.\n");
	break;
	default:
    	
	printf("A opcao escolhida nao eh valida!.\n");
}
	
return 0;

}


