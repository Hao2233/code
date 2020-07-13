#include <iostream>

int main()
{
    // while 循环输出50-100
    std::cout << "while 循环输出50-100" << std::endl;
    int num1=50;
    while(num1<=100)
    {
        std::cout << num1;
        num1++;
        std::cout << std::endl;

    }

    // while循环输出100递减到50
    std::cout << "while 循环输出100-50" << std::endl;
    int num2 = 100;
    while(num2>=50)
    {
        std::cout << num2;
        num2--;
        std::cout << std::endl;
    }

    // 提示用户输出输入两个数字 ，输出这两个数字之间到数字
    int num3=0;
    int num4=0;

    std::cout << "请输入两个数字：" << std::endl;
    std::cin >> num3 >> num4 ;
    if (num4>num3)
    {
        while(num3<=num4)
        {
            std::cout << num3 << std::endl;
            num3++;
        }
    }else if (num3>num4)
    {
        while(num3>=num4)
        {
            std::cout << num3 << std::endl;
            num3--;

        }
    }else if(num3==num4)
    {
        std::cout << "请输入两个不同到数字!!!" << std::endl;
    } 
}