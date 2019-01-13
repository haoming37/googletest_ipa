//
//  myint.hpp
//  testapp
//
//  Created by Mac on 2019/01/11.
//  Copyright © 2019 Mac. All rights reserved.
//

#ifndef myint_hpp
#define myint_hpp

#include <stdio.h>
class MyInt
{
public:
    MyInt(int num);
    bool isOdd();
    bool isEven();
private:
    int num_;
};
#endif /* myint_hpp */
