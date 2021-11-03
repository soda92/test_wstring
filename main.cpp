// #include <gsl/narrow>
#include <iostream>
// std::string to_string(std::wstring const &wStr)
// {
//     std::string temp = {};

//     for (wchar_t const &wCh : wStr)
//     {
//         // If the string can't be converted gsl::narrow will throw
//         temp.push_back(gsl::narrow<char>(wCh));
//     }

//     return temp;
// }
#include <locale>

int main()
{
    // std::string s = to_string(L"文件1.txt");
    std::wstring s = L"文件1.txt";

    std::wcout << s << std::endl;
    return 0;
}
