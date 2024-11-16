#include <stdio.h>

int main() {
	printf("The 'int' data type is\t\t %d bytes\n", sizeof(int));
	printf("The 'unsigned int' data type is\t\t %d bytes\n", sizeof(unsigned int));
	printf("The 'short int' data type is\t\t %d bytes\n", sizeof(short int));
	printf("The 'long int' data type is\t\t %d bytes\n", sizeof(long int));
	printf("The 'long long' data type is\t\t %d bytes\n", sizeof(long long));
	printf("The 'float' data type is\t\t %d bytes\n", sizeof(float));
	printf("The 'char' data type is\t\t %d bytes\n", sizeof(char));
}
