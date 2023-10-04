#include <stdio.h>

void q1() {
	int n1, n2, n3, tempMaior, tempMedio, tempMenor;
	
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
	
	printf("\nMaior numero: %d\nMenor numero: %d\nMedio: %d", tempMaior, tempMenor, tempMedio);

}








int main () {
	q1();
	printf("\n");
	
	return 0;
}
