#ifndef MULTIPLY_H
#define MULTIPLY_H
#include <iostream>
#include <INumberSearch.h>



class Multiply: public INumberSearch
{
    public:
        Multiply();
        virtual ~Multiply();

        virtual int evaluation(int x, int y) override;
        virtual std::string symbol() override;

    protected:

    private:
};

#endif // MULTIPLY_H
