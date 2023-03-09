#include "Parser.h"
#include <stdio.h>
#include <iostream>
#include <fstream>

#define HEX(h) \
    printf("%.2x\n", h); 

Parser::Parser(const char* path) {
    if (path == NULL) {
        std::cout << "You must provide a filename" << std::endl;
    }
    std::ifstream file(path, std::ios::in | std::ios::binary | std::ios::ate);
    m_size = file.tellg();
    file.seekg(0, std::ios::beg);
    m_buffer = new char[m_size];
    file.read(m_buffer, m_size);
    file.close();
}

Parser::~Parser() {
    delete m_buffer;
}

void Parser::parse() {
    while(m_index < m_size) {
        HEX(m_buffer[m_index])
        ++m_index;
    }
}