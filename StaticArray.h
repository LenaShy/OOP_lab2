#ifndef STATICARRAY_H
#define STATICARRAY_H

#include <IndexedContainer.h>
#include <string>
using namespace std;


class StaticArray : public IndexedContainer
{
    public:
        StaticArray(int n);
        virtual ~StaticArray();

        int Size() const; // возвращает размер контейнера
        bool IsEmpty() const; // проверяет пустой ли контейнер
        string ToString() const; // строка со всеми элементами

        int Get(int index); // узнать элемент по индексу index
        void Set(int index, int value); // задать значение элементу
    protected:
    private:
        int *arr;
        int maxSize;
};

#endif // STATICARRAY_H
