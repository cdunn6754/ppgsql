#ifndef STATEMENT_H
#define STATEMENT_H

#include <string>


class Statement {

  std::string type;

  public:
    std::string get_type();
    Statement(std::string type);
};


class SelectStatement : public Statement {

  public:
  SelectStatement();
  std::string table_name;
};

#endif
