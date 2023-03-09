#include <iostream>
#include <Parser.h>

int main(int argc, char* argv[]) {
    Parser p(argv[1]);
    p.parse();
    std::cout << "Hello World" << std::endl;
    return 0;
}