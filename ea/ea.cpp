#include <iostream>
int main()
{
    int i, N;
    double x_1, y_1, x_2, y_2;
    std::cin >> N;
    for (i = 1; i <= N; i++)
    {
        std::cin >> x_1 >> y_1 >> x_2 >> y_2;
        std::cout << (x_1 + x_2) / 2 << " " << (y_1 + y_2) / 2;
    }
    return 0;
}