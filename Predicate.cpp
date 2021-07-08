#include "Predicate.h"


void Predicate::PushBack(Token* next){
    IDStrings.push_back(next);
}

std::string Predicate::ToString(){
    std::string pred = head->DesString() + "(";
    for (unsigned int i = 0; i < IDStrings.size(); i++) {
        pred += IDStrings.at(i)->DesString();
        if (i != IDStrings.size()-1) {
            pred += ",";
        }
    }
    pred += ")";
    return pred;
}

bool Predicate::success(){
    return ifsuccess;
}
