#include<iostream>
#include "linkedlist.h"
using namespace std;
int main(){
    
    linkedlist* l = new linkedlist();
    element * e ;
    e = new  element(3);
    l->insertFirst(e);
    e = new element(2);
    l ->insertFirst(e);
    e= new element(1);
    l->insertFirst(e);
    l->checkList();
    e = new element(4);
    l->insertTail(e);
    e = new element();
    l->insertTail(e);
    l->checkList();
    delete e;
    delete l;
    return 0;
}