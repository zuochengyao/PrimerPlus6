//
//  cpp_enum.h
//  PrimerPlus6
//
//  Created by 左程耀 on 2018/6/20.
//  Copyright © 2018年 Cheero. All rights reserved.
//

#ifndef cpp_enum_h
#define cpp_enum_h

enum spectrum{
    red, orange, yellow, green, blue, violet, indigo, ultraviolet
};

enum bits {
    one = 1, two = 2, four = 4, eight = 8
};

enum bigstep {
    first /* 0 */, second = 100, third /* 101，默认+1 */
};

// 可以创建多个值相同的枚举
enum {
    zero, null = 0, one, numero_uno = 1
};

#endif /* cpp_enum_h */
