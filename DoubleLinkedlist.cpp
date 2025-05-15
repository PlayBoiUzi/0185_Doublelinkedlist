#include <iostream>
#include <string.h>
using namespace std;

class Node
{
    public:
        int noMhs;
        Node *next;
        Node *prev;
    };
    
    class DoubleLinkedList
    {
        private:
            Node *START;
    
            public:
            DoubleLinkedList()
       
