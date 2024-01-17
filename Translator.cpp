#include "translator.h"

Translator::Translator(){
    model* inTranslate = new model();
}

std::string Translator::translateAnything(std::string inputString){ //general translate function - will translate sentences
    std::string returnString;
    for (int i = 0; i < inputString.size(); i++)
    {
        if (tolower(inputString[i]) == 'a' || tolower(inputString[i]) == 'e' || tolower(inputString[i]) == 'i' || tolower(inputString[i]) == 'o' || tolower(inputString[i]) == 'u')
        {
            returnString += inTranslate->translateSingleVowel(inputString[i]); //checks if char is a vowel, translates, then adds to string.
        }
        else if (inputString[i] == '.' || inputString[i] == '!' || inputString[i] == '?' || inputString[i] == ',' || inputString[i] == ' ' || inputString[i] == '\'')
        {
            returnString.push_back(inputString[i]); //adds all punctuation to string as is
        }
        else
        {
            returnString += inTranslate->translateSingleConsonant(inputString[i]); //all other things, consonants, are translated and added.
        }
    }

    return returnString;
}

std::string Translator::translateEnglishWord(std::string inputString){ //calls translateAnything to do the translation
    std::string returnString;
    returnString = translateAnything(inputString);
    return returnString;
}

std::string Translator::translateEnglishSentence(std::string inputString){ //calls translateAnything to do the translation
    std::string returnString;
    returnString = translateAnything(inputString);
    return returnString;
}

Translator::~Translator(){ //deletes the model
    delete inTranslate;
}