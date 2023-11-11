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

void linkedlist::deleteTail()
{
    if(this->head == nullptr) {cout<<"list null.";return;}
    element*temp = this->head;
    while(temp->getPointer() != this->tail)
    {
        temp = temp->getPointer();
    }
    this->tail = temp;
    this->tail->setPointer(nullptr);
    temp = temp->getPointer();
    delete temp;
}

void linkedlist::deleteElement(element *val)
{
    if(this->head == nullptr) {cout<<"list Null.\n"; return;}
    if(this->head == val) 
    {
        this->deleteFirst();
        return;
    }
    if(this->tail == val)
    {
        this->deleteTail();
        return;
    }
    element *p = this->head;
    while(p->getPointer() != val)
    {
        p=p->getPointer();
    }
     // 1. 2 3  : sau while p se dung tai 1 , ta tien hanh tro 1 to 3 ; chuyen p sang 2 va xoa p.
    p->setPointer(p->getPointer()->getPointer());
    p=p->getPointer();
    delete p;

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