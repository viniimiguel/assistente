#include <iostream>
#include "date.h"
#include "clock.h"



int main()
{
    std::cout << "Hello World!\n";
    Date* d1 = new Date();
    Clock* c1 = new Clock();

    d1->alarm(0, 0);
    c1->cronometer();
    std::cout << "hello world" << std::endl;
    
    return 0;
}


