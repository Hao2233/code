//
//  main.cpp
//  通讯录管理项目
//
//  Created by HAO on 2020/9/28.
//  Copyright © 2020年 HAO. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
#define MAX 1000

// 设计联系人结构体
struct Person
{
    //姓名
    string m_Name;
    // 性别 1.男 2.女
    int m_Sex;
    // 年龄
    int m_Age;
    // 电话
    string m_Phone;
    // 住址
    string m_Addr;
};

// 设计通讯录结构体
struct Addressbooks
{
    // 通讯录中保存的联系人数组
    struct Person personArray[MAX];
    
    // 通讯录中当前记录联系人个数
    int m_Size;
};

// 1. 添加联系人
void addPerson(Addressbooks * ads)
{
    // 判断通讯录是否满了
    if(ads->m_Size==MAX)
    {
        cout << "通讯录已满，无法再添加！！！" << endl;
        return ;
    }
    else
    {
        // 添加具体联系人

        // 姓名
        string name;
        cout << "请输入一个名字："<< endl;
        cin>> name;
        ads->personArray[ads->m_Size].m_Name=name;
        // 性别
        cout << "请输入性别：" << endl;
        cout << "1. 男 2. 女" <<endl;
        int sex=0;
        while (true)
        {
            // 如果输入的是1或2 可以退出循环，因为输入的是正确的
            // 如果输入错误，需要重新输入
            cin >> sex;
            if(sex==1|| sex ==2)
            {
                ads->personArray[ads->m_Size].m_Sex=sex;
                break;
            }
            cout << "输入错误，请输入 1 或2 ";

        }
    
        // 年龄
        cout << "请输入年龄：" << endl;
        int age=0;
        cin >> age;
        ads->personArray[ads->m_Size].m_Age=age;
        // 电话
        string phone;
        cout<< "请输入练习电话："<< endl;
        cin >> phone;
        ads->personArray[ads->m_Size].m_Phone=phone;

        // 住址
        string address;
        cout << "请输入地址："<< endl;
        cin >> address;
        ads->personArray[ads->m_Size].m_Addr=address;

        // 更新通讯录
        ads->m_Size++;

        // 提示用户
        cout<< "添加成功！！！" << endl;
    }
    
}

// 显示联系人功能
void showPerson(Addressbooks * ads)
{
    // 首先判断通讯录人数是否为空
    if(ads->m_Size==0)
    {
        cout << "当前记录为空！！"<<endl;
    }
    else
    {
        for(int i=0;i < ads->m_Size;i++)
        {
            cout << "姓名：" << ads->personArray[i].m_Name<< "\t";
            cout << "年龄：" << ads->personArray[i].m_Age<< "\t";
            cout << "性别：" << (ads->personArray[i].m_Sex==1 ? "男" : "女" )<< "\t";
            cout << "手机：" << ads->personArray[i].m_Phone<< "\t";
            cout << "地址：" << ads->personArray[i].m_Addr<< endl;
        }
    }
}

// 检测联系人是否存在，存在返回位置，不存在返回-1
int isExist(Addressbooks * ads,string name)
{
    for(int i=0;i<ads->m_Size;i++)
    {
        // 找到联系人
        if(ads->personArray[i].m_Name == name)
        {
            return i;
        }     
    }
    // 遍历结束没有找到
    return -1;
}

// 删除联系人
void deletePreson(Addressbooks * ads)
{
    cout << "请输入你要删除的联系人" << endl;
    string name;
    cin >> name;
    int ret=isExist(ads,name);

    if(ret !=-1)
    {
        // 删除查找
        for(int i=ret;i<ads->m_Size;i++)
        {
            // 数据前移
            ads->personArray[i]=ads->personArray[i+1];
        }
        // 更新通讯录中的人员数
        ads->m_Size--;
        cout << "删除成功"<<endl;
    }
    else
    {
        cout << "查无此人！！"<< endl;
    }
    
}

// 查找联系人
void findPerson(Addressbooks * ads)
{
    cout << "请输入你要查找的联系人的姓名:" <<endl;
    string name;
    cin >> name;

    // 判读联系人是否在通讯录中
    int ret=isExist(ads,name);

    if (ret != -1)
    {
        cout << "姓名：" << ads->personArray[ret].m_Name << "\t";
        cout << "性别：" << ads->personArray[ret].m_Sex << "\t";
        cout << "年龄：" << ads->personArray[ret].m_Age << "\t";
        cout << "手机：" << ads->personArray[ret].m_Phone << "\t";
        cout << "地址：" << ads->personArray[ret].m_Addr << endl;
    }
    else
    {
        cout << "查无此人！！！"<< endl;
    }
    
}

// 修改联系人
void modifyPerson(Addressbooks * ads)
{
    cout << "请输入你需要修改的人名：" << endl;
    string name;
    cin >> name;
    
    int ret = isExist(ads,name);

    if (ret != -1)
    {
        // 找到联系人
        cout << "请输入名字："; 
        string name;
        cin >> name;
        ads->personArray[ret].m_Name=name;
        cout << "请输入性别：";
        cout << "1.男，2.女";
        int sex;
        cin >> sex;
        while (true)
        {
            if (sex==1 || sex==2)
            {
                ads->personArray[ret].m_Sex=sex;
                break;
            }
            
                cout << "请重新输入！";
        }
        cout << "请输入年龄：";
        int age;
        cin >> age;
        ads->personArray[ret].m_Age=age;
        cout << "请输入电话：";
        string phone;
        cin >> phone;
        ads->personArray[ret].m_Phone=phone;
        cout << "请输入地址：";
        string add;
        cin >> add;
        ads->personArray[ret].m_Addr=add;
    }
    else
    {
        cout << "没有找到联系人！"<< endl;
    }
}

//  清空联系人
void cleanPerson(Addressbooks * ads)
{
    // 将当前记录人数量置为空
    ads->m_Size=0;
    cout << "通讯录已清空！！" <<endl;
}

// 菜单界面
void showMenu()
{
    cout<< "*********************"<< endl;
    cout<< "*****1. 添加联系人*****"<< endl;
    cout<< "*****2. 显示联系人*****"<< endl;
    cout<< "*****3. 删除联系人*****"<< endl;
    cout<< "*****4. 查找联系人*****"<< endl;
    cout<< "*****5. 修改联系人*****"<< endl;
    cout<< "*****6. 清空联系人*****"<< endl;
    cout<< "*****0. 退出通讯录*****"<< endl;
    cout<< "*********************"<< endl;
}

int main(int argc, const char * argv[]) {
    // 封装函数显示该界面，
    // 在main函数中调出封装好的函数
    
    // 创建通讯录结构体变量
    Addressbooks ads;
    // 初始化通讯录当前人员个数
    ads.m_Size=0;
    
    // 创建用户选择输入的变量
    int select=0;
    while(true)
    {
        // 菜单调用
        showMenu();
        
        cin >> select;
        
        switch (select) {
            
            case 1:
            // 1. 添加联系人
            // 利用地址传递，可以修改实参
                addPerson(&ads);
                break;
            // 2.显示联系人
            case 2:
                showPerson(&ads);
                break;
            // 3. 删除联系人
            case 3:
                deletePreson(&ads);
                break;
            // 4，查找联系人
            case 4:
                findPerson(&ads);
                break;
            // 修改联系人
            case 5:
                modifyPerson(&ads);
                break;
            // 清空联系人0
            case 6:
                cleanPerson(&ads);
                break;
            // 退出通讯录
            case 0:
                cout << "欢迎下次使用！"<< endl;
                return 0;
                break;

            default:
                cout << "请输入正确的数字！" << endl;
                break;
        }
    
    }
}
