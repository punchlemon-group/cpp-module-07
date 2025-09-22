#include <iostream>
#include <iter.hpp>

void printInt(int const &x) {
    std::cout << x << std::endl;
}

void printStr(std::string const &s) {
    std::cout << s << std::endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    ::iter(arr, 5, printInt);

    std::string strArr[] = {"apple", "banana", "cherry"};
    ::iter(strArr, 3, printStr);

    return 0;
}
