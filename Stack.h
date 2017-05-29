#ifndef STACK_H
#define STACK_H

#include <PushPopContainer.h>
#include <string>
using namespace std;

class Stack : public PushPopContainer
{
    public:
        Stack();
        virtual ~Stack();
        bool Push(int value);
		int Pop();
		int Peek() const; // узнать элемент
        bool IsEmpty() const; // проверяет пустой ли контейнер
        string ToString() const; // строка со всеми элементами
		int Size() const;
    protected:
    private:
        struct Node{
            public:
                int value;
                Node *prev;
        };
        Node *head;
        int length;
};

#endif // STACK_H
