#include<stdio.h>
int main()
{
	float p,m,k,x;
	int op;
	printf("Selecione o que você quer calcular:\n");
	printf("1 - Instensidade da força aplicada\n");
	printf("2 - Constante elástica da mola\n");
	printf("3 - Deformação da mola\n");
	printf("Qual sua opção: ");
	scanf("%d",&op);
		if(op==1)
		{
			printf("Digite constante elástica da mola: ");
			scanf("%f",&k);
			printf("Digite a deformação da mola: ");
			scanf("%f",&x);
			p=k*x;
			printf("A intensidade da força aplicada é %fN\n",p);
		}
		if(op==2)
		{
			printf("Digite o peso: ");
			scanf("%f",&p);
			printf("Digite a deformação da mola: ");
			scanf("%f",&x);
			k=p/x;
			printf("A constante elástica da mola é %f\n",k);
		}
		if(op==3)
		{
			printf("Digite o peso: ");
			scanf("%f",&p);
			printf("Digite a constante elástica da mola: ");
			scanf("%f",&k);
			x=p/k;
			printf("A deformação da mola é %f metros\n",x);
		}
}
