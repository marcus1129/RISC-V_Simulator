#ifndef REGISTERS_H_
#define REGISTERS_H_

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

extern void initRegisters();
extern void printRegisters();


#endif /*REGISTERS_H_*/