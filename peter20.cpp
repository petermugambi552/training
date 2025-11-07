#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> m;
    m[1] = "Apple";
    m[2] = "Banana";

    for (const auto &pair : m)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    return 0;
}
