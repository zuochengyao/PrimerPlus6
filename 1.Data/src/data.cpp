//
//  data.cpp
//  PrimerPlus6
//
//  Created by 左程耀 on 2018/6/11.
//  Copyright © 2018年 Cheero. All rights reserved.
//

#include "data.h"

void sizeof_datatype()
{
    // sizeof operator yields sizes of type or of variable
    cout << "short存储大小：" << sizeof(short) << "字节" << "，最大值：" << SHRT_MAX /* 2^15 - 1 */ << "，最小值：" << SHRT_MIN /* -2^15 */ << endl;
    cout << "int存储大小:" << sizeof(int) << "字节" << "，最大值：" << INT_MAX << "，最小值：" << INT_MIN << endl;
    cout << "long存储大小:" << sizeof(long) << "字节" << "，最大值：" << LONG_MAX << "，最小值：" << LONG_MIN << endl;
    cout << "long long存储大小:" << sizeof(long long) << "字节" << "，最大值：" << LLONG_MAX << "，最小值：" << LLONG_MIN << endl;
}

void hexoct()
{
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;
    
    cout << "chest = " << chest << " (42 in decimal)" << endl;
    cout << "waist = " << waist << " (0x42 in hex)" << endl;
    cout << "inseam = " << inseam << " (042 in octal)" << endl;
}

void hexoct2()
{
    int chest = 42;
    int waist = 42;
    int inseam = 42;
    
    cout /* << dec */ << "chest = " << chest << " (decimal for 42)" << endl;
    cout << hex << "waist = " << waist << " (hexadecimal for 42)" << endl;
    cout << oct << "inseam = " << inseam << " (octal for 42)" << endl;
}

void more_char()
{
    char ch = 'M';
    int i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    cout << "Add one to the character code:" << endl;
    ch += 1;
    i = ch;
    cout << "The ASCII code for " << ch << " is " << i << endl;
    
    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');
    cout << endl << "Done" << endl;
}

void bondini()
{
    cout << "\aOperation \"HyperHype\" is now activated! \n";
    cout << "Enter your agent code:________\b\b\b\b\b\b\b\b";
    long code;
    cin >> code;
    cout << "\aYou entered " << code << "...\n";
    cout << "\aCode verified! Proceed with Plan Z3!\n";
}

void float_num()
{
    // cout会删除结尾的0，通过setf将覆盖这种行为
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mint = 10.0 / 3.0;
    const float million = 1.0e6;
    
    cout << "tub = " << tub;
    cout << ", a million tubs = " << million * tub;
    cout << ", \nand ten million tubs = ";
    cout << 10 * million * tub << endl;
    
    cout << "mint = " << mint << " and a million mints = ";
    cout << million * mint << endl;
}

/*
 程序已正常数学逻辑，结果应该是1，但程序输出是0。原因是2.34e+22f是一个小数点左边
 */
void float_add()
{
    float a = 2.34e+22f;
    float b = a + 1.0f;
    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
}
