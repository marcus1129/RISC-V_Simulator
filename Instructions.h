#ifndef INSTRUCTIONS_H_
#define INSTRUCTIONS_H_

struct instructionFormat{
    int opcode;
    int funct7;
    int imm;
    int imm2;
    int rs2;
    int rs1;
    int funct3;
    int rd;
};

extern void clearInstruction();
extern void executeInstruction();


#endif /*INSTRUCTIONS_H_*/