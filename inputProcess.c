/* inputProcess.c */
#include "calculator.h"
#include <stdio.h>
#include <stdlib.h>

int input_expression(int** expr) {
	int c; // input data that change frequently.
	int i = 0; // expr's array size.
	// array size is sizable to use byte of memory efficiently.
	// assume that we could enter the string with no space.
	*expr = (int*)malloc(sizeof(int) * 15); // we have to transform this source to new function that can be made with variable size of array.
	while((c = getchar()) != '\n') {
		//(expr + i++) = (int*)malloc(sizeof(int) * 2);
		//*(expr+i-1) = (int)c;
		*(*expr + i++) = (int)c;
	}
	//getchar(); // clear the buffer.
	// fill the last element with NULL value.
	*(*expr + i++) = '\0';
	return i; // return size of array.
}
