#include <iostream>
#include <memory>
#include <stdlib.h>

#include "terminal.hpp"
#include "statement.hpp"

void process_input(const Statement& statement) {
  std::cout << "statement type: " << statement.get_type() << std::endl;
}

int main(int argc, char* argv[]) {
  Terminal term;
  std::string command;
  while (true) {
    std::string query = term.get_command();
    std::unique_ptr<Statement> statement = Statement::statement_factory(query);
    process_input(*statement);
  }
}
