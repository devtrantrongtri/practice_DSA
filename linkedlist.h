    #ifndef LINKEDLIST_H
    #define LINKEDLIST_H
    #include "element.h"

    #pragma once

    class linkedlist
    {
    public:
        linkedlist();
        void insertFirst(element* val);
        void insertTail(element* val);
        void checkList();
        ~linkedlist();

    private:
        // element node;
        element *head;
        element *tail;

    };

    #endif