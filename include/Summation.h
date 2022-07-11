#ifndef SUMMATION_H
#define SUMMATION_H
#include <iostream>
#include <INumberSearch.h>


class Summation: public INumberSearch
{
    public:
        Summation();
        virtual ~Summation();

        virtual int evaluation(int x, int y)override;
        virtual std::string symbol()override;

    protected:

    private:
};

#endif // SUMMATION_H
