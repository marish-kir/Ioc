#include "computer.h"

Computer::Computer(IProcessor* processor)
{
    this->processor = processor;
}
std::string Computer::GetProcessor()
{
   return processor->GetProcessorInfo();
}
