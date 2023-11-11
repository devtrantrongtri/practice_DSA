#include "linkedlist.h"
#include<iostream>
using namespace std;
linkedlist::linkedlist()
{
    this->head = nullptr;
    this->tail = nullptr;
}

void linkedlist::insertFirst(element *val)
{
    /*
    check linkedist is null or isn't .
    */
   if(this->head == nullptr ) {this->head = this->tail = val;}
   else {
    val->setPointer(this->head);
    this->head = val;
   }
}

void linkedlist::insertTail(element *val)
{
    if(head == nullptr ) this->head = this->tail = val;
    else{
        this->tail->setPointer(val);
        this->tail = val;
    }
}

void linkedlist::checkList()
{
    if(tail == nullptr || head == nullptr) cout<<"\n Empty list. \n";
    else{
        cout<<"Members of this list is : \n";
        element* p;
        p = this->head;
        while(p != nullptr)
        {
            cout<<p->getData()<<"\t";
            p=p->getPointer();
        }
        cout<<"END.\n";
    }
}

linkedlist::~linkedlist()
{

}