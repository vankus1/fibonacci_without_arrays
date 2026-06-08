#include <iostream>


void fibonacci_print(int limit) {

    long long x{ 0 };
    long long y{ 1 };

    if (limit <= 0) {
        return;
    }
    else if (limit == 1) {
        std::cout << x;
        return;
    }
    else if (limit == 2) {
        std::cout << x << " " << y;
        return;
    }

    std::cout << x << " " << y << " ";

    limit -= 2;
    

    for (int i{ }; i < limit; i++) {
        long long n{ x + y };
        std::cout << n << " ";
        x = y;
        y = n;
    }
}

int main()
{
    int limit{};
    std::cout << "Enter fibonacci sequence lenght you want: ";
    std::cin >> limit;
    fibonacci_print(limit);
    return 0;
}


