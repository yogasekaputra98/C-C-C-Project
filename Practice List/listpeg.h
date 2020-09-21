#include <stdio.h>
#include <stdlib.h>
#include "boolean.h"
typedef struct tElmtPeg *address1;
typedef struct tElmtPeg {
    int IdPeg;
    char *nama;
    address1 next;
}Peg1;
typedef struct{
    address1 first;
}List;

void createList(List *L);
address1 alokasip(int IdPegX, char namaX[50]);
void dealokasip (address1 p);
void insertFirst(List *L, address1 p);
void insertLast(List *L, address1 p);
void deleteFirst(List *L);
void deleteLast(List *L);
void cetakList(List L);
boolean CekAdmin(List L,int IdPegX);
