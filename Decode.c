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
        instruction[n++] = (char) c;
        if(n == 32){
            printf("har");
            strcpy(programMemory[*instructionCount], instruction);
            strcpy(instruction, "");
            //memset(instruction, '\0', 32);
            n = 0;
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