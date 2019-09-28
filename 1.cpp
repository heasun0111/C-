#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void countS();
void countB();
void inputN();

int main()
{
	int guess[3];
	int inputNum;
	int nums[3];
	int i, j;
	int count_S = 0;
	int count_B = 0;
	int end;

	srand(time(NULL));

	for (i = 0; i < 3; i++)
	{
		guess[i] = rand() % 9 + 1;
	}

	if (guess[0] == guess[1] || guess[0] == guess[2] || guess[1] == guess[2])
	{
		return 0;
	}

	printf("컴퓨터가 생각한 숫자들은 %i, %i, %i입니다.\n", guess[0], guess[1], guess[2]);

	for (j = 1; j <= 9; j++) {
		int confirm = 1;

		void inputN();
		{
			printf("카드이름을 입력하세요:");
			scanf("%d", &inputNum);
		}

		if (inputNum < 100) {
			printf("Too few numbers\n");
		}
		if (inputNum > 999) {
			printf("Too many numbers\n");
		}

		if (inputNum > 100 && inputNum < 999) {

			for (i = 0; i < 3; i++) {
				nums[i] = (int)(inputNum / pow(10, 2 - i)) % 10;
			}

			if (nums[0] == nums[1] || nums[1] == nums[2] || nums[0] == nums[2]) {
				printf("No same number allowe\n");
				confirm = 0;
			}

			if (nums[0] == 0 || nums[1] == 0 || nums[2] == 0) {
				printf("Number 0 is illegal\n");
				confirm = 0;
			}
			

			if (confirm != 0) {
				count_S = 0;
				count_B = 0;

				void countS();
				{
					for (int i = 0; i < 3; i++) {
						if (guess[i] - nums[i] == 0) {
							count_S++;
						}
						if (count_S == 3) {
							printf("Victory!");
							exit(0);
						}
					}
				}

				void countB();
				{
					if (guess[0] == nums[1] || guess[0] == nums[2]) {
						count_B++;
					}
					if (guess[1] == nums[0] || guess[1] == nums[2]) {
						count_B++;
					}
					if (guess[2] == nums[0] || guess[2] == nums[1]) {
						count_B++;
					}
				}

				printf("%dS ", count_S);
				printf("%dB\n", count_B);

				printf("당신이 입력한 숫자들은 %i, %i, %i입니다.\n", nums[0], nums[1], nums[2]);
			}
		}


	}
	scanf("%i", &end);


}


/* scanf 이후로 과정 */