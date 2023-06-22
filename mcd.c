#include<stdio.h>

int main() {
	int mcd,num1,num2,r;
	printf("MCD de dos numeros\n");
	printf("ingresa el primer digito\n");
	scanf("%d",&num1);
	printf("ingresa elsegundo digito\n");
	scanf("%d",&num2);
	do {
		r = num1 % num2;
		
		if (r!=0) {
			num1 = num2;
			num2 = r;
		}
		else {
			
			mcd=num2;
		}
		
	}while (r !=0);
	printf("el maximo comun divisor es: %d\n",mcd);
	return 0;
}

