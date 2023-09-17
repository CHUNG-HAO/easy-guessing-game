#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

#include "player.cpp"
#include "Game.cpp"


int main() {
    Game game; 
    Player player;

   cout << "歡迎來到猜數字遊戲！" << endl;

    bool hasGuessedCorrectly = false;

    while (!hasGuessedCorrectly) {
        int guess = player.getGuess();
        hasGuessedCorrectly = game.guess(guess);
    }

    return 0;
}
