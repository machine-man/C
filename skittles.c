#include <cc50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  //seed PRNG
	srand(time(NULL));
	
	//choose pseudo-random number between [0, 1023]
	int skittles = rand() % 1024;
		
	int guess;
	int count = 1;
	
	//Opening message of the game.
	printf(" -----------------------------------------------------------------\n");
	printf("| Olá! eu sou uma máquina de doces falante e gostaria que você    |\n");
	printf("| adivinhe quantas balas eu tenho agora, vamos brincar?           | \n");
	printf(" -----------------------------------------------------------------\n");
	//printf("%d skittles\n",skittles);
	
	//user interface, while repeats guess is different from skittles.
	do
	{
		printf("Estou pensando em um número entre 0 e 1023. Qual é ele? ");
		guess = GetInt();
		
		if(guess == skittles)
		{
			printf("Yes! Eu tenho %d skittles. \n",skittles);			
			printf("Voce acertou em %d palpites.\n",count);
		}
		
			
		else if(guess < skittles)
		{
			if(guess < (skittles / 2))
				printf("Haha! Tenho mais que o dobro disso de skittles. Tente novamente.\n");
			
			else
				printf("Haha! Tenho mais skittles do que isso. Tente novamente.\n");
		}
					
		
		else if(guess > skittles)
		{			
			if(guess > (skittles * 2))
				printf("Eh muito! Eh mais que o dobro que eu tenho de skittles. Tente novamente.\n");
			
			else
				printf("Ok, eles nao sao tantos assim. Tente novamente.\n");
		}
		
		count++; 
		 		
	}while(guess != skittles);				
	
	return 0;
}
