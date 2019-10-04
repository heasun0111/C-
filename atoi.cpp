#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int str_len(char str[])     //문제 1번
{
	int num = 0;
	for (int i = 0; i < 15; i++) {
		if (str[i] != '\0') {
			num++;
		}
		if (str[i] == '\0') {
			break;
		}
	}
	return num;
}

int atoi(char *str)     //문제 3번
{
	int number = 0;
	int count = str_len(str) - 1;
	while (*str != '\0') {
		//printf("num%d - 1 : %d\n", count, number);
		number += ((int)*str - '0') * pow(10, count);
		str++;
		count--;
		//printf("num%d - 2 : %d\n", count, number);
	}
	return number;
}

void reverse(char str[])    //문제 2번
{
	char temp;
	for (int j = 0; j <= str_len(str); j++) {
		if (j < str_len(str) / 2) {
			temp = str[j];
			str[j] = str[str_len(str) - 1 - j];
			str[str_len(str) - 1 - j] = temp;
		}
		if (j > str_len(str) / 2) {
			break;
		}
	}
	printf("reverse of str is %s\n", str);
}

void itoa4(int n, char str[])       //문제 4번
{
	int length = 0;
	int degree = 1;

	for (int i = 0; i < 15; i++)
	{
		if (n / degree > 0) {
			length++;
			degree = pow(10, i + 1);
		}
		else {
			break;
		}
	}

	for (int i = 0; i < length; i++)
	{
		str[i] = (n % 10) + '0';
		n /= 10;
	}

	char temp = 0;
	for (int j = 0; j <= length; j++) {
		if (j < (length / 2)) {
			temp = str[j];
			str[j] = str[length - 1 - j];
			str[length - 1 - j] = temp;
		}
		if (j > (length / 2)) {
			break;
		}
	}

}

void itoa5(int n, char str[])       //문제 5번
{
	int length = 0;
	int degree = 1;

	for (int i = 0; i < 15; i++)
	{
		if (n / degree > 0) {
			length++;
			degree = pow(10, i + 1);
		}
		else {
			degree /= 10;
			break;
		}
	}

	for (int i = 0; i < length; i++)
	{
		str[i] = (n / degree) + '0';
		n -= (n / degree) * degree;
		degree /= 10;
	}
}

int main()
{
	int n;
	char str[15];

	printf("Enter string: ");
	scanf("%s", str);

	printf("# of letters of \"%s\" is %i\n", str, str_len(str));


	printf("Enter number: ");
	scanf("%s", str);

	str_len(str);

	printf("Translated number of %s is %i\n", str, atoi(str));

	printf("Enter number: ");
	scanf("%d", &n);
	itoa4(n, str);
	printf("%i is translated to string: \"%s\"\n", n, str);

	printf("Enter number: ");
	scanf("%d", &n);
	itoa5(n, str);
	printf("%i is translated to string: \"%s\"\n", n, str);

	reverse(str);
}
