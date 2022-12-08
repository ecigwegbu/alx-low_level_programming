#include "main.h"

/**
 * determine largest palindrome that is a product of two three-digit numbers
 * Return: largest palindrome
 */

int main(void)
{
	int i=0, j=0, k=0, n1=0, a=0, b=0, c=0, n2=0, prod=0, count=0, max=0, n1_max=0, n2_max=0;
	char s1[4] = "\0\0\0\0", s2[4] = "\0\0\0\0";
	FILE *f;

	(void) prod;

	/* pick first multiplier */
	for (i = 0; i <= 9; i++)
	{
	/*	printf("i: %d, j: %d, k: %d => n1 = %d;\ta: %d, b: %d, c: %d => n2 = %d, \t prod: %d\n", i, j, k, n1, a, b, c, n2, prod); */
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 9; k++)
			{
				s1[0] = i + 48;
				s1[1] = j + 48;
				s1[2] = k + 48;
				n1 = atoi(s1);

				for (a = 0; a <= 9; a++)
				{
					for (b = 0; b <= 9; b++)
					{
						for (c = 0; c <= 9; c++)
						{

							s2[0] = a + 48;
							s2[1] = b + 48;
							s2[2] = c + 48;
							n2 = atoi(s2);
							prod = n1 * n2;
							count++;
							if (is_palindrome_num(prod))
							{
								if (prod > max)
								{
									n1_max = n1;
									n2_max = n2;
									max = prod;
								}
								count++;
							}
							/*printf("i: %d, j: %d, k: %d => n1 = %d;\ta: %d, b: %d, c: %d => n2 = %d, \t prod: %d\n", i, j, k, n1, a, b, c, n2, prod); */
						}
					}
				}


			}
		}
	}

	printf("There are %d palindromes in all.\n", count);
	printf("I counted them!\n");
	printf("The largest of them all is: %d which is %d * %d!\n", max, n1_max, n2_max);

	f = fopen("102-result", "w");
	if (f == NULL)
	{
		printf("Cannot open file for writing.\n");
		exit(EXIT_FAILURE);
	}
	fprintf(f, "%d", max);
	fflush(f);
	fclose(f);

	printf("***END***\n");

	return (0);
}
