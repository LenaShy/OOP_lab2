#ifndef PUSHPOPCONTAINER_H
#define PUSHPOPCONTAINER_H

#include <Container.h>


class PushPopContainer : virtual public Container
{
    public:
        PushPopContainer();
        virtual ~PushPopContainer();
        virtual bool Push(int value)=0; // добавить элемент
        virtual int Pop()=0; // забрать элемент
        virtual int Peek() const =0; // узнать элемент

    protected:
    private:
};

#endif // PUSHPOPCONTAINER_H
