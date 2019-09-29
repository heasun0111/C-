#include <stdio.h>

int main()

{

	int numA, numB;

	scanf("%d", &numA);

	scanf("%d", &numB);



	if (numA > numB) {

		printf(">");

	}

	else if (numA < numB) {

		printf("<");

	}

	else if (numA == numB) {

		printf("==");

	}



}