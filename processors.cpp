#include "processors.h"

IntelProcessor::IntelProcessor()
{

}
std::string IntelProcessor::GetProcessorInfo(){
    return "Intel processor for " + version + ".Type:"+ std::to_string(type)+". Speed: " +std::to_string(speed);
}
void IntelProcessor::SetProcessor(std::string version, ProcessorType type, double speed){
    this->version = version;
    this->type = type;
    this->speed = speed;
}
AmdProcessor::AmdProcessor(){

}
std::string AmdProcessor::GetProcessorInfo(){
    return "Amd processor for " + version + ". Type:"+ std::to_string(type)+". Speed: " +std::to_string(speed);
}
void AmdProcessor::SetProcessor(std::string version, ProcessorType type, double speed){
    this->version = version;
    this->type = type;
    this->speed = speed;
}
