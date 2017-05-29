#ifndef DEQUE_H
#define DEQUE_H

#include <Container.h>


class Deque : public Container
{
    public:
        Deque();
        virtual ~Deque();

        virtual bool PushFront(int value)=0; // добавить в начало
        virtual bool PushBack(int value)=0; // добавить в конец
        virtual int PopFront()=0; // забрать из начала
        virtual int PopBack()=0; // забрать с конца
        virtual int PeekFront()=0; // узнать элемент в начале
        virtual int PeekBack()=0; // узнать элемент с конца
    protected:
    private:
};

#endif // DEQUE_H
