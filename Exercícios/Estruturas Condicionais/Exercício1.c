//Aluna: Giovana Freitas 
//Aluna: Julia Andrade

#include <stdio.h>

int main (void){

	int dia, mes, ano, S, M, A, D;
	
	printf("Informe o Dia, Mes e Ano: ");
	scanf ("%d%d%d", &dia, &mes, &ano);

	if  (dia != 0 && mes != 0 && ano != 0)
	{
		//virada de seculo em janeiro ou fevereiro 
		if((ano % 100) == 0 && mes < 3)
		{
			M = mes + 10;
			S = (ano/100) - 1;
			A= 99;
		}
		else
		{
			S = ano / 100;
			if (mes >= 3)
			{
				M = mes - 2;
				A = ano % 100;
			}
			else  
			{	
				M = mes + 10;
				A = (ano % 100) - 1;
			}
		}

		D = (((int) (2.6 * M - 0.1)) + dia + A + (A/4) + (S/4) - 2 * S) % 7;

		if (D < 0)
			D = D + 7;

		if(D == 0)
			printf("%02d/%02d/%d: Domingo", dia, mes, ano);
		if(D == 1)
			printf("%02d/%02d/%d: Segunda", dia, mes, ano);
		if(D == 2)
			printf("%02d/%02d/%d: Terça-Feira", dia, mes, ano);
		if(D == 3)
			printf("%02d/%02d/%d: Quarta-Feira", dia, mes, ano);
		if(D == 4)
			printf("%02d/%02d/%d: Quinta-Feira", dia, mes, ano);
		if(D == 5)
			printf("%02d/%02d/%d: Sexta-Feira", dia, mes, ano);
		if(D == 6)
			printf("%02d/%02d/%d: Sábado", dia, mes, ano);
	
	}

		
	else
	{
		printf("Data Inválida.");
		return 0;
		
	}
	return 0;
	
}
