#ifndef DECODE_H_
#define DECODE_H_
#include <stdio.h>
#include <stdlib.h>

extern void fetchProgram(FILE *fp, unsigned char** programMemory, int* instructionCount);
extern void fetchInstruction();
extern void decodeInstruction();
extern void executeInstruction();

#endif /*DECODE_H_*/