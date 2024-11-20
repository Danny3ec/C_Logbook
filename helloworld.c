#include <stdio.h> // library or header file that contains standart input/output operations
/*
 * main() function every c program must have a main..
 * it has a returnable 'int' this is for exit codes.
 */
int main(void){
	
	// printf is referenced from stdio.h library to output to standart out
	printf("Hello world!\n");
	printf("%d\n", sqr(255));
	printf("Goodbye world!\n"); // /n is an escape character to print a new line
	return 0; // this is our exit status - 0 is good, 1 is bad....
}
