#ifndef ELEMENT_H
#define ELEMENT_H

#pragma once

class element
{
public:
    element();
    element(int val) ;
    void setData(int val) {this->data = val;};
    int getData() {return this->data;}
    element *getPointer() {return this->pointer;}
    void setPointer(element *val) {this->pointer= val;}
    ~element();

private:
    int data;
    element*pointer ;

};

#endif
/*
    data : pointer ; data;
    funct: setter , getter; constructor ; deconstructor ;
*/