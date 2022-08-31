#include <iostream>
#include <string>

int main()
{
    // message
    std::string my_string1 = "Happy Learning at Educative!";

    // convert to c-string using c_str()
    std::string my_cstring = my_string1.c_str();

    // print
    for (int i = 0; i < my_cstring.length(); i++)
    {
        std::cout << " character is " << my_string1[i] << "\n";
        std::cout << "my cstring is " << my_cstring[i] << "\n";
    }
}