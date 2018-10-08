//
// Created by davepj007 on 07/10/18.
//

#ifndef ALGORITMOS_DE_ENCRIPTACION_FEISTEL_H
#define ALGORITMOS_DE_ENCRIPTACION_FEISTEL_H

#include <iostream>
#include <stdlib.h>

class Feistel {
private:
    std::string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string texto;
    int clave;

    const int A = 101, C = 12, M = 121;
public:
    Feistel(std::string texto, int clave);
    void encriptar();
    void desencriptar();
    std::string minToMay(std::string texto);
};


#endif //ALGORITMOS_DE_ENCRIPTACION_FEISTEL_H
