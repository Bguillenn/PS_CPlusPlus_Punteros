#include <iostream>
#include <string>
#include "Juego.h"

using namespace std;

int main(){
    string word_to_search;
    cout<<"Ingresa una palabra: "; cin>>word_to_search;

    Juego game(word_to_search);
    char letra;
    //SEGUIREMOS PIDIENDO LETRAS MIENTRAS EL JUEGO CONTINUE
    while(game.getStatus() == Juego::GAME_IN_PROCESS){
        cout<<"Ingresa una letra: ";cin>>letra;
        game.verifyChar(letra);
    }

    if(game.getStatus() == Juego::GAME_WIN){
        cout<<"FELICIDADES GANASTE EL JUEGO!"<<endl;
    }else{
        cout<<"INTENTALO OTRA VEZ :( "<<endl;
    }
    
    return 0;
}