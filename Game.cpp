# include <iostream>
using namespace std;

class Game {
private:
    int targetNumber;

public:
    Game() {
        srand(time(0));
        targetNumber = rand() % 100 + 1; // 生成1到100之間的隨機數字
    }

    bool guess(int number) {
        if (number == targetNumber) {
            cout << "恭喜！你猜對了！" << endl;
            return true;
        } else if (number < targetNumber) {
            cout << "太小了，再試一次。" << endl;
        } else {
            cout << "太大了，再試一次。" << endl;
        }
        return false;
    }
};