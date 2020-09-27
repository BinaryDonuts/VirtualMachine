#include "include/fileutils.h"
#include "include/lexer.h"
#include "include/token.h"

#include <iostream>
#include <vector>

int main(int argc, char** argv)
{

    // Handles arguements
    if(argc < 2){
        std::cout << "Too few arguments" << std::endl;
        return 1;
    }

    // Creates a vector that will store the contents of the file.
    std::vector<std::string> *fileContents = new std::vector<std::string>;

    // Reads the file and stores each line in the fileContents string vector.
    int rf = readFile(argv[1],fileContents);
    if(rf){return 1;} // Exits the program if there is an error

    std::vector<Token> *tokens = new std::vector<Token>;
    int lexResults = tokenize(fileContents,tokens);
    return 0;
}