#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <PushPopContainer.h>
#include <InsertableContainer.h>
#include <string>
#include <Node.h>
using namespace std;


class LinkedList : virtual public PushPopContainer, virtual public InsertableContainer
{
    public:
        LinkedList();
        virtual ~LinkedList();

        int Get(int index) const; // узнать элемент по индексу index
        void Set(int index, int value);

        bool Push(int value);
        int Pop();
        int Peek() const; // узнать элемент

        bool InsertAt(int index, int value); // вставить элемент со сдвигом
        int RemoveAt(int index); // убрать элемент со сдвигом

        int Size() const; // возвращает размер контейнера
        bool IsEmpty() const; // проверяет пустой ли контейнер
        string ToString() const; // строка со всеми элементами

        bool PushBack(int value); // добавить в конец
        int PopBack(); // забрать с конца
        int PeekBack(); // узнать элемент с конца
        bool PushFront(int value); // добавить в начало
        int PopFront(); // забрать из начала
        int PeekFront(); // узнать элемент в начале
    protected:
    private:
        /*class Node{
            public:
            int value;
            Node *prev;
        };*/
        Node *head;
        Node *tail;
        int length;
};

#endif // LINKEDLIST_H
