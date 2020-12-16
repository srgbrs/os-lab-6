//
//  main.c
//  lab6OS_C
//
//  Created by Sergey on 8.12.2020.
//

#include <stdio.h>
#include <unistd.h>

void new_func1(void);

int resultOfSum(int a, int b)
{
    return a+b;
}

int func1(int a, int b)
{
    int res = 0;
    for(int i = 0; i < 10; i++)
    {
        sleep(1);
        if(i>8)
            res = resultOfSum(a, b);
        if(res > 0)
            return res;
    }
    return res;
}
int func2(int a, int b)
{
    int res = 0;
    for(int i = 0; i < 10; i++)
    {
        int res = func1(a, b);
        if(res > 0)
            return res;
    }

    return 0 ;
}


int main(int argc, const char * argv[]) {
    func2(51, 110);
    return 0;
}
