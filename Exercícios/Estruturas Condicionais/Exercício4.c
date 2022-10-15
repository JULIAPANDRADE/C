//Aluna: Giovana Freitas 
//Aluna: Julia Andrade

#include <stdio.h>
#include <string.h>

int digito1();
int digito2();
char CPF[15];

int main()
{
	while (strcmp(CPF, "000.000.000-00") != 0)
	{
		printf("\nCPF: ");
		scanf("%s", CPF);

		if((strlen(CPF) != 14) || (strcmp(CPF, "000.000.000-00") == 0) || (strcmp(CPF,"111.111.111-11") == 0) || (strcmp(CPF,"222.222.222-22") == 0) || (strcmp(CPF,"333.333.333-33") == 0)
			|| (strcmp(CPF,"444.444.444-44") == 0) || (strcmp(CPF,"555.555.555-55") == 0) || (strcmp(CPF,"666.666.666-66") == 0)
			|| (strcmp(CPF,"777.777.777-77") == 0) || (strcmp(CPF,"888.888.888-88") == 0) || (strcmp(CPF,"999.999.999-99") == 0))
		{
			printf("CPF invalido.");
		}
		else if(((CPF[12]-'0') == digito1()) && ((CPF[13]-'0') == digito2()))
			printf("CPF valido!");
		else
			printf("CPF inválido - esperado: %d%d; encontrado: %d%d",digito1(), digito2(), (CPF[12]-'0'), (CPF[13]-'0'));
		
	}

return 0;
}

//como parametro só que receber não o que criar
//uma funcao só retorna um valor

int digito1()
{
	int i, digito1=0, multiplicacao = 0;
	//852.136.847-84
	for (i=0; i<11; i++)
	{	
		multiplicacao++;
		if(CPF[i] == '.')
		{
			//contador aumenta
			i++;
		}
		//-'0' para tranformar em int
		digito1 = ((CPF[i] - '0')* multiplicacao) + digito1;	
	}
	digito1 = digito1 % 11;
	if(digito1 == 10)
		digito1 = 0;

return digito1;
}

int digito2()
{
	int i, digito2=0, multiplicacao = 12;
	//852.136.847-84
	for (i=0; i<11; i++)
	{	
		multiplicacao--;
		if(CPF[i] == '.')
		{
			//contador aumenta
			i++;
		}
		//-'0' para tranformar em int
		digito2 = ((CPF[i] - '0')* multiplicacao) + digito2;
		
	}
	digito2 = ((digito2 +(digito1() *2)) * 10) % 11;

	if(digito2 == 10)
		digito2 = 0;

return digito2;
}
