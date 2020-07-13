#include <iostream>
#include <memory>
#include <stdlib.h>

#include "terminal.hpp"

void process_input(std::string& buffer) {
  std::cout << "Got it: " << buffer << std::endl;
}

int main(int argc, char* argv[]) {
  Terminal term;
  std::string command;
  while (true) {
    command = term.get_command();
    if (command.compare("\\c") == 0 || command.compare("q") == 0) {
      std::exit(EXIT_SUCCESS);
    }

    process_input(command);
  }
}
