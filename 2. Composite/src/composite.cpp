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
    cin.get(); // (cin >> year).get() or (cin >> year).get(ch)
    cout << "What is its street address?\n";
    char address[80];
    cin.getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!\n";
}

void str_type1()
{
    char char_r1[20];
    char char_r2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    cout << "Enter a kind of feline: ";
    cin >> char_r1;
    cout << "Enter another kind of feline: ";
    cin >> str1;
    cout << "Here are some felines:\n";
    cout << char_r1 << " " << char_r2 << " " << str1 << " " << str2 << endl;
    cout << "The third letter in " << char_r2 << " is " << char_r2[2] << endl;
    cout << "The third letter in " << str2 << " is " << str2[2] << endl;
}

void str_type2()
{
    string s1 = "penguin";
    string s2, s3;
    
    cout << "You can assign one string object to another: s2 = s1\n";
    s2 = s1;
    cout << "s1: " << s1 << ", s2: " << s2 << endl;
    cout << "You can assign a C-style string to a string object.\n";
    cout << "s2 = \"buzzard\"\n";
    s2 = "buzzard";
    cout << "You can concatenate strings: s3 = s1 + s2\n";
    s3 = s2 + s1;
    cout << "s3: " << s3 << endl;
    cout << "You can append strings.\n";
    s1 += s2;
    cout << "s1 += s2 yields s1 = " << s1 << endl;
    s2 += "for a day";
    cout << "s2 += \" for a day\" yields s2 = " << s2 << endl;
}

void str_type3()
{
    char char_r1[20];
    char char_r2[20] = "jaguar";
    string str1;
    string str2 = "panther";
    
    str1 = str2; // copy str2 to str1
    strcpy(char_r1, char_r2); // copy char_r2 to char_r1
    str1 += " paste"; // add paste to end of str1
    strcat(char_r1, " juice"); // add juice to end of char_r1
    cout << "The string " << str1 << " contains " << str1.size() << " characters.\n";
    cout << "The string " << char_r1 << " contains " << strlen(char_r1) << " characters.\n";
}

void str_type4()
{
    char charr[20];
    string str;
    // 对于未被初始化的数据，第一个空字符的出现位置是随机的，所以strlen(charr)长度可能不同
    cout << "Length of string in charr before input: " << strlen(charr) << endl;
    cout << "Length of string in str before input: " << str.size() << endl;
    cout << "Enter a line of text:\n";
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text:\n";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    cout << "Length of string in charr after input: " << strlen(charr) << endl;
    cout << "Length of string in str after input: " << str.size() << endl;
}

void struct_ur()
{
    inflatable guest = {"Glorious Gloria", 1.88, 29.99};
    inflatable pal = {"Audacious Arthur", 3.12, 32.99};
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";
    cout << "You can have both for $" << guest.price + pal.price << "!\n";
}

void assgn_st()
{
    inflatable bouquet = {"sunflowers", 0.20, 12.49};
    inflatable choice;
    cout << "bouquet: " << bouquet.name << " for $" << bouquet.price << endl;
    choice = bouquet;
    cout << "choice: " << choice.name << " for $" << choice.price << endl;
}

void struct_arr()
{
    inflatable guests[2] =
    {
        {"Glorious Gloria", 1.88, 29.99},
        {"Audacious Arthur", 3.12, 32.99}
    };
    cout << "The guests " << guests[0].name << " and " << guests[1].name << "\nhave a combine volume of " << guests[0].volume + guests[1].volume << " cubic feet.\n";
}

void get_addr()
{
    int donuts = 6;
    double cups = 4.5;
    cout << "donuts value = " << donuts << " and donuts address = " << &donuts << endl;
    cout << "cups value = " << cups << " and cups address = " << &cups << endl;
}

void pointer()
{
    int updates = 6;
    int *p_updates = &updates;
    
    cout << "Values: updates = " << updates << ", *p_updates = " << *p_updates << endl;
    cout << "Address: &updates = " << &updates << ", p_updates = " << p_updates << endl;
    *p_updates = *p_updates + 1;
    cout << "Now updates = " << updates << endl;
}

void use_new()
{
    int nights  = 1001;
    int *pt = new int;
    *pt = 1001;
    
    cout << "nights value = " << nights << ": location " << &nights << endl;
    cout << "int value = " << *pt << ": location = " << pt << endl;
    double *pd = new double;
    *pd = 10000001.0;
    cout << "double value = " << *pd << ": location = " << pd << endl;
    cout << "location of pointer pd: " << &pd << endl;
    cout << "size of pt = " << sizeof(pt) << ": size of *pt = " << sizeof(*pt) << endl;
    cout << "size of pd = " << sizeof(pd) << ": size of *pd = " << sizeof(*pd) << endl;
    delete pt;
    delete pd;
    int *psome = new int[10];
    delete []psome;
}

void point_array()
{
    double *p = new double[3];
    p[0] = 0.2;
    p[1] = 0.5;
    p[2] = 0.8;
    cout << "p[1] is " << p[1] << endl;
    p += 1;
    cout << "Now p[0] is " << p[0] << " and " << "p[1] is " << p[1] << endl;
    cout << "p[2] = " << p[2] << endl;
    p -= 1;
    cout << "p[0] = " << p[0] << endl;
    delete []p;
}

void addpntrs()
{
    double wages[3] = {10000.0, 20000.0, 30000.0};
    short stacks[3] = {3, 2, 1};
    double *pw = wages;
    short *ps = &stacks[0];
    
    cout << "pw = " << pw << ", *pw = " << *pw << endl;
    cout << "&wages = " << &wages << ", wages = " << wages[0] << endl;
    pw += 1;
    cout << "add 1 to the pw pointer:\n";
    cout << "pw = " << pw << ", *pw = " << *pw << "\n\n";
    
    cout << "ps = " << ps << ", *ps = " << *ps << endl;
    ps += 1;
    cout << "add 1 to the ps pointer:\n";
    cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";
    
    cout << "access two elements with array notation\n";
    cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
    cout << "access two elements with pointer notation\n";
    cout << "*stacks = " << *stacks << ", *(stacks + 1) = " << *(stacks + 1) << endl;
    cout << sizeof wages << " = sizeof wages array\n";
    cout << sizeof(pw) << " = sizeof pw pointer\n";
}

void ptrstr()
{
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;
    
    cout << animal << " and " << bird << endl;
    cout << "Enter a kind of animal: ";
    cin >> animal;
    ps = animal;
    cout << ps << "!\n";
    cout << "Before using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << " at " << (int *) ps << endl;
    
    ps = new char[strlen(animal) + 1];
    strcpy(ps, animal);
    cout << "After using strcpy():\n";
    cout << animal << " at " << (int *) animal << endl;
    cout << ps << "at " << (int *) ps << endl;
    delete []ps;
}

void new_strct()
{
    inflatable *ps = new inflatable;
    cout << "Enter name of inflatable item: ";
    cin.get(ps->name, 20);
    cout << "Enter volume in cubic feet: ";
    cin >> (*ps).volume;
    cout << "Enter price: $";
    cin >> ps->price;
    cout << "Name: " << (*ps).name << endl;
    cout << "Volume: " << ps->volume << "cubic feet\n";
    cout << "Price: $" << ps->price << endl;
    delete ps;
}

char *getname()
{
    char tmp[20];
    cout << "Enter last name: ";
    cin >> tmp;
    char *pn = new char[strlen(tmp) + 1];
    strcpy(pn, tmp);
    return pn;
}

void mixtypes()
{
    antarctica_years_end s1, s2, s3;
    s1.year = 1998;
    antarctica_years_end *pa = &s2;
    pa->year = 1999;
    antarctica_years_end trio[3];
    trio[0].year = 2003;
    cout << trio->year << endl;
    const antarctica_years_end *arp[3] = {&s1, &s2, &s3};
    cout << arp[1]->year << endl;
    const antarctica_years_end **ppa = arp;
    auto ppb = arp;
    cout << (*ppa)->year << endl;
    cout << (*(ppb + 1))->year << endl;
}

void choices()
{
    double a1[4] = {1.2, 2.1, 3.4, 4.7};
    // C++98
    vector<double> a2(4);
    a2[0] = 1.0/3.0;
    a2[1] = 1.0/3.0;
    a2[2] = 1.0/3.0;
    a2[3] = 1.0/3.0;
    // C++11
    array<double, 4> a3 = {3.5, 1.3, 5.6, 8.8};
    array<double, 4> a4 = a3;
    
    cout << "a1[2]: " << a1[2] << " at " << &a1[2] << endl;
    cout << "a2[2]: " << a2[2] << " at " << &a2[2] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
    
    a1[-2] = 20.2;
    a1[-1] = 10.2;
    cout << "a1[-2]: " << a1[-2] << " at " << &a1[-2] << endl;
    cout << "a1[-1]: " << a1[-1] << " at " << &a1[-1] << endl;
    cout << "a1[0]: " << a1[0] << " at " << &a1[0] << endl;
    cout << "a3[2]: " << a3[2] << " at " << &a3[2] << endl;
    cout << "a4[2]: " << a4[2] << " at " << &a4[2] << endl;
}
