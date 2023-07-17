#include <stdio.h>
/**
 * main - Entry type
 * Description: A program that prints the size of various types on the computer
 * @void: does nothing
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char is: %d bytes(s)\n", sizeof(char));
	printf("Size of a int is: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int is: %d bytes(s)\n", sizeof(long int));
	printf("Size of a long long int is: %d bytes(s)\n", sizeof(long long int));
	printf("Size of a float is: %d bytes(s)\n", sizeof(float));
	return (0);
}
