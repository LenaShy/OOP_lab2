#ifndef QUEUE_H
#define QUEUE_H

#include <PushPopContainer.h>
#include <string>
using namespace std;



class Queue : public PushPopContainer
{
    public:
        Queue();
        virtual ~Queue();
        bool Push(int value);
		int Pop();
		string ToString() const;
		int Size() const;
		int Peek() const; // узнать элемент
		bool IsEmpty() const; // проверяет пустой ли контейнер
    protected:
    private:
        struct Node{
            public:
                int value;
                Node *prev;
        };
        Node *head;
        Node *tail;
        int length;
};

#endif // QUEUE_H
