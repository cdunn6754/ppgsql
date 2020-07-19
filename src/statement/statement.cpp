#include "statement.hpp"

// Base
Statement::Statement(std::string type)
: type(type)
{}

std::string Statement::get_type() const {
  return type;
}

std::unique_ptr<Statement> Statement::statement_factory(std::string query) {
  if (query.compare("\\c") == 0 || query.compare("q") == 0) {
    std::exit(EXIT_SUCCESS);
  }
  else if (query.rfind("select", 0) == 0) {
    return std::make_unique<SelectStatement>();
  }
  else {
    return std::make_unique<NoopStatement>();
  }
};


// Select
SelectStatement::SelectStatement()
: Statement("select")
{}


// NOOP
NoopStatement::NoopStatement()
: Statement("noop")
{}
