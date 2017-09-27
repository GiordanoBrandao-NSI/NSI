#include<stdio.h>
int main()
{
	float p,m,a;
	int op;
	printf("Selecione o que você quer calcular:\n");
	printf("1 - Peso\n");
	printf("2 - Massa\n");
	printf("3 - Aceleração\n");
	printf("Qual sua opção: ");
	scanf("%d",&op);
		if(op==1)
		{
			printf("Digite a massa: ");
			scanf("%f",&m);
			printf("Digite a aceleração: ");
			scanf("%f",&a);
			p=m*a;
			printf("O peso é %fN\n",p);
		}
		if(op==2)
		{
			printf("Digite o peso: ");
			scanf("%f",&p);
			printf("Digite a aceleração: ");
			scanf("%f",&a);
			m=p/a;
			printf("A massa é %fKg\n",m);
		}
		if(op==3)
		{
			printf("Digite o peso: ");
			scanf("%f",&p);
			printf("Digite a massa: ");
			scanf("%f",&m);
			a=p/m;
			printf("A aceleração é %fm/s²\n",a);
		}
}
