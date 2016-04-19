#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//2-2

//int main()
//{
//
//	//2-2
//
//		if ((c = getchar()) != '\n') 
//		{
//			if (c != EOF)
//			{
//				for (i = 0; i < lim - 1; i++)
//				{
//					s[i] = c;
//				}
//			}
//		}
//	return 0;
//
//}

//2-3

//int hex(char *string);
//
//int main()
//{
//	char arr[10];
//	char temp;
//	int j = 0;
//	while ((temp = getchar()) != EOF)
//	{
//		arr[j] = temp;
//		j++;
//	}
//	printf("HEX NUMBERS IS:");
//	printf("%d\n", hex(arr));
//	
//
//	return 0;
//}
//
//int hex(char *string)
//{
//	int i = 0;
//	bool isHex = true;
//	int isNumber;
//	int number = 0;
//
//	if (string[i] == '0')
//	{
//		i++;
//	}
//
//	if (string[i] == 'x' || string[i] == 'X')
//	{
//		i++;
//	}
//	while (isHex)
//	{
//		if (string[i] >= '0' && string[i] <= '9')
//		{
//			isNumber = string[i] - '0';
//		}
//		else if (string[i] >= 'a' && string[i] <= 'f')
//		{
//			isNumber = string[i] - 'a' + 10;
//		}
//		else if (string[i] >= 'A' && string[i] <= 'F')
//		{
//			isNumber = string[i] - 'A' + 10;
//		}
//		else
//		{
//			isHex = false;
//		}
//		i++;
//		if (isHex)
//		{
//			number = 16 * number + isNumber;
//		}
//	}
//
//	return number;
//}


//2-4

//void squeeze(char[], char[]);
//
//int main()
//{
//	char str1[100];
//	fgets(str1, 100, stdin);
//	char str2[100];
//	fgets(str2, 100, stdin);
//	squeeze(str1, str2);
//	printf("%s\n", str1);
//}
//
//void squeeze(char str1[], char str2[])
//{
//	int i;
//	int j;
//	int k;
//	k = 0;
//	for (i = 0; str1[i] != '\0'; i++)
//	{
//		for (j = 0; (str1[i] != str2[j]) && str2[j] != '\0'; j++)
//		{
//		}
//		if (str2[j] == '\0')
//		{
//			str1[k++] = str1[i];
//		}
//	}
//	str1[k] = '\0';
//}

//2-9

//int bits(unsigned i);
//
//int main(void)
//{
//	printf("%d\n", bits((unsigned)5));
//}
//
//int bits(unsigned i)
//{
//	int j;
//
//	for (j = 0; i != 0; i &= i - 1)
//		++j;
//
//	return j;
//}

// 1)

//void setBit(int x, unsigned char position);
//
//int main()
//{
//	int x = 0xC0;
//	setBit(x, 3);
//	printf("%d",x);
//}
//
//void setBit(int x, unsigned char position)
//{
//	position |= 1 << x;
//}

//int SetBit(int, char);
//int main() 
//{
//	int x = 0xc0;
//	char position = 2;
//	int number = (SetBit(x, position));
//	printf("%x\n", number);
//	// how to print in binary?
//}
//
//int SetBit(int x, char position) {
//	return x |= (1 << position);
//}

// 2)

//int clearBit(int x, char position);
//
//int main()
//{
//	int x = 7;
//	char position = 0;
//	int number = (clearBit(x, position));
//	printf("%d\n", number);
//}
//
//
//int clearBit(int x, char position)
//{
//	return x &= ~(1 << position);
//}

// 3)

//int isPowerOfTwo(int x);
//
//int main()
//{
//	int x = 128;
//	isPowerOfTwo(x);
//	printf("%d\n",isPowerOfTwo(x));
//}
//
//int isPowerOfTwo(int x)
//{
//	/*while (((x % 2) == 0) && x > 1)
//		x /= 2;
//	return (x == 1);*/
//	return ((x != 0) && !(x & (x - 1)));
//}

// 4)

//int checkonebitset(int x);
//
//int main()
//{
//	int x = 4;
//	checkonebitset(x);
//	printf("%d\n", checkonebitset(x));
//}
//
//int checkonebitset(int x)
//{
//	return ((x != 0) && !(x & (x - 1)));
//}

// 5)

//int checkParity(int x);
//
//int main()
//{
//	int x = 11;
//	if (checkParity(x) % 2 == 0)
//	{
//		printf("%d\n", 0);
//	}
//	else
//	{
//		printf("%d\n", 1);
//	}
//	printf("%d\n",checkParity(x));
//}
//
//int checkParity(int x)
//{
//	int count;
//	for (count = 0; x; count++)
//		x &= x - 1;
//	return count;
//}

// 6)

//int main()
//{
//	int a, b;
//
//	scanf("%d%d", &a, &b);
//
//	printf("a = %d\nb = %d\n", a, b);
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//
//	printf("a = %d\nb = %d\n", a, b);
//}