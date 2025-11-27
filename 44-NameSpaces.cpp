#include<iostream>

namespace 
{
    float gravity = 9.8;
    float force(float mass)
    {
        return gravity * mass;
    }
}


int main()
{
    std::cout << force(60) << std::endl;
    return 0;
}