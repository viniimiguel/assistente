#include <iostream>
#include <cstdlib>
#include "stt.h"

void Basicstt::input_stt() {
    std::string caminhoDoScript = "C:\\Users\\vinicius\\Desktop\\c++\\assistente\\assistente\\python\\project\\spr.py";

    std::string comando = "python " + caminhoDoScript;

    FILE* pipe = _popen(comando.c_str(), "r");
    if (!pipe) {
        throw std::runtime_error("Falha ao abrir o pipe para o comando.");
    }

    char buffer[128];

    try {
        while (fgets(buffer, sizeof(buffer), pipe) != nullptr) {
            std::cout << buffer;
            resultado = buffer;
            
        }
    }
    catch (...) {
        _pclose(pipe);
        throw;
    }

    _pclose(pipe);
}
