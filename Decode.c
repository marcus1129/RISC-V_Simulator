#include "Decode.h"
#include <string.h>

extern unsigned int* programMemory;

void fetchProgram(){
    FILE *fp;
    char *endptr;
    int instructionCount = 0;
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
            programMemory[instructionCount] = strtol(instruction, &endptr, 2);
            instructionCount += 1;
            strcpy(instruction, "");
            n = 0;
        }
    }
    fclose(fp);
    if (instruction){
        free(instruction);
    }
}

void decodeInstruction(){

}