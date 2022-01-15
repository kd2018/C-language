/* A simple scanset example */
#include <stdio.h>

int main(void)
{
	char str[128];

	printf("Enter a string TO ONLY CHARACTER: ");
	scanf("%[A-Z,1-100,]s", str);

	printf("You entered: %s\n", str);

	return 0;
}

