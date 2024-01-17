/*
1. Erik Van Cruyningen
2. 2416663
3. vancruyningen@chapman.edu
4. CPSC_350 Section 4
5. Robber Language

The model class translate a single consonant or single vowel.


*/

#ifndef MODEL
#define MODEL

#include <iostream>

class model{
    public:
        model();
        ~model();
        std::string translateSingleConsonant(char inputConsonant);
        std::string translateSingleVowel(char inputVowel);
};


#endif