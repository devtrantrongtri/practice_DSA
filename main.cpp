#include<iostream>
#include "linkedlist.h"
using namespace std;
int main(){
    
    int n = 5;
    linkedlist* list = new linkedlist();
    element *e[n+1];
    for(int i = 0; i<= n ; i++)
    {
        e[i] = new element(i);
        list->insertTail(e[i]);
    }
    list->checkList();
    list->deleteFirst();
    list->deleteTail();
    list->deleteElement(e[1]);
    list->checkList();


    delete e;
    delete list;
    return 0;
}