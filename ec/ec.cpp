#include <iostream>
int main()
{
    int i, j, k, N, A;
    std::cin >> N;
    for (i = 1; i <= N; i++)
    {
        std::cin >> A;
        j = 2;
        k = A - 1;
        while (A % j != 0) 
        {
            j++;
        }
        while (A % k != 0)
        {
            k--;
        }
        std::cout << j * k;
    }
    return 0;
}