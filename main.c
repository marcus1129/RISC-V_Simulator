#include <stdio.h>
#include <stdlib.h>
#include "Decode.h"
#include "Instructions.h"

struct registerBank{
    int x0;
    int x1;
    int x2;
    int x3;
    int x4;
    int x5;
    int x6;
    int x7;
    int x8;
    int x9;
    int x10;
    int x11;
    int x12;
    int x13;
    int x14;
    int x15;
    int x16;
    int x17;
    int x18;
    int x19;
    int x20;
    int x21;
    int x22;
    int x23;
    int x24;
    int x25;
    int x26;
    int x27;
    int x28;
    int x29;
    int x30;
    int x31;
};

void initRegisters(struct registerBank *registers){
    registers->x0 = 0x00000000;
    registers->x1 = 0x00000000;
    registers->x2 = 0x00000000;
    registers->x3 = 0x00000000;
    registers->x4 = 0x00000000;
    registers->x5 = 0x00000000;
    registers->x6 = 0x00000000;
    registers->x7 = 0x00000000;
    registers->x8 = 0x00000000;
    registers->x9 = 0x00000000;
    registers->x10 = 0x00001000;
    registers->x11 = 0x00000000;
    registers->x12 = 0x00000000;
    registers->x13 = 0x00000000;
    registers->x14 = 0x00000000;
    registers->x15 = 0x00000000;
    registers->x16 = 0x00000000;
    registers->x17 = 0x00000000;
    registers->x18 = 0x00000000;
    registers->x19 = 0x00000000;
    registers->x20 = 0x00000000;
    registers->x21 = 0x00000000;
    registers->x22 = 0x00000000;
    registers->x23 = 0x00000000;
    registers->x24 = 0x00000000;
    registers->x25 = 0x00000000;
    registers->x26 = 0x00000000;
    registers->x27 = 0x00000000;
    registers->x28 = 0x00000000;
    registers->x29 = 0x00000000;
    registers->x30 = 0x00000000;
    registers->x31 = 0x00000000;
}

void printRegisters(struct registerBank *registers){
    printf("Registers:\n");
    printf("x0: 0x%X\n", registers->x0);
    printf("x1: 0x%X\n", registers->x1);
    printf("x2: 0x%X\n", registers->x2);
    printf("x3: 0x%X\n", registers->x3);
    printf("x4: 0x%X\n", registers->x4);
    printf("x5: 0x%X\n", registers->x5);
    printf("x6: 0x%X\n", registers->x6);
    printf("x7: 0x%X\n", registers->x7);
    printf("x8: 0x%X\n", registers->x8);
    printf("x9: 0x%X\n", registers->x9);
    printf("x10: 0x%X\n", registers->x10);
    printf("x11: 0x%X\n", registers->x11);
    printf("x12: 0x%X\n", registers->x12);
    printf("x13: 0x%X\n", registers->x13);
    printf("x14: 0x%X\n", registers->x14);
    printf("x15: 0x%X\n", registers->x15);
    printf("x16: 0x%X\n", registers->x16);
    printf("x17: 0x%X\n", registers->x17);
    printf("x18: 0x%X\n", registers->x18);
    printf("x19: 0x%X\n", registers->x19);
    printf("x20: 0x%X\n", registers->x20);
    printf("x21: 0x%X\n", registers->x21);
    printf("x22: 0x%X\n", registers->x22);
    printf("x23: 0x%X\n", registers->x23);
    printf("x24: 0x%X\n", registers->x24);
    printf("x25: 0x%X\n", registers->x25);
    printf("x26: 0x%X\n", registers->x26);
    printf("x27: 0x%X\n", registers->x27);
    printf("x28: 0x%X\n", registers->x28);
    printf("x29: 0x%X\n", registers->x29);
    printf("x30: 0x%X\n", registers->x30);
    printf("x31: 0x%X\n", registers->x31);
}

void printProgramMemory(unsigned char** programMemory){
    printf("Program Memory:\n");
    for(int x = 0; x < 128; x++){
        printf("%i: ", x);
        for(int z = 0; z < 32; z++){
            printf("%c", programMemory[x][z]);
        }
        printf("\n");
    }
}

int main(void){
    unsigned char **programMemory;
    unsigned char **memory;

    // Allocates 4KB of memory
    memory = calloc(128, sizeof *programMemory);
    for (int i = 0; i < 4096; i++){
        programMemory[i] = calloc(8, sizeof *(programMemory[i]));
    }

    // Allocates space for 128 32-bit instructions
    programMemory = calloc(128, sizeof *programMemory);
    for (int i = 0; i < 128; i++){
        programMemory[i] = calloc(32, sizeof *(programMemory[i]));
    }

    int instructionCount = 0;
    struct registerBank registers;
    FILE *fp;
    initRegisters(&registers);
    fetchProgram(fp, programMemory, &instructionCount);
    printRegisters(&registers);
    printProgramMemory(programMemory);
    free(programMemory);
    return 0;
}