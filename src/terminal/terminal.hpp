#ifndef TERMINAL_H
#define TERMINAL_H

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
