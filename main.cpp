#include <iostream>
#include <filesystem>
#include <string>

#define RED "\033[31m"
#define YELLOW "\033[33m"
#define RESET "\033[0m"

struct {
  std::string working_directory;
  std::string target;
} Parameters;

int main(int argc, char* argv[]) {
  if (argc > 2) {
    std::cout << RED << "Error: Unexpected number of arguments" << RESET
              << std::endl;
    return 1;
  }

  Parameters.working_directory = argv[0];
  Parameters.target = argv[1];

  return 0;
}