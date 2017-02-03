/**
 *
 *  This file uses the arguments from the command prompt and sends them to the two's complement function.
 *
 *  @author   Chad Manning
 *  Course:   COMP B13
 *  Created:   Feb 2, 2017
 *  Source File: twosComplementMain.c
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void twosComplement(char binaryString[]);

int main(int argc, char *argv[]){
	int i = 0;
	
	for(i = 1; i < argc; ++i){
		twosComplement(argv[i]);
	}
	
	return 0;
	}
