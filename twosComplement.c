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

void twosComplement(char binaryString[]){
	int currentElement = 0;
	
	while(binaryString[currentElement] != '\0'){						// Finds the last element
		++currentElement;
	}
	--currentElement;
	
	while(currentElement >= 0){											// Produces the one's complement
		if(binaryString[currentElement] == '1'){
			binaryString[currentElement] = '0';
		}
		else {
			binaryString[currentElement] = '1';
		}
	
		--currentElement;
	}
	
	//printf("%s\n", binaryString);										//prints the one's complement (use for debugging)
	
	currentElement = 0;
	
	while(binaryString[currentElement] != '\0'){						// Finds the last element
		++currentElement;
	}
	--currentElement;
	
	while(currentElement >= 0){
		if(binaryString[currentElement] == '1'){
			binaryString[currentElement] = '0';
			}
		else {
			binaryString[currentElement] = '1';
			currentElement = 0;
		}
		--currentElement;
	}
	
	printf("%s\n", binaryString);
	
	return;
	}
