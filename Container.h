#ifndef CONTAINER_H
#define CONTAINER_H
#include <string>
using namespace std;


class Container
{
    public:
        Container();
        virtual ~Container();
        virtual int Size() const =0; // возвращает размер контейнера
        virtual bool IsEmpty() const =0; // проверяет пустой ли контейнер
        virtual string ToString() const =0; // строка со всеми элементами
    protected:
    private:
};

#endif // CONTAINER_H
