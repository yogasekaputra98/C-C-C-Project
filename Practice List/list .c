#include "Header.h"
void createList(List *L){
    (*L).first = NULL;
}

address1 alokasip(int IdPegX, char namaX[50]){
    address1 p = (address1)malloc(sizeof(Peg1));
    if(p!= NULL){
        (p)->nama = namaX;
        (p)->IdPeg = IdPegX;
        (p)->next = NULL;
    }
        return p;
}
void dealokasip (address1 p){
    free(p);
}

void insertFirst(List *L, address1 p){
    (p)->next = (*L).first;
    (*L).first = p;
}

void insertLast(List *L, address1 p){
    address1 last = (*L).first;
    if(last != NULL){
        while ((last -> next != NULL)){
            last = (last)-> next;
        }
        (last)->next = p;
    }else{
        insertFirst(L,p);
    }
}
void deleteFirst(List *L){
    address1 p;
    p = (*L).first;
    if(p!= NULL){
        if(p->next != NULL){
                (*L).first = ((*L).first)->next;
            (p)->next = NULL;
    }else{
        ((*L).first)->next = NULL;
    }
}
dealokasip(p);
}

void deleteLast(List *L){
    address1 last;
    last = (*L).first;
    if(last!= NULL){
        if(last->next == NULL){
            deleteFirst(L);
        }else{
            while(((last)->next)->next!=NULL){
                last = (last)->next;
            }
            address1 p = (last)->next;
            (last)->next = NULL;
            dealokasip(p);
        }
    }
}

void cetakList(List L){
    address1 p = (L).first;
    printf("NAMA\tNIP\n");
    while(p != NULL){
        printf("%s\t%d\n",(p)->nama,(p)->IdPeg);
        p =(p)->next;
    }
}

boolean CekAdmin(List L,int IdPegX){
    address1 p = L.first;
    while(p!= NULL){
        if(p->IdPeg == IdPegX){
            return true;
        }else{
            return false;
        }
    }
}


