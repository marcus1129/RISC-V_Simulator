#include "Instructions.h"
#include <stdio.h>
#include <stdlib.h>

extern struct instructionFormat instruction;

void clearInstruction(){
    instruction.opcode = 0x00000000;
    instruction.funct7 = 0x00000000;
    instruction.imm = 0x00000000;
    instruction.imm2 = 0x00000000;
    instruction.rs2 = 0x00000000;
    instruction.rs1 = 0x00000000;
    instruction.funct3 = 0x00000000;
    instruction.rd = 0x00000000;
}

void placeholder(){}
void lb(){
    printf("0x%08X\n", instruction.opcode);
}

void lh(){

}

void lw(){

}

void ld(){

}

void lbu(){

}

void lhu(){

}

void lwu(){

}

void addi(){

}

void slli(){

}

void slti(){

}

void sltiu(){

}

void xori(){

}

void srli(){

}

void srai(){

}

void sri(){

}

void ori(){

}

void andi(){

}

void auipc(){

}

void addiw(){

}

void slliw(){

}

void srliw(){

}

void sraiw(){

}

void sriw(){

}

void sb(){

}

void sh(){

}

void sw(){

}

void sd(){

}

void addSub(){

}

void sll(){

}

void slt(){

}

void sltu(){

}

void xor(){

}

void srl(){

}

void sra(){

}

void sr(){

}

void or(){

}

void and(){

}

void lui(){

}

void addSubw(){

}

void sllw(){

}

void srlw(){

}

void sraw(){

}

void srw(){

}

void beq(){

}

void bne(){

}

void blt(){

}

void bge(){

}

void bltu(){

}

void bgeu(){

}

void jalr(){

}

void jal(){

}

void ecall(){
    
}  

void (*case1[7])() = {lb, lh, lw, ld, lbu, lhu, lwu};
void (*case2[8])() = {addi, slli, slti, sltiu, xori, sri, ori, andi};
void (*case3[6])() = {addiw, slliw, placeholder, placeholder, placeholder, sriw};
void (*case4[4])() = {sb, sh, sw, sd};
void (*case5[8])() = {addSub, sll, slt, sltu, xor, sr, or, and};
void (*case6[6])() = {addSubw, sllw, placeholder, placeholder, placeholder, srw};
void (*case7[8])() = {beq, bne, placeholder, placeholder, blt, bge, bltu, bgeu};
 
void executeInstruction(){
    switch(instruction.opcode) {
        case 0x3:{
            (*case1[instruction.funct3])();
            break;
        }
        case 0x13:{

            break;
        }
        case 0x17:{
            auipc();
            break;
        }
        case 0x1B:{

            break;
        }
        case 0x23:{

            break;
        }
        case 0x33:{

            break;
        }
        case 0x37:{
            lui();
            break;
        }
        case 0x3B:{

            break;
        }
        case 0x63:{

            break;
        }
        case 0x67:{
            jalr();
            break;
        }
        case 0x6F:{
            jal();
            break;
        }
        case 0x73:{
            ecall();
            break;
        }
        default:{}
    }
}