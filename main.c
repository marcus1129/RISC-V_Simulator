#include <stdio.h>
#include <stdlib.h>
#include "Decode.h"
#include "Instructions.h"
#include "Registers.h"

struct instructionFormat instruction;
struct registerBank registers;
unsigned int *programMemory;
unsigned int *memory;

void printProgramMemory(){
    printf("Program Memory:\n");
    for(int x = 0; x < 128; x++){
        printf("%i: 0x%08X\n", x, programMemory[x]);
    }
}

void printMemory(){
    printf("Memory:\n");
    for(int x = 0; x < 1024; x++){
        printf("%i: 0x%08X\n", x, memory[x]);
    }
}


int main(void){
    programMemory = calloc(128, sizeof(int));
    memory = calloc(1024, sizeof(int));

    initRegisters();
    clearInstruction();
    fetchProgram();

    //instruction.opcode = 0x03;
    //instruction.funct3 = 0x00;
    //executeInstruction();

    //printRegisters();
    //printProgramMemory();
    //printMemory();

    free(programMemory);
    free(memory);
    return 0;
}