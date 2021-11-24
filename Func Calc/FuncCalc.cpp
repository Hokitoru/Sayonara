#include <iostream>
#include <math.h>
using namespace std;


double calculator(double num1, double num2, char operation) {
   
    cout << "[!] Результат: ";
    
    switch (operation)
    {
    case '+': return num1 + num2;
   
    case '-': return num1 - num2;
    
    case '*': return num1 * num2;
    
    case '/': return num1 / num2;
    
    case '^': return pow(num1, 2);
    
    case '<': return sqrt(num1);
    
    case '>': return cbrt(num1);
    
    case 'e': return exp(num1);

    default: return -1;
    }
}

int main()
{
    setlocale(0, "");

    cout << "[!] Калькулятор++\n\n";
   
    cout << "[!] Возможные операции:\n\n";
    cout << "[+] Сложение\n";
    cout << "[-] Вычитание\n";
    cout << "[*] Умножение\n";
    cout << "[/] Деление\n";
    cout << "[^] Квадрат числа\n";
    cout << "[<] Квадратный корень числа\n";
    cout << "[>] Кубический корень числа\n";
    cout << "[e] Вычисление экспоненты\n\n\n";

    cout << "[!] Выберите операцию: \n\n";
    char operation;
    cin >> operation;
    
    if (operation == 'e' || operation == '>' || operation == '<' || operation == '^') {
        cout << "[!] Введите число:\n\n";
        
        double num1;
        cin >> num1;

        double num2 = 0;

        system("cls");

        cout << calculator(num1, num2, operation) << endl;
    }
    
    else {
        cout << "[!] Введите первое число:\n";
        double num1;
        cin >> num1;

        cout << "[!] Введите второе число:\n";
        double num2;
        cin >> num2;

        system("cls");

        cout << calculator(num1, num2, operation) << endl;
    }
    
  

    int _; cin >> _;
    return 0;
}
