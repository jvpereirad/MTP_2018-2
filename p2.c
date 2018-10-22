/* P2.c */
/* Joao Victor Pereira Delfino */
/* 11811EAU018*/

#include <stdio.h>

int elevar(int base, int exp)
{
	int i, prod=1;
	for(i=0; i<exp; i++ ){
		prod=prod*base;
	}
	return prod;
}

int transforma(char letra){
	int numero;
	if(letra>='0'&&letra<='9'){
		numero=letra-'0';
	}
	else if(letra>='A'&&letra<='F'){
		numero=letra-'A'+10;
	}
	else{
		numero=letra-'a'+10;
	}
	return numero;
}


int BaseParaDecimal(char bin[], int base){
	int tam=0;
	for(tam=0; bin[tam]; tam++);
	int i = (tam-1), exp=0, soma=0;
	for(;i>=0;i--){
		int valor=transforma(bin[i]);
		soma+=valor*elevar(base,exp);
		exp++;
	}
	return soma;
}



int main()
{
	int opcao, num, resto,dec;
	char bin[20];
	int numero;
	printf("\nMENU:\n");
	printf("\n1: Binario para decimal");
	printf("\n2: Binario para hexadecimal");
	printf("\n3: Hexadecimal para decimal");
	printf("\n4: Hexadecimal para binario");
	printf("\n5: Decimal para binario");
	printf("\n6: Decimal para hexadecimal");
	printf("\n7: Octal para decimal");
	printf("\n8: Decimal para Octal\n");
	scanf("%i", opcao);

	switch(opcao)
	{
	
	case 1://bindec
		printf("Digite um numero a ser convertido: ");
		scanf("%s", bin);
		getchar();
		dec=BaseParaDecimal(bin, 2);
		printf("%d", dec);
		break;
	case 2://binhex
		printf("Digite um numero a ser convertido: ");
		scanf("%s", bin);
		getchar();
		dec=BaseParaDecimal(bin, 16);
		printf("%d", dec);
		break;
		
	case 3://hexdec
		printf("Digite um numero a ser convertido: ");
		scanf("%s", bin);
		getchar();
		dec=BaseParaDecimal(bin, 8);
		printf("%d", dec);
		break;
		
	case 4://hexbin
	
	
		break;
	
	case 5://decbin
		printf("Digite o numero a ser convertido de decimal para binario:\n");
		scanf("%d", &num);
		getchar();
		while (num>0)
			{
			resto = num%2;
			printf("%d", resto);
			num = num/2;	
			}
    	break;
    
	case 6://dechex
	
		printf("\nDigite o numero na base decimal: ");
		scanf("%d", numero);
		getchar();
		printf("\nVoce digitou o numero %d em decimal que em hexadecimal e %X", numero, numero);
		break;
		
	case 7://ocdec
	
		printf("\nDigite o numero na base octal: ");
		scanf("%o", numero);
		getchar();
		printf("\nVoce digitou o numero %o em octal que em decimal e %d", numero, numero);
		break;

	case 8://decoc
	
		printf("\nDigite o numero na base decimal: ");
		scanf("%d", numero);
		getchar();
		printf("\nVoce digitou o numero %d em decimal que em octal e %o", numero, numero);
		break;
	}	
    return 0;
}
