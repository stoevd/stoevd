#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>


char getMenuChoice(const char[], char, char);
double apply(char, double, double);

int main()
{
	printf("Dimitar ");
	printf("23 years old");
	/*printf("Enter you name: ");
	char name[20];
	char c;
	do
		c = getchar();
	while (name[c] == '\n');*/


	const char menu[] = { "\nPlease enter:\n"
						"\ta - to perform addition;\n"
						"\tb - to perform subtraction;\n"
						"\tc - to perform multiplication;\n"
						"\td - to perform division;\n"
						"\te - to perform exponentiation;\n"
						"\tChose option a - e: "};

	
	double result;
	char operation = getMenuChoice(menu, 'a', 'e');
	double op1;
	printf("Enter fisrt value: ");
	scanf("%lf", &op1);
	double op2;
	printf("Enter second value: ");
	scanf("%lf", &op2);
	result = apply(operation, op1, op2);
	printf("%lf\n", result);
}

char getMenuChoice(const char menu[], char choice1, char choice2)
{
	char choice;

	do {
		printf("%s", menu);
		fseek(stdin, 0, SEEK_END);
		choice = getchar();
	} while (choice < choice1 || choice > choice2);

	return choice;
}

double apply(char operation, double op1, double op2)
{
	switch (operation)
	{
	case 'a':
		return op1 + op2;
	case 'b':
		return op1 - op2;
	case 'c':
		return op1 * op2;
	case 'd':
		return op1 / op2;
	case 'e':
		return pow(op1, op2);
	//default: return 0;?
	}
}