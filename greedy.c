#include <cc50.h>
#include <stdio.h>

int main(void)
{
		float troco;
		int contador = 0; 
		int erro = 0;
		
		do
		{
			printf("Oi. Quanto troco voce deve? ");
			troco = GetFloat(); 
									
			if(troco <= 0)
			{	
				if(erro >= 2)
				{
					printf("Ah... Tente de novo.\n");	
				}
				
				else
					printf("Desculpe? Quanto você disse?\n");
									
				erro++;
			}			
						
		}while(troco <= 0);
	
		int moedas = (int)(troco * 100);	
		//printf("Moedas: %d\n", moedas);	
				
		while(moedas >= 25)
		{
			moedas -= 25;
			contador++;	
			//printf("25\n");		
		}


		while(moedas >= 10)
		{
			moedas -= 10;
			contador++;	
			//printf("10\n");				
		}


		while(moedas >= 5)
		{	
			moedas -= 5;
			contador++;	
			//printf("5\n");	
		}

		
		while(moedas >= 1)
		{	
			moedas -= 1;
			contador++;
			//printf("1\n");	
		}
		
		printf("%d\n",contador);	
		return 0;
}
