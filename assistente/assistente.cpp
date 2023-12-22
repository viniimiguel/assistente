#include <iostream>
#include "date.h"

int main()
{
    std::cout << "Hello World!\n";
    Date* d1 = new Date();

    d1->gethours();
    d1->getday();
    d1->getmoth();
    d1->getyear();
    return 0;
}


