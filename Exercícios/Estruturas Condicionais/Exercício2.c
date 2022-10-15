//Aluna: Giovana Freitas 
//Aluna: Julia Andrade

#include <stdio.h>

int main()
{
	int pecaMes[4][4], granaPeca[4][3], granaMes[4][3], lPM, cPM, lGP, cGP, custoJ, custoF, custoM, lucroJ, lucroF, lucroM;
	
	printf("\n// Use TAB para passar para a proxima coluna e ENTER para a proxima linha, matriz ou resultado //\n");
    printf("\n*PecaMes*\n\n");
    printf("\n	P1	P2	P3");
	for (lPM=0; lPM<3; lPM++)
	{
		if(lPM == 0)
			printf("\nJAN");
		else if(lPM == 1)
			printf("FEV");
			else
				printf("MAR");
		for(cPM=0; cPM<3; cPM++)
		{
			scanf("%d", &pecaMes[lPM][cPM]);
		}

	}


	printf("\n\n*GranaPeca*\n\n");
	printf("\n	CUSTO	LUCRO");
	for (lGP=0; lGP<3; lGP++)
	{
		if(lGP == 0)
			printf("\nP1");
		else if(lGP == 1)
			printf("P2");
			else
				printf("P3");
		for(cGP=0; cGP<2; cGP++)
		{
				scanf("%d", &granaPeca[lGP][cGP]);
		}

	}

	custoJ = (pecaMes[0][0] * granaPeca[0][0]) + (pecaMes[0][1] * granaPeca[1][0]) + (pecaMes[0][2] * granaPeca[2][0]);
	lucroJ = (pecaMes[0][0] * granaPeca[0][1]) + (pecaMes[0][1] * granaPeca[1][1]) + (pecaMes[0][2] * granaPeca[2][1]);

	custoF = (pecaMes[1][0] * granaPeca[0][0]) + (pecaMes[1][1] * granaPeca[1][0]) + (pecaMes[1][2] * granaPeca[2][0]);
	lucroF = (pecaMes[1][0] * granaPeca[0][1]) + (pecaMes[1][1] * granaPeca[1][1]) + (pecaMes[1][2] * granaPeca[2][1]);

	custoM = (pecaMes[2][0] * granaPeca[0][0]) + (pecaMes[2][1] * granaPeca[1][0]) + (pecaMes[2][2] * granaPeca[2][0]);
	lucroM = (pecaMes[2][0] * granaPeca[0][1]) + (pecaMes[2][1] * granaPeca[1][1]) + (pecaMes[2][2] * granaPeca[2][1]);

	granaMes[0][0] = custoJ;
	granaMes[0][1] = lucroJ;

	granaMes[1][0] = custoF;
	granaMes[1][1] = lucroF;

	granaMes[2][0] = custoM;
	granaMes[2][1] = lucroM;

	printf("\n\n*GranaMes*\n\n");
	printf("      CUSTO  LUCRO\n");
	printf("JAN    %d    %d  \n", granaMes[0][0], granaMes[0][1]);
	printf("FEV    %d    %d  \n", granaMes[1][0], granaMes[1][1]);
	printf("MAR    %d    %d  \n", granaMes[2][0], granaMes[2][1]);
	
	return 0;
}
