#include <iostream>
#include <vector>
#include <string>

const std::vector<char> kPunctSplit { '.', '?', '!' };
const std::string kMeow = " meow";

bool is_in(char& c)
{
  for (auto punct : kPunctSplit)
    if (punct == c) return true;
  return false;
}

int main()
{
  std::string original_text, output_text;
  std::getline(std::cin, original_text);

  for (auto iter = original_text.begin(); iter != original_text.cend(); ++iter)
  {
    if (is_in(*iter))
      output_text += kMeow;
    output_text += *iter;
  }

  std::cout << output_text << std::endl;
  return 0;
}