#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int str_len(char str[])
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

int atoi(char *str)
{
    int number = 0;
    int count = str_len(str)-1;
    while (*str != '\0'){
        //printf("num%d - 1 : %d\n", count, number);
		number += ((int)*str - '0') * pow(10, count);
		str++;
		count--;
		//printf("num%d - 2 : %d\n", count, number);
	}
	return number;
}

void reverse(char str[])
{
	char temp;
    for (int j = 0; j <= str_len(str); j++){
        if(j < str_len(str)/2){
            temp=str[j];
            str[j]=str[str_len(str)-1-j];
            str[str_len(str)-1-j]=temp;
        }
        if(j > str_len(str)/2){
            break;
        }
    }
    printf("reverse of str is %s\n", str);
}

void itoa(int n, char str[] )
{
	for (int i = 0; i < str_len(str) ; i++) {
	    printf("char1 is %c\n",str[i]);
		str[i] = (int)( n / pow(10, str_len(str)-i)) % 10;
		printf("char2 is %c\n",str[i]);
	}
}

int main()
{
	int n;
	char str[15];

	printf("Enter string: ");
	scanf("%s", str);

	printf("# of letters of \"%s\" is %i\n", str, str_len(str));
	
	reverse(str);
	
	printf("Enter number: ");
	scanf("%s", str);
	
	str_len(str);
	
	printf("Translated number of %s is %i\n", str, atoi(str) );
	
	printf("Enter number: ");
	scanf("%d", &n);
	itoa(n, str);

	printf("%i is translated to string: \"%s\"\n", n, str);
}
