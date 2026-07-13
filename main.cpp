#include <iostream>
#include <string>

enum CaseMode {
  kAllUpper,
  kAllLower,
  kAuto,
};

struct {
  std::string working_directory;
  std::string target;
  CaseMode case_mode;
} Parameters;

int main(int argc, char* argv[]) {
  Parameters.working_directory = argv[0];
  std::cout << "Working directory: " << Parameters.working_directory << std::endl;

  // Usage: meow <target>
  for (int i = 1; i < argc; i++) {
    std::string token = argv[i];
    std::cout << token << std::endl;
  }

  return 0;
}