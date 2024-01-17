#include "FileProcessor.h"

FileProcessor::FileProcessor(){
    robberTranslate = new Translator();
}

void FileProcessor::processFile(std::string inputFile, std::string outputFileName){
    std::ifstream readFile(inputFile); //ifstream for input
    if(!(readFile.good())){
        std::cout << "Error, File Not Found. Please check spelling in main.cpp" << std::endl;
        return;
    }

    std::ofstream htmlFile(outputFileName); //ofstream to output
    std::string englishString;

    htmlFile << "<!DOCTYPE html>\n<html>\n<head>\n<title>English to Robber Translation</title>\n</head>\n<body>\n";

    while (std::getline(readFile, englishString)) //adds all the english parts to the file
    { //BUGBUG SUBSTRING REMOVES LAST CHARACTER IF NEWLINE IS NOT INSERTED AT THE END OF INPUTFILE
        htmlFile << "<p><b>" << englishString.substr(0, englishString.length() - 1) << "</b><br></p>" << "\n"; // getline adds a newline character hence the substr
    }

    htmlFile << "<p><b></b><br></p>" << std::endl;

    readFile.clear(); //resets the getline
    readFile.seekg(0);

    while(std::getline(readFile, englishString)){ //adds all translated parts
        htmlFile << "<p><i>" << robberTranslate->translateEnglishSentence(englishString.substr(0, englishString.length() - 1)) << " </i><br></p>" << "\n"; // BUGBUG adding new line character when I dont want to?
    }

    htmlFile << "<p><i></i><br></p>\n</body>\n</html> ";
    std::cout << "Translated and sent to HTML. Look for " << outputFileName << " in your files." << std::endl;

    htmlFile.close();
    readFile.close();
}

FileProcessor::~FileProcessor(){ //calls translator destructor and deallocates all memory
    delete robberTranslate;
}
