#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char c1[20], r;
	float vendac1;
	float co1;
	float totalvendas=0;

	printf("Vendas dos Corretores");
	
	do{
			printf("\nDigite o nome do corretor: ");
			scanf("%s", &c1);
			printf("Digite o valor da venda realizada por %s: ", c1);
			scanf("%f", &vendac1);
		
			if(vendac1 > 50000){
			
			totalvendas = totalvendas + vendac1;
			co1 = vendac1 * 0.12;
			
			printf("\nRelatorio de vendas dos corretores \n");
			printf("Corretor: %s \n", c1);
			printf("Valor da venda: %0.2f \n", vendac1);
			printf("Comissao adquirida: %0.2f \n", co1);		
			printf("Total de vendas da empresa ate o momento: %0.2f\n\n", totalvendas);
			printf("Se deseja realizar mais operacoes digite S, caso contrario digite N: ");
			scanf(" %c", &r);
			
		}else if(vendac1 >= 30000 && vendac1 <= 50000 ){
			
			totalvendas = totalvendas + vendac1;
			co1 = vendac1 * 0.095;
			
			printf("\nRelatorio de vendas dos corretores \n");
			printf("Corretor: %s \n", c1);
			printf("Valor da venda: %0.2f \n", vendac1);
			printf("Comissao adquirida: %0.2f \n", co1);		
			printf("Total de vendas da empresa ate o momento: %0.2f\n\n", totalvendas);
			
			printf("Se deseja realizar mais operacoes digite S, caso contrario digite N: ");
			scanf(" %c", &r);
			
		}else{
			
			totalvendas = totalvendas + vendac1;
			co1 = vendac1 * 0.07;
			
			printf("\nRelatorio de vendas dos corretores \n");
			printf("Corretor: %s \n", c1);
			printf("Valor da venda: %0.2f \n", vendac1);
			printf("Comissao adquirida: %0.2f \n", co1);		
			printf("Total de vendas da empresa ate o momento: %0.2f\n\n", totalvendas);
			
			printf("Se deseja realizar mais operacoes digite S, caso contrario digite N: ");
			scanf(" %c", &r);
		}
	}while(r == 'S');
	
	printf("\n\nOperacao finalizada.");
	
	system("pause");
	return 0;	
}
