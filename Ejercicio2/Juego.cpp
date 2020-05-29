#include "Juego.h"
#include <iostream>
#include <string>

using namespace std;


string Juego::wordToAsterisk(string word){
    string asterisk = "";
    for(int i = 0; i < word.length(); i++)
        asterisk +="*";
    return asterisk;
}

Juego::Juego(string word){
    secret_word = word;
    public_word = wordToAsterisk(word);
    lifes = 6;
    game_status = Juego::GAME_IN_PROCESS;
}

void Juego::setGameStatus(int status){
    //VALIDAMOS QUE SEA UN ESTADO VALIDO
    game_status = status;
}



void Juego::verifyChar(char letter){
    //VALIDAMOS QUE EL JUEGO SIGA EN PROCESO
    if(game_status != Juego::GAME_IN_PROCESS){
        cout<<"El juego ya termino ! "<<endl;
        return;
    }
    //VALIDAMOS SI LA LETRA EXISTE EN LA PALABRA
    if(findChar(letter, secret_word) == -1){
        cout<<"Letra incorrecta :("<<endl;
        loseLife();
        showLifeString();
        showPublicWord();
        return;
    }
    //VALIDAMOS SI ESQUE YA DESCUBRIMOS ESTA LETRA
    if(findChar(letter, public_word) != -1){
        loseLife();
        showLifeString();
        showPublicWord();
        return;
    }

    for(int i = 0; i < secret_word.length(); i++)
        if(secret_word[i] == letter)
            public_word[i] = letter;

    if(secret_word.compare(public_word) == 0){
        setGameStatus(Juego::GAME_WIN);
    }else{
        cout<<"CORRECTO ENCONTRASTE OTRA LETRA!"<<endl;
        showLifeString();
        showPublicWord();
    }
}

void Juego::loseLife(){
    lifes -= 1;
    if(lifes == 0)
        setGameStatus(Juego::GAME_LOSE);
}

int Juego::getStatus(){
    return game_status;
}

int Juego::findChar(char a,string word){
    for(int i = 0 ;i< word.length(); i++)
        if(word[i] == a) return i;
    return -1;
}

void Juego::showPublicWord(){
    //MOSTRAMOS EL ESTADO DE LA PALABRA A DESCUBRIR
    cout<<public_word<<endl;
}

void Juego::showLifeString(){
    //MOSTRAMOS EL ESTADO DE LAS VIDAS
    cout<<lifes_string[lifes]<<endl;
}

int Juego::getLifes(){
    return lifes;
}


Juego::~Juego(){}