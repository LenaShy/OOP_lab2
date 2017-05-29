#ifndef LINKEDDEQUE_H
#define LINKEDDEQUE_H

#include <Deque.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;


class LinkedDeque : public Deque
{
    public:
        LinkedDeque();
        virtual ~LinkedDeque();

        int Size() const; // возвращает размер контейнера
        bool IsEmpty() const; // проверяет пустой ли контейнер
        string ToString() const; // строка со всеми элементами

        bool PushFront(int value); // добавить в начало
        bool PushBack(int value); // добавить в конец
        int PopFront(); // забрать из начала
        int PopBack(); // забрать с конца
        int PeekFront(); // узнать элемент в начале
        int PeekBack(); // узнать элемент с конца
    protected:
    private:
        struct Node{
            public:
                int value;
                Node *prev;
                Node *next;
        };
        Node *head;
        Node *tail;
        int length;
};

#endif // LINKEDDEQUE_H
