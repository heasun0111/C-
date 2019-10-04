#include <stdio.h>



int main()

{

	int H, M;

	scanf("%d", &H);

	scanf("%d", &M);



	if (M >= 45) {

		printf("%d %d", H, M - 45);

	}

	else if (M < 45 && H>0) {

		printf("%d %d", H - 1, M + 15);

	}

	else if (M < 45 && H == 0) {

		printf("%d %d", 23, M + 15);

	}



}
