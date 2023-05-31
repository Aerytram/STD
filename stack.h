#ifndef STACK_H
#define STACK_H

typedef char infotype;
typedef struct TNode *address;
typedef struct TNode {
    infotype info;
    address next;
} Node;

typedef struct {
    address top;
} Stack;

void createStack(Stack *S)_1304211009;
void createKurung(infotype k, address *P)_1304211009;
void push(Stack *S, address P)_1304211009;
void pop(Stack *S, address *P)_1304211009;
bool kurungSetangkup(const char *str)_1304211009;

#endif
