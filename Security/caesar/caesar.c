#include <stdio.h>

void encrypt(char *message)
{
	while (*message) {
		if (*message == 'z' || *message == 'Z')
		{
			*message -= 25;
			*message += 2;
		}
		else if (*message == 'y' || *message == 'Y')
		{
			*message -= 24;
			*message += 1;
		}
		else if (*message == 'x' || *message == 'X')
		{
			*message -= 23;
		}
		else
		{
			*message += 3;
		}
		*message++;
	}
}

int main()
{
	char msg[80];
	while (fgets(msg, 80, stdin)) {
		encrypt(msg);
		printf("%s", msg);
		printf("\n");
	}
	printf("\n");
	return 0;
}