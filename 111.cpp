#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL , "Russian");
    char number;
    cout << "Меню" << endl << "1. Big King Combo" << endl << "2. Big King XXL Combo" << endl << "3. Twister Combo" << endl;
    cout << "Введите цифру блюда: ";
    cin >> number;
 
    switch (number){
    case '1':
        cout << "Вы выбрали №1. Big King Combo" << endl << "Цена 1390 тг.";
        break;
    case '2':
        cout << "Вы выбрали №2. Big King XXL Combo" << endl << "Цена 1590 тг.";
        break;
    case '3':
        cout << "Вы выбрали №3. Twister Combo" << endl << "Цена 1290 тг.";
        break;
    default:
        cout << "Введите корректный номер заказа";
    }
    char c;
    cout << endl << "Купить y/n: ";
    cin >> c;
    switch (c){
    case 'y':
        cout << "Спасибо за покупку.";
        break;
    case 'n':
        exit(1);
        break;
    default:
        cout << "Покупайте или до свидания.";
    }
    return 0;
}




