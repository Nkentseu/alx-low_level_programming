#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randome_generator(int leng)
{
	int i = 0;
	int password[leng + 1];
	char lower_c[] = "abcdefghijklmnopqrstuvwxyz";
	char upper_c[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lettre[] = "0123456789";
	char special[] = "\\\"@ù$*^!:;,§/.?%µ£¨=)àç_è-(\'&²~#{[|`@]}";
	char step = rand() % 4;

	srand(time(0));
	password[leng] = '\0';
	for (i = 0; i < leng; i++)
	{
		if (step == 0)
			password[i] = lower_c[rand() % 26];
		else if (step == 1)
			password[i] = upper_c[rand() % 26];
		else if (step == 2)
			password[i] = lettre[rand() % 10];
		else
			password[i] = special[rand() % 39];
		step = rand() % 4;
		putchar('0' + password[i]);
	}
}

/**
 * main - crack me
 * Return: 0
 */
int main(void)
{
	/*
	int password[100];
	int i, sum, n;

	sum = 0;

	srand(time(NULL));

	for (i = 0; i < 100; i++)
	{
		password[i] = rand() % 78;
		sum += (password[i] + '0');
		putchar(password[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}
	*/
	randome_generator(10);
	return (0);
}
