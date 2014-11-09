#include <stdlib.h>
const max = 20;

/*Recursive function to quickly calculate the factorial of a number [n!]*/
unsigned long long int factorial(int num)
{
    if(num < 1){
	    printf("Please enter a positive integer greater than 0.\n");
		return 0;
	}
	if(num == 1){
		return 1;
	}
	else{
		return num * factorial(num - 1);
	}
}

void main(int argc, char *argv[])
{
	long int testval;
	unsigned long long int result;
	for(int i = 1; i < argc; ++i){
		testval = strtol(argv[i], NULL, 10);
		if(testval > max){
		    printf("The result of %d! is larger than this data type can handle: n <= %d.\n", testval, max);
		}
		else if(result=factorial(testval)){
			printf("%d factorial = %llu\n", testval, result);
			
		}
	}
}