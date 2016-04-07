#include <stdio.h>
#include <string.h>


//#define LOWER 0
//#define UPPER 300
//#define STEP 20
// 1-15
//void fahrtocelsius(void);
//void celsiustofahr(void);


//#define MAXLINE 1000
// 1-19
//int get_line(char s[], int lim);
//void reverse(char s[]);


int main()
{


	//printf("Hello World\n"); // 1-1

	//float fahr; // 1-4

	//printf("FAHRENHEIT\tCELSIUS\n");

	//for (fahr = 0; fahr <= 300; fahr = fahr + 20)
	//{
	//	printf("%.2f\t\t%.2f\n", fahr, ((fahr - 32) * 5 / 9));
	//}


	// 1-4

	/*int celsius; // 1-4

	for (celsius = 0; celsius <= 300; celsius = celsius + 20)
	{
		printf("%d\t%d\n", celsius, (celsius * 9 / 5 + 32));
	}*/


	// 1-6

	/*int c; // 1-6
	while ((c = getchar()) != eof) {
		printf("%d ", c != eof);
		putchar(c);
	}
	printf("\n%d\n", c != eof);
*/


//int c; // 1-12

//c = getchar();
//while (c != EOF)
//{
//	if (c == ' ')
//	{
//		putchar('\n');
//	}
//	else
//	{
//		putchar(c);
//	}
//	c = getchar();
//}


//int c; // 1-13

//while ((c = getchar()) != EOF)
//{
//	if (c == ' ' || c == '\n' || c == '\t')
//	{
//		putchar('\n');
//	}
//	else
//	{
//		putchar('*');
//	}
//}

	// 1-14
	//char string[100]; // 1-14
	//int c = 0;
	//int count[100] = { 0 };

	//while ((string[c] = getchar()) != EOF)
	//{
	//	if (string[c] >= ' ' && string[c] <= '~')
	//	{
	//		count[string[c] - '!']++;
	//	}
	//	c++;
	//}

	//for (c = 0; c < 93; c++)
	//{
	//	if (count[c] != 0) {			
	//		for (int j = 1; j <= count[c]; j++)
	//		{
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//}


	//int c; // 1-15

	//printf("Chose Conversion:\n");
	//printf("Enter '1' : Fahrenheit to Celsius\n");
	//printf("Enter '2' : Celsius to Fahrenheit\n");
	//printf("- Enter your Choice:");

	//c = getchar();


	//if (c == '1')
	//	fahrtocelsius();
	//else if (c == '2')
	//	celsiustofahr();
	//else
	//	printf("Invalid Choice\n");

// 1-19

//	int len; // 1-19
//	char line[MAXLINE];
//
//	while ((len = get_line(line, MAXLINE)) > 0)
//	{
//		reverse(line);
//		printf("%s", line);
//	}
//
//	return 0;
//}

// 1-15

//void fahrtocelsius() //1-15
//{
//	float fahr;
//
//	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
//		printf("%3.0f%6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32.0));
//}
//
//void celsiustofahr()
//{
//	float celsius;
//
//	for (celsius = LOWER; celsius <= UPPER; celsius = celsius + STEP)
//		printf("%3.0f%6.1f\n", celsius, (9.0*celsius) / 5.0 + 32);
//}


// 1-19

//int get_line(char s[], int lim) // 1-19
//{
//	int i;
//	int c;
//
//	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
//	{
//		s[i] = c;
//	}
//	if (c == '\n')
//	{
//		s[i] = c;
//		i++;
//	}
//	s[i] = '\0';
//	return i;
//}
//
//void reverse(char s[]) // 1-19
//{
//	int i = 0;
//	int c;
//	int j;
//	int temp;
//
//	for (i = 0; s[i] != '\0'; i++)
//	{}
//	i--;
//
//	for (j = 0; j < i; j++)
//	{
//		temp = s[j];
//		s[j] = s[i - 1];
//		s[i - 1] = temp;
//		i--;
//	}
//}
