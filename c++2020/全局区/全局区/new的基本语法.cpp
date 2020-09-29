/*
 * @Author: your name
 * @Date: 2020-09-29 15:26:46
 * @LastEditTime: 2020-09-29 16:07:25
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: /code/c++2020/全局区/全局区/new的基本语法.cpp
 */
//
//  new的基本语法.cpp
//  全局区
//
//  Created by HAO on 2020/9/29.
//  Copyright © 2020年 HAO. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int * func()
{
    // 在堆区创建整型数据
    // new返回是该数据类型的指针
    int * p=new int(10);
    
    return p;
}

void test01()
{
    int *p=func();
    cout << p<< endl;
    cout << p<< endl;
    cout << p<< endl;
    
    // 利用delete关键字我们可以释放堆区的内存
    delete p;
    
    // 会报错，因为内存已经释放
    //cout << p << endl;
}

// 在堆区利用new开辟数组
void test02()
{
    // 创建10整型数据的数组，在堆区
    // 10代表数组由10个元素
    int * arr=new int[10];

    for(int i=0;i<10;i++)
    {
        // 给10个元素赋值100～109
        arr[i]=i+100;
    }
    for(int i=0;i<10;i++)
    {
        cout << arr[i] << endl;
    }

    // 释放堆区数组
    // 释放数组堆时候，要加[]才可以
    delete[] arr;

}




int main()
{
    // 1. new 的基本用法
    // 2. 在堆区利用new
    test01();
    
    
    
    return 0;
}
