/* PO.c */
/* Joao Victor Pereira Delfino */
/* 11811EAU018*/

#include <stdio.h>

int main(int argc, char ** argv){
	int i;
	if(argc>1){
		if(argc>2)
	        for(i = 0; i < argv[2][0]-'0'; i++ )
		        printf("Valeu, %s\n", argv[1]);
		else
		    printf("Saudacoes, %s\n", argv[1]);
			
	} 
	else
	    printf("Ola!\n");
		return 0;	
	}

