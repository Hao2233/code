//
//  macin02.cpp
//  全局区
//
//  Created by HAO on 2020/9/29.
//  Copyright © 2020年 HAO. All rights reserved.
//

#include "macin02.hpp"
#include <iostream>
using namespace std;

int * func()
{
    // 利用关键字new，可以将数据开辟到堆区
    // 指针的本质也是局部变量，放在栈上，指针保存的数据是放在堆区的
    int * p=new int(10);
    
    return p;
}

int main02()
{
    // 在堆区开辟数据
    int *p=func();
    
    cout << p<< endl;
    
    return 0;
    
}
