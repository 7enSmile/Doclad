#include <iostream>
int main()
{
    int* p = new int[2];

    std::cout << p;

    delete[] p;

    return 0;
}
