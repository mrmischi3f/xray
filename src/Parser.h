#pragma once
#include <string>
#include <cstdio>

class Parser {
public:
    Parser(const std::string& path);
    ~Parser();

    void parse();
private:
    int m_index = 0;
    char* m_buffer;
};