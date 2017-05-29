#ifndef INSERTABLECONTAINER_H
#define INSERTABLECONTAINER_H

#include <Container.h>
#include <IndexedContainer.h>
#include <Deque.h>

class InsertableContainer : virtual public IndexedContainer, virtual public Deque
{
    public:
        InsertableContainer();
        virtual ~InsertableContainer();
        virtual bool InsertAt(int index, int value)=0; // вставить элемент со сдвигом
        virtual int RemoveAt(int index)=0; // убрать элемент со сдвигом
    protected:
    private:
};

#endif // INSERTABLECONTAINER_H
