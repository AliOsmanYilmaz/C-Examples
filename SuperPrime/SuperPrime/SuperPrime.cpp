#include <iostream>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/* Super Prime */
	/*
	int number;
	
	printf("Hello. Welcome to SuperPrime!\n");

	do {
		printf("\nTo exit the program, enter 0.\n");
		printf("Please enter a number grater than 2: ");
		scanf_s("%d", &number);

		if(number == 0)
		{
			printf("Exiting the program. Goodbye!\n");
			break;
		}

		else
		{
			printf("The super prime numbers: ");
			for (int i = 0; i <= number; i++)
			{
				int divisorCount = 0;

				for (int j = 1; j <= i; j++)
				{
					if (i % j == 0)
					{
						divisorCount++;
					}
				}

				if (divisorCount == 2)
				{
					printf("%d ", i);
				}
			}
			printf("\n");
			printf("----------------------------------------------------------------------");
		}
	} while (true);
	*/
			
	
	
	/* Rock-Paper-Scissor */
	/*
	srand((unsigned int)time(NULL));
	char choice, pc = 'r';
	printf("Welcome to Rock-Paper-Scissor!\n");

	do {
		if (rand() % 3 == 0)
			pc = 'r';
		else if (rand() % 3 == 1)
			pc = 'p';
		else
			pc = 's';

		printf("----------------------------------------------------------------------\n");
		printf("Enter E for exit.\n");
		printf("Enter R for Rock, P for Paper, and S for Scissor: ");
		scanf_s(" %c", &choice);

		if (choice == pc)
		{
			printf("Tie! Both chose %c\n", choice);
		}

		else
		{
			if (choice == 'r' && pc == 's')
				printf("You Win! Rock crushes Scissor.\n");
			else if (choice == 'r' && pc == 'p')
				printf("You Lose! Paper covers Rock.\n");
			else if (choice == 'p' && pc == 'r')
				printf("You Win! Paper covers Rock.\n");
			else if (choice == 'p' && pc == 's')
				printf("You Lose! Scissor cuts Paper.\n");
			else if (choice == 's' && pc == 'p')
				printf("You Win! Scissor cuts Paper.\n");
			else if (choice == 's' && pc == 'r')
				printf("You Lose! Rock crushes Scissor.\n");
			else if (choice == 'e')
				printf("Exiting the game. Goodbye!\n");
			else
				printf("Invalid input! Please enter R, P, or S only.\n");
		}
	} while (choice != 'e');
	*/



	/* Quadratic Equation Roots */
	/*
	int a, b, c, d;
	double root1, root2;

	printf("Welcome to Quadratic Equation Roots Calculator!\n");

	printf("Enter the coefficient of x^2: ");
	scanf_s("%d",&a);

	printf("Enter the coefficient of x: ");
	scanf_s("%d", &b);

	printf("Enter the coefficient of x^0: ");
	scanf_s("%d", &c);

	d = (b * b) - (4 * a * c);
	double sqrt_val = sqrt(abs(d));

	if (d > 0)
	{
		printf("Roots are real and different\n");
		printf("Root 1 : %f\nRoot 2 : %f", (double)(-b + sqrt_val) / (2 * a),
			(double)(-b - sqrt_val) / (2 * a));
	}

	else if (d == 0)
	{
		printf("Roots are real and same\n");
		printf("Roots : %f", -(double)b / (2 * a));
	}

	else
	{
		printf("Roots are complex\n");
		printf("Root 1 : %f + i%f\nRoot 2 : %f - i%f", -(double)b / (2 * a),
			sqrt_val / (2 * a), -(double)b / (2 * a),
			sqrt_val / (2 * a));
	}
	*/
	return 0;
}

