#include <iostream>
using namespace std;

class Player {
public:
    int getGuess() {
        int guess;
        cout << "請輸入你的猜測：";
        cin >> guess;
        return guess;
    }
};