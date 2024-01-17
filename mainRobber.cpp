#include "model.h"
#include "Translator.h"
#include "FileProcessor.h"
#include <iostream>

int main(int argc, char* argv[]){
    FileProcessor* processor = new FileProcessor();
    std::string inputFile = "testing123.txt"; //Change for your specific file name
    std::string outputFileName = "output"; //Change for desired html file name
    processor->processFile(inputFile, outputFileName);
    delete processor;
    return 0;
};