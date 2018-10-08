//
// Created by davepj007 on 07/10/18.
//

#ifndef ALGORITMOS_DE_ENCRIPTACION_CIFRADOCESAR_H
#define ALGORITMOS_DE_ENCRIPTACION_CIFRADOCESAR_H

#include <cstring>
#include <cctype>
#include <iostream>

class Cesar {
private:
    std::string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string texto;

public:
    Cesar(std::string origen);
    std::string encriptar();
    std::string desencriptar();
    std::string minToMay(std::string texto);
};


#endif //ALGORITMOS_DE_ENCRIPTACION_CIFRADOCESAR_H
