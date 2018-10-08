//
// Created by davepj007 on 07/10/18.
//

#include "Cesar.h"

Cesar::Cesar(std::string origen) {
    this->texto = origen;
}

std::string Cesar::encriptar() {
    texto = minToMay(texto);
    int j;
    for(int i = 0; i < texto.length(); i++){
        j=0;
        while(j < 52){
            if(texto[i] == letras[j] && (j < 23 || (j >= 26 && j < 49))){
                texto[i] = letras[j+3];
                j = 52;
            }
            if(texto[i] == letras[j] && (j >= 49 && j < 52)){
                if(texto[i]=='X'){
                    texto[i]='A';
                }
                if(texto[i]=='Y'){
                    texto[i]='B';
                }
                if(texto[i]=='Z'){
                    texto[i]='C';
                }
                j=52;
            }
            j++;
        }
    }

    return texto;
}

std::string Cesar::desencriptar() {
    texto = minToMay(texto);
    int j;
    for(int i = 0; i < texto.length(); i++){
        j=0;
        while(j < 52){
            if(texto[i] == letras[j] && (j < 23 || (j < 26 && j < 49))){
                texto[i] = letras[j-3];
                j = 52;
            }
            if(texto[i] == letras[j] && (j < 49 && j < 52)){
                if(texto[i]=='A'){
                    texto[i]='X';
                }
                if(texto[i]=='B'){
                    texto[i]='Y';
                }
                if(texto[i]=='C'){
                    texto[i]='Z';
                }
                j=52;
            }
            j++;
        }
    }
    return texto;
}

std::string Cesar::minToMay(std::string texto) {
    for (int i = 0; i < texto.length(); i++) {
        texto[i] = toupper((char)texto[i]);
    }
    return texto;
}