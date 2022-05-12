#include <iostream>
#include <windows.h>
#include <math.h>
#include <algorithm>
#include <ctype.h>
using namespace std;//cctupe
//задание 15
/*
 void func(int a, char b) {
    while (a != 0) {
        a--;
        cout << b;
    }

}
*/



int main()
{
    //задание 15
    //func(15, 'g');


    SetConsoleCP(1251);
    setlocale(LC_ALL, "ru");
    srand(time(0));
    //задание 1
    /*
    int a;
    cout << "введите стоимость покупки";
    cin >> a;
    int b = a / 100;
    if (a > 1000) {
        cout << "стоимость покупки" << b * 90;
    }
    else
        cout << "стоимость покупки" << a;

    //задание 2

    int a, b = 1+rand()%8,c = 1+rand()%8;
    cout << "решите пример"<<" "<<b<<"*" << c<<endl;
    cin >> a;

    if (a == b*c) {
        cout << "Правильно!";
    }
    else
        cout << "Вы ошиблись"<<"   правильный ответ->"<<b*c;

    //задание 3

    int size_foto,lot,a;
    cout << "расценка:"<<" "<<"9x12 - 5руб шт,10x15 - 10руб шт,18х24-15руб шт" << endl;
    cout << "какой размер фото вас интересует?"<<"  " << "выберие 1, если 9х12, 2 - 10х15, 3 - 18х24";
    cin >> a;

    if (a == 1) {
        size_foto = 5;
    }
    else if (a == 2) {
        size_foto = 10;
    }
    else if (a == 3) {
        size_foto = 15;
    }
    else cout << "введите допустимое значение";

    cout << "сколько вам надо фото?";
    cin >> lot;

    int one_procent = lot * size_foto / 100;

    if (lot > 10) {
        cout << "с вас ->" << one_procent * 90;
    }
    else if (lot < 10) {
        cout << "с вас ->" << lot * size_foto;
    }
    else cout << "введите допустимое значение";

    //задание 4
    int a,call;
    cout << "введите код города"<<endl;
    cout << "Владивосток - 423(цена 2,2руб мин),Москва - 495(1руб мин),Мурманск - 815(1,2 руб мин),Самара - 846(1,4 руб мин)";
    cin >> a;
    cout << "введите длительность разговора"<<endl;
    cin >> call;

    switch (a)
    {
    case 423:
        cout << "стоимость разговора->"<<"  " << call * 2.2;
        break;
    case 495:
        cout << "стоимость разговора->" << "  " << call;
        break;
    case 815:
        cout << "стоимость разговора->" << "  " << call*1.2;
        break;
    case 846:
        cout << "стоимость разговора->" << "  " << call*1.4;
        break;
    default:
        cout << "введите коректное значение";
        break;
    }

    //задание 5
    double g = 9.8, t = 0.0,c;
    cout << "time";
    cin >> c;
    for (double i = 0; i < c*2; i ++) {
        cout << t << "     " << g * t << endl;
        t += 0.5;
    }

    //задание 6
    int n,sum = 0;
    cout << "введите предел положительных чисел";
    cin >> n;
    for (int i = 0; i < n; i++) {
        sum += i;
    }
    cout << "сумма первых n чисел:" << sum;

    //задание 7

    int num, bot_num = 1 + rand() % 9,lives = 5;
        do {
            cout << "компьютер загадал число от 1 до 10,отгадайте его за" << " " << lives << " " << "попыток" << endl;
            cin >> num;
            if (num != bot_num) {
                lives--;
                cout << "не верно,осталось попыток->" << "  " << lives << endl;
            }
            else if (num == bot_num) {
                cout << "с победой!";
            }
            if (lives == 0) {
                cout << "game over";
                return 0;
            }
        } while (num != bot_num);

    //задание 8
for (double x = -4; x < 4; x += 0.5) {
    cout <<"y равен:" << 2 * (x * x) - 5 * x - 8 <<"  "<<"при x равном->"<<" "<<x << endl;
    }

//задание 9    неверноооооо
const int size = 10;
int mass[size], min = mass[0];

for (int i = 0; i < size; i++) {
    cin >> mass[i];
}
for (int i = 0; i < size; i++) {
    if (min > mass[i]) {
        min = mass[i];
    }
}
cout << "минимальный элемент ->" << min;

//задание 10
    const int size = 10;
    int mass[size],n,count = 0;
    cout << "введите какое число будем искать";
    cin >> n;

    for (int i = 0; i < size; i++) {
        mass[i] = 1 + rand() % 9;
    }
    for (int i = 0; i < size; i++) {
        if (n == mass[i]) {
            count++;
        }
    }
    cout << count << " раз встретилось число";
        */
//
const int size = 10;
int arr1[size], arr2[size];

for (int i = 0; i < size; i++) {
    arr1 = 1 + rand() % 9;
}
cout << arr1;

}