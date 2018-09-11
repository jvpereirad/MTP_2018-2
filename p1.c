#include <stdio.h>


int main() 
{
	int estado = 0;
	int i;
	char bits[256];
	printf("Digite o numero formado apenas por 0s e 1s para saber se e par ou impar: ");
    scanf("%s", bits);
	for(i=0 ; bits[i] != '\0'; i++ )
	{
		if(estado == 0 && bits[i] =='0')
		{
			estado = 0;
		}
		else if(estado == 0 && bits[i] == '1')
		{ 
		    estado = 1;
	    }
		else if(estado == 1 && bits[i] == '0')
		{
			estado = 2;
		}
		else if(estado == 1 && bits[i] == '1')
		{
		    estado = 0;
		}
		else if(estado == 2 && bits[i] == '0')
		{
			estado = 1;
		}
		else if(estado == 2 && bits[i] == '1')
		{
			estado = 2;
		}
	} 
	printf("\nA sequencia original e %s", bits);
	if(estado == 0)
	{
		printf("\nE multiplo de 3");
	}
	else if(estado == 1 || estado == 2)
	{
		printf("\nNao e multiplo de 3");
	}
	return 0;
}
