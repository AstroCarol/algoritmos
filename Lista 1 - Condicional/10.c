/*A partir do preço à vista de um determinado produto, calcular o preço total a pagar e o valor da prestação
mensal, referentes ao pagamento parcelado. Se o pagamento for parcelado em três vezes deverá ser dado
um acréscimo de 10% no total a ser pago. Se for parcelado em 5 vezes, o acréscimo é de 20%.*/

#include <stdio.h>

double preco(double p, int v)
{
	double parcela;
	if (v == 3)
	{
		parcela = p * 0.1;
		parcela = p + parcela;
		return parcela;
	}
	else if (v == 5)
	{
		parcela = p * 0.2;
		parcela = p + parcela;
		return parcela;
	}
}

int main(int argc, char *argv[])
{
	int v;
	double p, parcela;
	printf("Qual o valor do produto?\n");
	scanf("%lf", &p);
	printf("Deseja parcelar em quantas vezes(3 ou 5)?\n");
	scanf("%d", &v);
	parcela = preco(p,v);
	printf("Valor a ser pago: %.2f\n", parcela);
	return 0;
}
