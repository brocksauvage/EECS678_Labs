#include <stdio.h>
#include <stdlib.h>

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main (void)
{
	int a = 6;
	int b = 3;
	int result = 0;
	int input = 0;

	int (*functions[4]) (int x, int y);

	functions[0] = add;
	functions[1] = subtract;
	functions[2] = multiply;
	functions[3] = divide;

	printf("Operand 'a' : 6 | Operand 'b' : 3 \n Specify the operation to perform (0 : add 1 : subtract | 2 : Multiply | 3 : divide): ");
	scanf("%d", &input);	
	result = (*functions[input]) (a, b);

	printf("x = %d", result);	
	printf("\n");																
	return 0;
}

int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract(int a, int b) { printf ("Subtracting 'b' from 'a'\n"); return a - b; }
int multiply(int a, int b) { printf ("Multiplying 'a' and 'b'\n"); return a * b; }
int divide(int a, int b) { printf ("Dividing 'a' by 'b'\n"); return a / b; }
