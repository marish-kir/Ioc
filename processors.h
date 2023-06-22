#ifndef PROCESSORS_H
#define PROCESSORS_H
#include "string"
#include <QtNumeric>
enum ProcessorType
{
    x86=86,
    x64=64
};

class IProcessor
{
public:
     virtual std::string GetProcessorInfo() = 0;
     virtual void SetProcessor(std::string version, ProcessorType type, double speed) = 0;
     virtual ~IProcessor() = default;

};

class IntelProcessor:public IProcessor
{
    std::string version;
    ProcessorType type;
    double speed;
public:
    IntelProcessor();
    std::string GetProcessorInfo();
    void SetProcessor(std::string version, ProcessorType type, double speed);
    ~IntelProcessor() = default;
};

class AmdProcessor:public IProcessor
{
    std::string version;
    ProcessorType type;
    double speed;
public:
    AmdProcessor();
    std::string GetProcessorInfo();
    void SetProcessor(std::string version, ProcessorType type, double speed);
    ~AmdProcessor() = default;
};

#endif // PROCESSORS_H
