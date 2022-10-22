#include <iostream>
#include <string>

int main()
{
    std::string s = "4444 Lawrence Avenue East, Scarborough, Toronto, ON, M1E 2T5";
    std::string delim = ",";

    int start = 0U;
    int end = s.find(delim);
    while (end != std::string::npos)
    {
        std::cout << s.substr(start, end - start) << std::endl;
        start = end + delim.length();
        end = s.find(delim, start);
    }

    std::cout << s.substr(start, end);
}