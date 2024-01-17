#include "model.h"

model::model(){
}

std::string model::translateSingleConsonant(char inputConsonant){ //working
    std::string translatedConsonant;
    translatedConsonant.push_back(inputConsonant);
    translatedConsonant.push_back('o');
    translatedConsonant.push_back(inputConsonant);
    return translatedConsonant;
}

std::string model::translateSingleVowel(char inputVowel){ //working
    std::string translatedVowel(1, inputVowel); //converts char to string
    return translatedVowel;
}

model::~model(){
}