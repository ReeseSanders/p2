#include "Lexer.h"
#include "Token.h"
#include "CommaAutomaton.h"
#include "Parser.h"
#include "DatalogProgram.h"
#include <iostream>
#include <fstream>


int main(int argc, char** argv) {

    std::string readFile = argv[1];
    std::ifstream infile;
    //infile.open("C:\\Users\\rando\\cs236\\Project1\\test.txt");
    infile.open(readFile);
    std::string input((std::istreambuf_iterator<char>(infile)),
                        (std::istreambuf_iterator<char>()));


    Lexer* lexer = new Lexer();

    lexer->Run(input);
    Parser* parser = new Parser(lexer->GetTokens());
    DatalogProgram myProgram = parser->Parse();

    /*delete lexer;
    delete parser;*/

    return 0;
}
