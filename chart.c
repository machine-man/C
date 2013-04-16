#include <cc50.h>
#include <stdio.h>

int main(void)
{   

  int mf, fm, ff, mm;	
	
	do
	{
		printf("M procurando F: \n");
		mf = GetInt();
	
		printf("F procurando M: \n");
		fm = GetInt();
	
		printf("F procurando F: \n");
		ff = GetInt();
	
		printf("M procurando M: \n");
		mm = GetInt();	
		
	}
	while(mf < 0 || fm < 0 || ff < 0 || mm < 0 || (mf + fm + ff + mm) > 10);
	
	printf("\n");
	printf("Quem procura quem?\n\n");
	
	int barras = 80;

	mf *= (int)((barras / 100.0) * 10.0);
	fm *= (int)((barras / 100.0) * 10.0);
	ff *= (int)((barras / 100.0) * 10.0);
	mm *= (int)((barras / 100.0) * 10.0);
	//printf("mf = %d, fm = %d, ff = %d, mm = %d\n",mf,fm,ff,mm);

	printf("M procurando F\n");
	for(int i = 0; i < mf; i++)
	{
		printf("#");
	}
	
	printf("\n");
	
	printf("F procurando M\n");
	for(int j = 0; j < fm; j++)
	{
		printf("#");
	}
	
	printf("\n");
	
	printf("F procurando F\n");	
	for(int k = 0; k < ff; k++)
	{
		printf("#");
	}
	
	printf("\n");
	
	printf("M procurando M\n");
	for(int l = 0; l < mm; l++)
	{
		printf("#");
	}
	
	printf("\n");
	
	return 0;
}
