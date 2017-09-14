/*Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre acidentes de trânsito.
Foram obtidos os seguintes dados:
a) código da cidade;
b) número de veículos de passeio (em 1999);
c) número de acidentes de trânsito com vítimas (em 1999).
Deseja-se saber:
a) qual o maior e o menor índice de acidentes de trânsito e a que cidades pertencem;
b) qual a média de veículos nas cinco cidades juntas;
c) qual a média de acidentes de trânsito nas cidades com menos de 2000 veículos de passeio*/

#include <stdio.h>

float maiorAcidente(float aci)
{
  float maior;
  if(aci > maior)
  {
    maior = aci;
    return maior;
  }
}

float menorAcidente()
{
	float menor;
	if (aci < menor)
	{
		menor = aci;
		return menor;
	}
}

int main(int argc, char *argv[])
{
	int num[5], auxnum, cod[5], auxcod, i;
	float aci[5], acimaior, acimenor;
	scanf("%d", cod);
	scanf("%d", num);
	scanf("%f", aci);
	for (i = 0; i < 5; ++i)
	{
		if (aci[i] < acimenor)
		{
			acimenor = aci[i];
		}
	}
	for (i = 0; i < 5; ++i)
	{
		if (aci[i] > acimaior)
		{
			acimaior = aci[i];
		}
	}
	printf("%f\n", acimaior);
	printf("%f\n", acimenor);
	return 0;
}