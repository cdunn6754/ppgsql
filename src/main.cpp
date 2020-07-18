#include <iostream>
#include <memory>
#include <stdlib.h>

#include "terminal.hpp"
#include "statement.hpp"

void process_input(Statement& statement) {
  std::cout << "statement type: " << statement.get_type() << std::endl;
}

int main(int argc, char* argv[]) {
  Terminal term;
  std::string command;
  while (true) {
    command = term.get_command();
    if (command.compare("\\c") == 0 || command.compare("q") == 0) {
      std::exit(EXIT_SUCCESS);
    }
    else if (command.rfind("select", 0) == 0) {
      SelectStatement ss;
      process_input(ss);
    }
    else {
      std::cout << "Dont understand" << std::endl;
    }
  }
}
