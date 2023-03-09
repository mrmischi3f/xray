#pragma once
#include <string>

class Parser {
public:
    Parser(const char* path);
    ~Parser();

    void parse();
private:
    int m_index = 0;
    char* m_buffer;
    size_t m_size;
};