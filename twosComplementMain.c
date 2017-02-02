/**
 *
 *  This file produces the length of the hypotnuse when given two numbers.
 *
 *  @author   Chad Manning
 *  Course:   COMP B13
 *  Created:   Jan 31, 2017
 *  Source File: Hypotenuse.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void twosComplement(char binaryString[]);

int main(int argc, char *argv[]){
	const int MAX_VALUES_ENTERED = argc;
	int i = 0;
	char binaryString[100];

	for(i = 1; i < MAX_VALUES_ENTERED; ++i){
		strcpy(binaryString, argv[i]);
		twosComplement(binaryString);
	}
	
	return 0;
	}
