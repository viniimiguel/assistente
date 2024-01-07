#include <iostream>
#include "date.h"
#include "clock.h"
#include "stt.h"
#include <thread>
#include <Windows.h>
int main()
{
    std::string msg = "mensagem";
    Date* d1 = new Date();
    Clock* c1 = new Clock();
    Basicstt* stt1 = new Basicstt();
    Basictts* tts1 = new Basictts();
    bool control = false;

    while(true)
    {
        stt1->input_stt();
            if (stt1->resultado.find("dia de hoje") != std::string::npos)
            {
                d1->getday();
            }
    }

    

    
    return 0;
}


