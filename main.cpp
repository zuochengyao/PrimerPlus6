//
//  main.cpp
//  HelloCPP
//
//  Created by 左程耀 on 2018/6/11.
//  Copyright © 2018年 Cheero. All rights reserved.
//

#include "main.h"

int main (int argc, const char * argv[])
{
    choices();
}

void get_name()
{
    char *name = getname();
    cout << name << " at " << (int*) name << endl;
    delete [] name;
    
    name = getname();
    cout << name << " at " << (int*) name << endl;
    delete [] name;
}
