#include <stdio.h>
#include <string.h>
#include "task2.h"

#define N 256

int main()

{

	char buf[N];
	char str[N];

	printf("Entered string:\n");
	fgets(buf, N, stdin);

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	printf("%s\n", reverseWords(buf, str));

	return 0;
}