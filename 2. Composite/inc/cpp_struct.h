//
//  cpp_struct.h
//  PrimerPlus6
//
//  Created by Work on 2018/6/14.
//  Copyright © 2018年 Cheero. All rights reserved.
//

#ifndef cpp_struct_h
#define cpp_struct_h

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

struct widget
{
    char brand[20];
    int type;
    union id
    {
        long id_num;
        char id_char[20];
    } id_val;
};

void struct_ur();
void assgn_st();
void struct_arr();

#endif /* cpp_struct_h */
