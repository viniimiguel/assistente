#include <iostream>
#include "date.h"
#include "clock.h"
#include <sstream>
#include <thread>


int main()
{
    std::string msg = "mensagem";
    Date* d1 = new Date();
    Clock* c1 = new Clock();


    c1->temporizerc(10);

    
    return 0;
}


