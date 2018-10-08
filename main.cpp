//
// Created by davepj007 on 07/10/18.
//

#include "Algoritmos/Cesar.h"
#include "Algoritmos/Vigenere.h"

#include <stdlib.h>
#include <iostream>

int main(){
    std::string texto = "Hola Mundo!";

    std::cout << "** Cifrado Cesar **" << std::endl;
    Cesar cs = Cesar(texto);
    std::string encr = cs.encriptar();
    std::cout << "Resultado encriptacion: " << encr << std::endl;

    std::string desencr = Cesar(encr).desencriptar();
    std::cout << "Resultado desencriptacion: " << desencr << std::endl;

    std::cout << "\n** Cifrado Vigenere **" << std::endl;
    Vigenere vg = Vigenere(texto, "key", 1);
    Vigenere vg1 = Vigenere("RSJK QSXHM", "key", 2);
}