// 输入两个数字 输出他们的和

#include <iostream>

int main()
{
    std::cout << "输入两个数字：" << std::endl;
    int v1=0,v2=0;
    std::cin >> v1 >> v2;
    std::cout << "两个数字的和是" << v1 << "和" << v2
                                << "他们的和是" << v1+v2 << std::endl;
    return 0;
}