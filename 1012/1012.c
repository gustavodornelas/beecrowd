/*Escreva um programa que leia tr�s valores com ponto flutuante de dupla precis�o: A, B e C. Em seguida, calcule e mostre:
a) a �rea do tri�ngulo ret�ngulo que tem A por base e C por altura.
b) a �rea do c�rculo de raio C. (pi = 3.14159)
c) a �rea do trap�zio que tem A e B por bases e C por altura.
d) a �rea do quadrado que tem lado B.
e) a �rea do ret�ngulo que tem lados A e B.
Entrada

O arquivo de entrada cont�m tr�s valores com um d�gito ap�s o ponto decimal.

Sa�da

O arquivo de sa�da dever� conter 5 linhas de dados.
Cada linha corresponde a uma das �reas descritas acima, sempre com mensagem correspondente e um espa�o entre os dois pontos e o valor. O valor calculado deve ser apresentado com 3 d�gitos ap�s o ponto decimal.*/

#include <stdio.h>

int main (){

	double A, B, C;
	double TRI, CIR, PI, TRA, QUA, RET;

	PI = 3.14159;

	scanf ("%lf %lf %lf", &A, &B, &C);

	TRI = (A*C)/2;
	CIR = (C*C)*PI;
	TRA = ((A+B)*C)/2;
	QUA = B*B;
	RET = A*B;

	printf ("TRIANGULO: %.3f\nCIRCULO: %.3f\nTRAPEZIO: %.3f\nQUADRADO: %.3f\nRETANGULO: %.3f\n", TRI, CIR, TRA, QUA, RET);

	return 0;
}
