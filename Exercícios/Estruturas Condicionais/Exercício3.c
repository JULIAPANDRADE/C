//Aluna: Giovana Freitas 
//Aluna: Julia Andrade

#include<stdio.h>
#include<string.h>

int main()
{
    char nome1[21], nome2[21], resultado;
    int n, i, cont;

    printf("Insira a quantidade de testes: ");
    scanf("%d",&n);
   
    while(cont < (n * 2))
    {
        printf("Insira o primeiro nome: ");
        scanf("%s", nome1);

        printf("Insira o segundo nome: ");
        scanf("%s", nome2);

        if(strlen(nome1) == strlen(nome2))
        {
            for(i=0; i < strlen(nome1); i++)
            {
                if(nome1[i] == nome2[i])
                    resultado = 'Y'; 
                else if((nome1[i] == 'a' || nome1[i] == 'e' || nome1[i] == 'i' || nome1[i] == 'o' || nome1[i] == 'u') && 
                        (nome2[i] == 'a' || nome2[i] == 'e' || nome2[i] == 'i' || nome2[i] == 'o' || nome2[i] == 'u'))
                        resultado = 'Y'; 
                else 
                {
                    resultado = 'N';
                    break;
                }
            }

         }
        else
            resultado = 'N';

    if(resultado == 'Y')
        printf("Yes \n");
    else
        printf("No \n");

    cont = cont + 2;

    }
    return 0;
}
