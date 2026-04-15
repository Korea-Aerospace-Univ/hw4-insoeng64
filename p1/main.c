#include <stdio.h>

int main()
{
	int correct = 0;
	int tried = 0;
	int i = 1;

	scanf("%d", &correct);
	do {
		scanf("%d", &i);
		if (i < correct) printf("%d<?\n", i);
		else if (i > correct) printf("%d>?\n", i);
		else if (i == correct) printf("%d==?\n", i);
        tried++;
	} while (i != correct);
	printf("%d", tried);
	return 0;
}
