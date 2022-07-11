#ifndef SUBTRACT_H
#define SUBTRACT_H
#include <iostream>
#include <INumberSearch.h>


class Subtract:public INumberSearch
{
    public:
        Subtract();
        virtual ~Subtract();

        virtual int evaluation(int x, int y)override;
        virtual std::string symbol()override;

    protected:

    private:
};

#endif // SUBTRACT_H
