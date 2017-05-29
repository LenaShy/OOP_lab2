#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include <PushPopContainer.h>
#include <InsertableContainer.h>


class ArrayList : public PushPopContainer, public InsertableContainer
{
    public:
        ArrayList();
        virtual ~ArrayList();
        bool Push(int value);
        int Pop();
    protected:
    private:
        int *arr;
        int arrSize;
};

#endif // ARRAYLIST_H
