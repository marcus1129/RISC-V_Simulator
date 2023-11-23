#include "Decode.h"
#include <string.h>

void fetchProgram(FILE *fp, unsigned char** programMemory, int* instructionCount){
    size_t n = 0;
    char c;
    char* instruction = calloc(32, sizeof(char));
    fp = fopen("./binaryCode.bin","rb");  // r for read, b for binary
    if (fp == NULL){
        exit(EXIT_FAILURE);
    }
    while((c = fgetc(fp)) != EOF) {
        instruction[n] = (char) c;
        n += 1;
        if(n == 32){
            strcpy(programMemory[*instructionCount], instruction);
            strcpy(instruction, "");
            n = 0;
            *instructionCount += 1;
        }
    }
    fclose(fp);
    if (instruction){
        free(instruction);
    }
}

void fetchInstruction(){

}

void decodeInstruction(){

}

void executeInstruction(){
    
}