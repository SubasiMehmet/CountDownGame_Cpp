#ifndef DIVIDE_H
#define DIVIDE_H
#include <iostream>
#include <INumberSearch.h>


class Divide: public INumberSearch
{
    public:
        Divide();
        virtual ~Divide();

        virtual int evaluation(int x, int y) override;
        virtual std::string symbol() override;

    protected:

    private:
};

#endif // DIVIDE_H
