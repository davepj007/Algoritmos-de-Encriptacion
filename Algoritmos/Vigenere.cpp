//
// Created by davepj007 on 07/10/18.
//

#include "Vigenere.h"

Vigenere::Vigenere(std::string texto, std::string clave, int opc) {
    mapClaveMsj(texto, clave);
    if(opc == 1) {
        encriptar(this->texto, this->clave);
    }
    else {
        desencriptar(this->texto, this->clave);
    }
}

std::string Vigenere::mapClaveMsj(std::string texto, std::string clave) {
    texto = minToMay(texto);
    clave = minToMay(clave);

    std::string mapClave = "";
    for (int i = 0, j = 0; i < texto.length(); i++) {
        if(texto[i] == 32){
            mapClave += 32;
        }
        else{
            if(j < clave.length()){
                mapClave += clave[j];
                j++;
            }
            else{
                j = 0;
                mapClave += clave[j];
                j++;
            }
        }
    }
    this->texto = texto;
    this->clave = mapClave;
}

void Vigenere::encriptar(std::string texto, std::string clave) {
    crearTablaVigenere();
    std::string textoEncr = "";

    for (int i = 0; i < texto.length(); i++) {
        if(texto[i] == 32 && clave[i] == 32){
            textoEncr += " ";
        }
        else{
            int x = (int)texto[i]-65;
            int y = (int)clave[i]-65;
            textoEncr += (char)tabla[x][y];
        }
    }
    std::cout << "Resultado encriptacion: " << textoEncr << std::endl;
}

void Vigenere::desencriptar(std::string texto, std::string clave) {
    std::string textoDesencr = "";
    for (int i = 0; i < texto.length(); i++) {
        if(texto[i] == 32 && clave[i] == 32){
            textoDesencr += " ";
        }
        else{
            int temp = itrCount((int) clave[i], (int)texto[i]);
            textoDesencr += (char)(65+temp);
        }
    }
    std::cout << "Resultado desencriptacion: " << textoDesencr << std::endl;
}

int Vigenere::itrCount(int key, int msj) {
    int cont = 0;
    std::string res = "";

    for (int i = 0; i < 26; i++) {
        if(key+i > 90){
            res += (char)(key+(i-26));
        }
        else{
            res += (char)(key+i);
        }
    }

    for (int j = 0; j < res.length(); j++) {
        if(res[j] == msj){
            break;
        }
        else{
            cont++;
        }
    }
    return cont;
}

void Vigenere::crearTablaVigenere() {
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            int temp;
            if((i+65)+j >90){
                temp = (i+65)+j - 26;
                tabla[i][j] = temp;
            }
            else{
                temp = (i+65)+j;
                tabla[i][j] = temp;
            }
        }
    }
}

std::string Vigenere::minToMay(std::string texto) {
    for (int i = 0; i < texto.length(); i++) {
        texto[i] = toupper((char)texto[i]);
    }
    return texto;
}