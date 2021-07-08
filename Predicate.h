#ifndef PROJECT1_PREDICATE_H
#define PROJECT1_PREDICATE_H
#include "Token.h"
#include <vector>

class Predicate {
private:
    bool ifsuccess = true;
    Token* head;
    std::vector<Token*> IDStrings;

public:
    Predicate(){ifsuccess = false;}
    Predicate(Token* newhead) {head = newhead;}

    void PushBack(Token* next);

    std::string ToString();
    bool success();
};

#endif //PROJECT1_PREDICATE_H
