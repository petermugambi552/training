#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
    std::unordered_map<std::string, std::string> person_info;
    person_info["name"] = "Peter";
    std::cout << "My name is " << person_info["name"] << std::endl;
    std::cout << "Good night, " << person_info["name"] << ". Sleep well and sweet dreams!" << std::endl;

    return 0;
}
