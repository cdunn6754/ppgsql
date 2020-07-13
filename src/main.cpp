#include <iostream>
#include <string>
#include <cstddef>
#include <memory>
#include <stdlib.h>

struct InputBuffer
{
  std::string buffer;
  std::size_t buffer_size;
  std::size_t input_length;
};

void print_prompt() {
  std::cout << "db_name > ";
}

void read_input(std::unique_ptr<InputBuffer>& ib) {
  std::getline(std::cin, ib->buffer);
}

void process_input(std::string& buffer) {
  std::cout << "Got it: " << buffer << std::endl;
}

int main(int argc, char* argv[]) {
  std::unique_ptr<InputBuffer> ib (new InputBuffer);
  while (true) {
    print_prompt();
    read_input(ib);

    if (ib->buffer.compare("\\c") == 0 || ib->buffer.compare("q") == 0) {
      std::exit(EXIT_SUCCESS);
    }

    process_input(ib->buffer);
  }
}
