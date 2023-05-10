#include <iostream>
#include <ctime>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    cout << "=======ТЕКСТОВЫЙ КВЕСТ=======\n\n";
    cout << "Вы, путник, оказались в катакомбах. Ваша задача - выбраться отсюда живым.\n\n";

    srand(time(NULL));
    int war;
    cout << "###Введите уровень сложности от 1 до 10###" << endl;
    cin >> war;
    int current_floor = war;
    while (current_floor <= war) {
        cout << "Вы находитесь на " << current_floor << " этаже. Выберите направление:\n";
        cout << "1 - Прямо\n2 - Налево\n3 - Направо\n";
        int direction;
        cin >> direction;
        int trap = rand() % 3 + 1;
        if (direction < 1 || direction > 3) {
            cout << "Вы ввели неверное число. Попробуйте еще раз.\n";
            continue;
        }
        if (direction == trap) {
            cout << "Увы, вы попали в ловушку и погибли.\n";
            break;
        }
        else {
            cout << "Вы продолжаете свой путь.\n";
            current_floor++;
        }
    }

    if (current_floor > war) {
        cout << "Поздравляем, вы выбрались из катакомб живым!\n";
    }
    else {
        cout << "Игра окончена.\n";
    }

    return 0;
}