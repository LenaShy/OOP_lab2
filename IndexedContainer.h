#ifndef INDEXEDCONTAINER_H
#define INDEXEDCONTAINER_H

#include <Container.h>


class IndexedContainer : virtual public Container
{
    public:
        IndexedContainer();
        virtual ~IndexedContainer();
        virtual int Get(int index) const =0; // узнать элемент по индексу index
        virtual void Set(int index, int value) =0; // задать значение элементу
    protected:
    private:
};

#endif // INDEXEDCONTAINER_H
