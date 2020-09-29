//
//  main.cpp
//  全局区
//
//  Created by HAO on 2020/9/29.
//  Copyright © 2020年 HAO. All rights reserved.
//

#include <iostream>
using namespace std;

// 全局变量
int g_a=10;
int g_b=20;

// const修饰的全局常量
const int c_a=10;
const int c_b=20;

int main01(int argc, const char * argv[]) {
    // insert code here...
    
    // 全局区
    // 全局变量，静态变量，常量
    
    // 普通局部变量
    int a = 10;
    int b = 20;
    
    // 静态变量，在普通变量前面加staict ，属于静态变量
    static int s_a = 10;
    static int s_b = 20;
    
    // const 常量
    // const 修饰的局部变量
    const int c_l_a = 10;
    const int c_l_b = 20;
    
    cout << "局部变量 a 的地址：" << &a << endl;
    cout << "局部变量 b 的地址：" << &b << endl;
    
    cout << "全局变量 g_a 的地址：" << &g_a << endl;
    cout << "全局变量 g_b 的地址：" << &g_b  << endl;
    
    cout << "静态变量 s_a 的地址：" << &s_a << endl;
    cout << "静态变量 s_b 的地址：" << &s_b << endl;
    
    // 字符串常量
    cout << "字符串常量的为：" << &"hello" << endl;
    
    cout << "const修饰的全局常量：" << &c_a << endl;
    cout << "const修饰的全局常量：" << &c_b  << endl;
    
    cout << "const修饰的局部常量：" << &c_l_a << endl;
    cout << "const修饰的局部常量：" << &c_l_b  << endl;
    
    
    string s;
    cin >> s;
    cout << s<< endl;
    
    cout << "sss" << endl;
    
   
    return 0;
}
