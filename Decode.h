#ifndef DECODE_H_
#define DECODE_H_
#include <stdio.h>
#include <stdlib.h>

extern void fetchProgram(FILE *fp, unsigned int* programMemory, int* instructionCount);
extern void decodeInstruction();

#endif /*DECODE_H_*/