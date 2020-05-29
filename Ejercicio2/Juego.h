#ifndef JUEGO_H
#define JUEGO_H

#include <string>
using namespace std;

class Juego{
    private:
        const string lifes_string[7] = {
            //0 life
            string("==>\n |\n O\n/|\\ \n/ \\ \n"),
            //1 Life
            string("==>\n |\n O\n/|\\ \n/\n"),
            // 2 Life
            string("==>\n |\n O\n/|\\ \n\n"),
            // 3 Life
            string("==>\n |\n O\n/|\n\n"),
            // 4 Life
            string("==>\n |\n O\n |\n\n"),
            // 5 Life
            string("==>\n |\n O \n\n\n"),
            // 6 Life
            string("==>\n |\n\n\n\n")
          };
        string secret_word;
        string public_word;
        int lifes;
        int game_status; //0-In-Proccess 1 = Win 2 = Loose
        void setGameStatus(int);
        string wordToAsterisk(string word);
        int findChar(char,string);
        void loseLife();
    public:
        static const int GAME_IN_PROCESS = 0;
        static const int GAME_WIN = 1;
        static const int GAME_LOSE = 2;
        Juego(string);
        ~Juego();
        void verifyChar(char);
        void showPublicWord();
        void showLifeString();
        int getLifes();
        int getStatus();
};

#include "Juego.cpp"
#endif // !JUEGO_H
