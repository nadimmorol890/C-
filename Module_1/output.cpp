#include<iostream>

int main()
{
    std::cout<<"Hello World\n";
    
    int a = 10;
    long long int b = 1000000000000;
    char c = 'A';
    double d = 1.75876347873;
    float e = 1.5;

    //printf("%d",a);
    // (\n = std::endl)
    std::cout << "My favourite number is " << a << std::endl;
    std::cout << a <<" is my favourite number" << std::endl;
    std::cout << a << std::endl << b;
    return 0;
}