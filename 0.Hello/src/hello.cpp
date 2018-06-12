//
//  hello_cpp.cpp
//  PrimerPlus6
//
//  Created by 左程耀 on 2018/6/11.
//  Copyright © 2018年 Cheero. All rights reserved.
//

#include "hello.h"

void simon(int times)
{
    cout << "Simon says touch your toes " << times << " times " << endl;
}

void math()
{
    double area;
    cout << "Enter the floor area, in square feet, of your home: ";
    cin >> area;
    double side;
    side = sqrt(area);
    cout << "That's the equivalent of a square " << side << " feet to the side." << endl;
}

int stoneTolb(int sts)
{
    return STONE_TOLB_VAL * sts;
}

