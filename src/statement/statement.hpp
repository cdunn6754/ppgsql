#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>
#include <memory>
#include <iostream>


class Statement {

  std::string type;

  public:
    std::string get_type() const;
    Statement(std::string type);
    static std::unique_ptr<Statement> statement_factory(std::string query);
};


class NoopStatement : public Statement {
  public:
    NoopStatement();

};


class SelectStatement : public Statement {
  public:
    SelectStatement();
    std::string table_name;
};

#endif
