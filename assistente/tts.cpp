#include <sapi.h>
#include <iostream>
#include "tts.h"
#include <sstream>
#include <string>

void Basictts::send_tts(std::string text)
{
    CoInitialize(NULL);
    ISpVoice* pVoice = NULL;

    std::wstring wideText(text.begin(), text.end());
    if (FAILED(CoCreateInstance(CLSID_SpVoice, NULL, CLSCTX_ALL, IID_ISpVoice, (void**)&pVoice))) {
        CoUninitialize();
        return;
    }

    
    pVoice->SetRate(0);
    pVoice->SetVolume(100);

    pVoice->Speak(wideText.c_str(), 0, NULL);

    pVoice->Release();
    CoUninitialize();
}
