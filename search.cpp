#include <stdio.h>
#include <string.h>


int main()
{
	char word[10];
	char sentence[20];

	printf("Input characters :");
	fgets(word, sizeof(word), stdin);

	puts("Input a sentence :");
	fgets(sentence, sizeof(sentence), stdin);
	puts(sentence);

}