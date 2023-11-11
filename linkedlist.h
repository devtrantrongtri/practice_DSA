    #ifndef LINKEDLIST_H
    #define LINKEDLIST_H
    #include "element.h"

    #pragma once

    class linkedlist
    {
    public:
        linkedlist();
        void insertFirst(element* val);
        void insertFirst(int val); // overloading function for integer paremeter .
        void insertTail(element* val);
        void deleteFirst();
        void checkList();
        ~linkedlist();

    private:
        // element node;
        element *head;
        element *tail;
        element*e;
    };

    #endif