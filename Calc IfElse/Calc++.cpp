#include <iostream>
#include <cmath>
int main()
{
    using namespace std;
    setlocale(0, "");

    cout << "[!] Калькулятор++" << endl << endl;

    cout << "[!] Введите операцию" << endl << endl;

    cout << "[!] Возможные операции: " << endl << endl;
    cout << "[+] Сумма" << endl;
    cout << "[-] Разность" << endl;
    cout << "[*] Произведение" << endl;
    cout << "[/] Частное" << endl;
    cout << "[%] Деление с остатком" << endl;
    cout << "[^] Возведение в степень" << endl;
    cout << "[<] Квадратный корень" << endl;
    cout << "[e] Экспонента" << endl;

    double number1, number2;
    char operation;
    cin >> operation;

    if (operation == '+') {
        cout << "[!] Введите первое число: ";
        cin >> number1;

        cout << "[!] Введите второе число ";
        cin >> number2;

        cout << "[!] Результат: " << number1 << " + " << number2 << " = " << number1 + number2;
    }

    else if (operation == '-') {
        cout << "[!] Введите первое число: ";
        cin >> number1;

        cout << "[!] Введите второе число ";
        cin >> number2;

        cout << "[!] Результат: " << number1 << " - " << number2 << " = " << number1 - number2;
    }

    else if (operation == '*') {
        cout << "[!] Введите первое число: ";
        cin >> number1;

        cout << "[!] Введите второе число ";
        cin >> number2;

        cout << "[!] Результат: " << number1 << " * " << number2 << " = " << number1 * number2;
    }

    else if (operation == '/') {
        cout << "[!] Введите первое число: ";
        cin >> number1;

        cout << "[!] Введите второе число ";
        cin >> number2;

        cout << "[!] Результат: " << number1 << " / " << number2 << " = " << number1 / number2;
    }

    else if (operation == '%') {
        
        int int_number1, int_number2;

        cout << "[!] Введите первое число: ";
        cin >> int_number1;

        cout << "[!] Введите второе число ";
        cin >> int_number2;

        cout << "[!] Результат: " << int_number1 << " % " << int_number2 << " = " << int_number1 % int_number2;
    }

    else if (operation == '^') {
        cout << "[!] Введите число, возводимое в степень: ";
        cin >> number1;

        cout << "[!] Введите степень ";
        cin >> number2;

        cout << "[!] Результат: " << number1 << " в степени " << number2 << " = " << pow(number1, number2);
    }
    

    else if (operation == '<') {
        cout << "[!] Введите первое, возводимое в корень: ";

        double sqrt_number;
        cin >> sqrt_number;

        cout << "[!] Результат: " << "квадратный корень из " << sqrt_number << " = " << sqrt(sqrt_number);
    }

    else if (operation == 'e') {
        cout << "[!] Введите число для экспоненты: ";
        
        double exp_number;
        cin >> exp_number;

        cout << "[!] Результат: " << "экспонента " << exp_number << " = " << exp(exp_number);
    }

    else {
        cout << "Такой операции в калькуляторе ещё нет, ждите обновлений :)";
    }

    
    int _;
    cin >> _;
    return 0;
}