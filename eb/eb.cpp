#include <iostream>
int main()
{
    int i, N, p;
    std::cin >> N;
    for (i = 1; i <= N; i++)
    {
        std::cin >> p;
        std::cout << (p * (p - 1)) / 2;
    }
    return 0;
}