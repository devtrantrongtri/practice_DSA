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

void linkedlist::insertFirst(int val)
{
    this-> e = new element(val);
    this->insertFirst(e);
}

void linkedlist::insertTail(element *val)
{
    if(head == nullptr ) this->head = this->tail = val;
    else{
        this->tail->setPointer(val);
        this->tail = val;
    }
}

void linkedlist::deleteFirst()
{
    if(this->head == nullptr) cout<<"Couldn't delete this first members.\n";
    else{
    element* p = this->head ;
    this->head = this->head->getPointer();
    delete p;
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
    // delete e;
}