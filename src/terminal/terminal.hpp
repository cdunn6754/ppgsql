#ifndef PPSQL
#define PPSQL

#include <string>
#include <iostream>

class Terminal {
    std::string buffer;

    void print_prompt();

    void read_input();

  public:
    std::string get_command();
};

#endif
