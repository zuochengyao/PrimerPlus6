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
 程序已正常数学逻辑，结果应该是1，但程序输出是0。
 原因是2.34e+22f是一个小数点左边有23位的数字，但是float类型只能表示前6或7位。
 */
void float_add()
{
    float a = 2.34e+22f;
    float b = a + 1.0f;
    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
}

void arith()
{
    float hats, heads;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Enter a number: ";
    cin >> hats;
    cout << "Enter another number: ";
    cin >> heads;
    
    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
}

void divide()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Integer division: 9/5 = " << 9 / 5 << endl;
    cout << "Floating-point division: 9.0/5.0 = " << 9.0 / 5.0 << endl;
    cout << "Mixed division: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double constants: 1e7/9.0 = " << 1e+7 / 9.0 << endl;
    cout << "float constants: 1e7f/9.0f = " << 1e+7f / 9.0f << endl;
}

void mod()
{
    const int Lbs_per_stn = 14;
    int lbs;
    
    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn; // whole stone
    int pounds = lbs % Lbs_per_stn; // remainder in pounds
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s). " << endl;
}

void assign()
{
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;
    int guess(3.9832);
    int debt = 7.2E+12;
    cout << "tree = " << tree << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
}

void type_cast()
{
    int auks, bats, coots;
    auks = 19.99 + 11.99;
    bats = (int) 19.99 + (int) 11.99;
    coots = int (19.99) + int (11.99);
    
    cout << "auks = " << auks << ", bats = " << bats << ", coots = " << coots << endl;
    char ch = 'Z';
    cout << "The code for " << ch << " is " << int(ch) << endl;
    cout << "Yes, the code is " << static_cast<int>(ch) << endl;
}
