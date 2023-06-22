#include <QCoreApplication>
#include "ioc_contaner.h"
#include "processors.h"
#include "computer.h"
#include <iostream>

int IOCContainer::s_nextTypeId = 115094801;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    IOCContainer injector;

    injector.RegisterInstance<IProcessor, AmdProcessor>();
    auto processor = injector.GetObject<IProcessor>();
    processor->SetProcessor("Ryzen 5",x64,3600);
    Computer computer(processor.get());
    std::cout<<computer.GetProcessor()<<std::endl;

    return a.exec();
}
