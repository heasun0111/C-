#include <stdio.h>
#include <stdlib.h>



int main()

{

	int N, X;

	int num = 0;

	int arr[N];

	scanf("%d %d", &N, &X);




	for (int i = 0; i < N; i++) {

		scanf("%d", &num);

		arr[i] = num;

	}



	for (int j = 0; j < N; j++) {

		if (arr[j] < X) {

			printf("%d ", arr[j]);

		}

	}


}
