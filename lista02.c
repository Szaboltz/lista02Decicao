#include <stdio.h>
#include <time.h>
#include <stdlib.h>

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
	float p;

	printf("Digite o indice de poluicao atual: ");
    scanf("%f", &p);

    if (p >= 0.3 && p < 0.4) {
        printf("A empresa do primeiro grupo devera ser notificada");
    } else if (p >= 0.4 && p < 0.5) {
        printf("A empresa do primeiro e segundo grupo deverao ser notificadas");
    } else if (p >= 0.5) {
        printf("Todas as empresas serao notificadas");
    } else {
        printf("Siga o trabalho normal");
    }
}

void q6() {
	int ano;

	printf("Digite o ano para saber se e bissexto: ");
	scanf("%d", &ano);

	if (ano >= 1581) {
		if (ano % 4 == 0) {
			if (ano % 100 == 0) {
				if (ano % 400 == 0) {
					printf("%d e bissexto", ano);
				} else {
					printf("%d nao e bissexto", ano);
				}
			} else {
				printf("%d e bissexto", ano);
			}
		} else {
			printf("%d nao e bissexto", ano);
		}
	} else {
		printf("Ano invalido");
	}
} 

int num_pseudo(){
    srand(time(NULL));
    return (rand() % 7); //retorna um numero pseudo-aleatório de 0 a 6
}

void q7() {
	int n = num_pseudo();

	switch (n)
	{
	case 0:
		printf("segunda-feira");
		break;
	case 1:
		printf("terca-feira");
		break;
	case 2:
		printf("quarta-feira");
		break;
	case 3:
		printf("quinta-feira");
		break;
	case 4:
		printf("sexta-feira");
		break;
	case 5:
		printf("sabado");
		break;
	case 6:
		printf("domingo");
		break;
	}

}

int main () {
	//q1();
	//printf("\n");
	//q2();
	//printf("\n");
	//q3();
	//printf("\n");
	//q4();
	//printf("\n");]
	//q5();
	//printf("\n");
	//q6();
	//printf("\n");
	//q7();
	//printf("\n");
	
	return 0;
}
