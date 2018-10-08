//
// Created by davepj007 on 07/10/18.
//

#include "Feistel.h"

Feistel::Feistel(std::string texto, int clave) {
    this->texto = texto;
    this->clave = clave;
}

void Feistel::encriptar() {
    int temp = 0, left = 0, right = 0;

    // pad to even length
    if((texto.size() % 2) != 0){
        texto.append(" ");
    }
// first loop cycles through string
    for(int i = 0; i <= texto.size() - 1; i += 2)
    {
        left = texto.at(i);
        right = texto.at(i + 1);

// Feistal cipher second loop
        for(int j = 0; j < 3; j++)
        {
            temp = right;

// Third loop is to find LCG
            for(int k = 0; k < clave + j; k++)
            {

                right = ((A * right + C) % M);

            }
            right = left ^ right; // compares left and right character
            left = temp;


        }
        if (right < 16) {
            std::cout << "0";
        }
        std::cout << std::hex << right; // prints left character
        if (left < 16) {
            std::cout << "0";
        }
        std::cout << std::hex << left; // prints right character

    }
}