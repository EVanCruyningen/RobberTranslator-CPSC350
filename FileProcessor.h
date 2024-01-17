/*
1. Erik Van Cruyningen
2. 2416663
3. vancruyningen@chapman.edu
4. CPSC_350 Section 4
5. Robber Language

The FileProcessor class outputs an html file of the translated contents from inside a different input file.

FileProcesser() and ~FileProcessor() are a simple constructor and destructor.
processFile() takes in two strings, one of which is the name of a file to read from, and other to write to. This reads the inputFile's contents,
translates them to robber language, and then outputs it to a file in html formatting. Will exit if passed in an incorrect file name.
*/

#ifndef FILE_PROCESSOR
#define FILE_PROCESSOR

#include <iostream>
#include <ios>
#include <fstream>
#include <string>
#include "Translator.h"

class FileProcessor
{
    private:
        Translator* robberTranslate;

    public:
        FileProcessor();
        ~FileProcessor();
        void processFile(std::string inputFile, std::string outputFileName);
};

#endif