#include<iostream>

namespace Math {
    int add(int a, int b)
    {
        return a + b;
    }

    namespace Advanced
    {
        double power(double x, double y)
        {
            double result = 1;
            for(int i = 0; i < y; i++)
            {
                result *= x;
            }
            return result;
        }
    }
}

int main()
{
    std::cout << Math::add(3, 5) << std::endl;
    std::cout << Math::Advanced::power(2, 3) << std::endl;
    
}