/*
1. Erik Van Cruyningen
2. 2416663
3. vancruyningen@chapman.edu
4. CPSC_350 Section 4
5. Robber Language

The Translator Class translates any given string from english to robber language.

translateAnything is an overall translate method that takes in a string to be translated and returns a translated string.
translateEnglishWord translates a single word by calling translateAnything.
translateEnglishSentence translates a sentence by calling translateAnything.
Translator() and ~Translator() are simple constructors and destructors.
*/

#ifndef TRANSLATOR
#define TRANSLATOR

#include <iostream>
#include "model.h"

class Translator
{
private:
    model *inTranslate;
    std::string translateAnything(std::string inputSring);
public:
    Translator();
    ~Translator();
    std::string translateEnglishWord(std::string inputString);
    std::string translateEnglishSentence(std::string inputString);
};

#endif