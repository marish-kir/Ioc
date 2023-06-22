#ifndef COMPUTER_H
#define COMPUTER_H
#include "processors.h"
#include "string"

class Computer
{
private:
    IProcessor* processor;
public:
    Computer(IProcessor* processor);
    std::string GetProcessor();
    ~Computer(){delete [] processor;}
};

#endif // COMPUTER_H
