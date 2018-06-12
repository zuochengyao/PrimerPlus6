//
//  composite.cpp
//  PrimerPlus6
//
//  Created by 左程耀 on 2018/6/12.
//  Copyright © 2018年 Cheero. All rights reserved.
//

#include "composite.h"

void array_one()
{
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;
    
    int yamcosts[3] = {20, 30, 5};
    cout << "Total yams = " << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs " << yamcosts[1] << " cents per yam. \n";
    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1] + yams[2] * yamcosts[2];
    cout << "The total yam expense is " << total << " cents." << endl;
    cout << "\nSize of yams array = " << sizeof yams << " bytes." << endl;
    cout << "Size of one element = " << sizeof yams[0] << " bytes." << endl;
}

void string_char()
{
    const int SIZE = 15;
    char name1[SIZE];
    char name2[SIZE] = "C++PrimerPlus";
    cout << "Howdy! I'm " << name2 << "! What's your name?" << endl;
    cin >> name1;
    cout << "Well, " << name1 << ", your name has " << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof name1 << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[5] = '\0';
    cout << "Here are the first 3 characters of my name: " << name2 << endl;
}

/*
 当第一次输入Zero Cheero时，发现程序并不会阻塞等待你输入dessert。
 原因是cin使用空白来确定字符串的结束位置，意味着cin每次只读取一个单词。
 所以使用getline()来读取一行的输入，见instr2()。
 */
void instr_1()
{
    const int AR_SIZE = 20;
    char name[AR_SIZE];
    char dessert[AR_SIZE];
    
    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}

void instr_2()
{
    const int AR_SIZE = 20;
    char name[AR_SIZE];
    char dessert[AR_SIZE];
    
    cout << "Enter your name:\n";
    cin.getline(name, AR_SIZE);
    cout << "Enter your favorite dessert:\n";
    cin.getline(dessert, AR_SIZE);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}

/*
 get()与getline()方法类似，都是读取至行尾，但get并不再读取并丢弃换行符，而是将其留在输入队列中。
 如果连续调用两次get()，第一次换行符已经留在输入队列，第二次则会认为已经到达行位，而不再进行第二次内容读取。
 解决方案：中间在调用一次get()
 */
void instr_3()
{
    const int AR_SIZE = 20;
    char name[AR_SIZE];
    char dessert[AR_SIZE];
    
    cout << "Enter your name:\n";
    cin.get(name, AR_SIZE).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, AR_SIZE);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
}

void num_str()
{
    cout << "What year was your house built?\n";
    int year;
    cin >> year;
    cin.get();
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
}
