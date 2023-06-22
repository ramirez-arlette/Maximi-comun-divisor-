# Maximi-comun-divisor-
Proyecto final 
// Descripcion del problema y la solucion //
Este programa esta diseñado para encontrar el máximo común divisor de dos números enteros que proporciona el usuario.
El máximo común divisor es el número mayor que divide a ambos numeros.
Este problema lo solucionamos mediante el algoritmo de Euclides.
Este algoritmo consiste en hacer divisiones sucesivas.
Donde a=b(q1) + r1                                  0<= r1<b
            b= r1(q2) + r2   deben cumplir          0<= r2 < r1
            r1=r2(q3) + r3                          0<= r3 <r2

Cuando el residuo es cero has llegado al resultado.
// Codigo Fuente//
'''
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
´´´
// Indicaciones //
Para poder ejecutar el programa es necesario utilizar cualquier compilador de lenguaje C, como lo son Dev C++, entro otros. 
Ejecuta el programa, ingresas los datos solicitados y obtendras la respuesta.
// Valores de entrada y salida esperados //

            1.- 48,18 = 6
2.- 44,68= 4
3.-15,5 = 5
