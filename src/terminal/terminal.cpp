#include "terminal.hpp"

void Terminal::print_prompt() {
  std::cout << "db_name > ";
}

void Terminal::read_input() {
  std::getline(std::cin, buffer);
}

// Public
std::string Terminal::get_command() {
    print_prompt();
    read_input();
    return buffer;
  }
