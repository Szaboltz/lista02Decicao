#include <stdio.h>

void q1() {
	int n1, n2, n3, tempMaior, tempMedio, tempMenor, r;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &n1);
	printf("Digite o segundo numero: ");
	scanf("%d", &n2);
	printf("Digite o terceiro numero: ");
	scanf("%d", &n3);
	
	if ( n1 > n2 && n1 > n3) {
		tempMaior = n1;
		if (n2 > n3) {
			tempMedio = n2;
			tempMenor = n3;
		} else {
			tempMedio = n3;
			tempMenor = n2;
		}
	} else if (n2 > n3 && n2 > n1) {
		tempMaior = n2;
		if (n1 > n3) {
			tempMedio = n1;
			tempMenor = n3;
		} else {
			tempMedio = n3;
			tempMenor = n1;
		}
	} else if ((n3 > n2 && n3 > n1)) {
		tempMaior = n3;
		if (n2 > n1) {
			tempMedio = n2;
			tempMenor = n1;
		} else {
			tempMedio = n1;
			tempMenor = n2;
		}
	} else {
		tempMenor = n3;
	}
	
	r = (tempMaior * tempMenor) + tempMedio;

	printf("\nMaior numero: %d\nMenor numero: %d\nMedio: %d\nE o resultado e: %d", tempMaior, tempMenor, tempMedio, r);

}

void q2() {
	float compra, desconto, valorNovo;

	printf("Digite o valor total da compra: ");
	scanf("%f", &compra);

	if (compra >= 500.00) {
		desconto = 0.15 * compra;
		valorNovo = compra - desconto;
	} else if (compra <= 200.00) {
		desconto = 0.05 * compra;
		valorNovo = compra - desconto;
	} else {
		desconto = 0.10 * compra;
		valorNovo = compra - desconto;
	}

	printf("O valor da compra foi de: %0.2f\nO valor do desconto e: %0.2f\nO valor a ser pago e: %0.2f", compra, desconto, valorNovo);
}

void q3() {
	float p, e, m;

	printf("Digite o peso total de peixes: ");
	scanf("%f", &p);

	if (p > 50.00) {
		e = p - 50.00;
		m = e * 4.00;
	} else {
		e = 0;
		m = 0;
	}

	printf("O valor total de peixes e: %0.3f\nO exesso e: %0.3f quilos\nA multa e de R$ %0.3f ", p, e, m);
}

void q4() {
	int c;
	float n, e, sT, sE;

	printf("Digite o codigo: ");
	scanf("%d", &c);

	printf("Digite o numero de horas trabalhadas: ");
	scanf("%f", &n);


	if (n > 50.00) {
		e = n - 50.00;
		sE = e * 20.00;
		sT = (50.00 * 10.00) + sE;
	} else {
		e = 0;
		sE = 0;
		sT = n * 10.00;
	}

	printf("O salario total e: R$ %0.3f\nE o salario excedente e: R$ %0.3f", sT, sE);
}

void q5() {
	
}

int main () {
	//q1();
	//printf("\n");
	//q2();
	//printf("\n");
	//q3();
	//printf("\n");
	//q4();
	//printf("\n");
	
	return 0;
}
