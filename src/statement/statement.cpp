#include "statement.hpp"

// Base
Statement::Statement(std::string type)
: type(type)
{}

std::string Statement::get_type() {
  return type;
}

// Select
SelectStatement::SelectStatement()
: Statement("select")
{}

