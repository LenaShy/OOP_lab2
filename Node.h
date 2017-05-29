#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node
{
    public:
        Node() { cout << "Hey!";}
        virtual ~Node() {}
        int value;
        Node *prev;
    protected:
    private:
};

#endif // NODE_H
