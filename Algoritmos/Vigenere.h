//
// Created by davepj007 on 07/10/18.
//

#ifndef ALGORITMOS_DE_ENCRIPTACION_VIGENERE_H
#define ALGORITMOS_DE_ENCRIPTACION_VIGENERE_H

#include <iostream>


class Vigenere {
private:
    std::string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int tabla[26][26];
    std::string texto, clave;

    std::string minToMay(std::string texto);
    void crearTablaVigenere();
public:
    Vigenere(std::string texto, std::string clave, int opc);
    std::string mapClaveMsj(std::string texto, std::string clave);
    void encriptar(std::string texto, std::string clave);
    void desencriptar(std::string texto, std::string clave);
    int itrCount(int key, int msj);
};


#endif //ALGORITMOS_DE_ENCRIPTACION_VIGENERE_H
