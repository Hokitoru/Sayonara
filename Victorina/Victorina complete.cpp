#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

int num_questions = 15;
int amount_attempts = 3;
bool help = false;

string questions[15] = {     "Сколько будет 2+2?",
                             "Самый распространённый химический элемент во вселенной?",
                             "Молекулярная масса углерода?",
                             "Что за вещество CH3CH2OH",
                             "Год отмены крепостного права?",
                             "К какому классу относится вещество C20H42?",
                             "Размер int?",
                             "Кто из них физик?",
                             "cout?",
                             "cin?",
                             "While?",
                             "Как называется точка входа?",
                             "Что за вещество CH4?",
                             "Какой запах у железа?",
                             "Что из этого энергетик?"};

int previous_questions[15];

void error() {
    system("cls");
    cout << "Что-то пошло не так, попробуйте ещё раз...";
    Sleep(500);
}

void success(string option, string status) {
    system("cls");
    cout << option << " теперь " << status;
    Sleep(500);
}
// Помощь друга сделать по включению не получилось, сделал либо с ней, либо без
bool help_on(int question) {
    if (help == true) {
        int answer_help;
        switch (question)
        {
        case 0:
            cout << "[1] 4\n";
            cout << "[2] 5\n";
            cin >> answer_help;
            if (answer_help == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 1:
            cout << "[1] Водород\n";
            cout << "[2] Углерод\n";
            cin >> answer_help;
            if (answer_help == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 2:
            cout << "[1] 1\n";
            cout << "[2] 12\n";
            cin >> answer_help;
            if (answer_help == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 3:
            cout << "[1] Этанол\n";
            cout << "[2] Метанол\n";
            cin >> answer_help;
            if (answer_help == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 4:
            cout << "[1] 1861\n";
            cout << "[2] 1800\n";
            cin >> answer_help;
            if (answer_help == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 5:
            cout << "[1] Алканы\n";
            cout << "[2] Алкены\n";
            cin >> answer_help;
            if (answer_help == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 6:
            cout << "[1] 2\n";
            cout << "[2] 4\n";
            cin >> answer_help;
            if (answer_help == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 7:
            cout << "[1] Ян Топлес\n";
            cout << "[2] Стивен Хокинг\n";
            cin >> answer_help;
            if (answer_help == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 8:
            cout << "[1] Вывод\n";
            cout << "[2] Ввод\n";
            cin >> answer_help;
            if (answer_help == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 9:
            cout << "[1] Вывод\n";
            cout << "[2] Ввод\n";
            cin >> answer_help;
            if (answer_help == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 10:
            cout << "[1] Функция\n";
            cout << "[2] Цикл\n";
            cin >> answer_help;
            if (answer_help == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 11:
            cout << "[1] Main()\n";
            cout << "[2] Main\n";
            cin >> answer_help;
            if (answer_help == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 12:
            cout << "[1] Метан\n";
            cout << "[2] Метанол\n";
            cin >> answer_help;
            if (answer_help == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 13:
            cout << "[1] Железо не имеет запаха\n";
            cout << "[4] Металлический\n";
            cin >> answer_help;
            if (answer_help == 1) {
                return true;
            }
            else {
                return false;
            }
            break;
        case 14:
            cout << "[1] Fanta\n";
            cout << "[2] Adrenaline\n";
            cin >> answer_help;
            if (answer_help == 2) {
                return true;
            }
            else {
                return false;
            }
            break;
        default:
            break;
        }
    }
}
// Ответы
bool answers(int question) {
    int answer;

    switch (question)
    {
    case 0:
        cout << "[1] 5\n";
        cout << "[2] 4\n";
        cout << "[3] 2\n";
        cout << "[4] Математика не моё\n";
        cin >> answer;
        if (answer == 2) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 1:
        cout << "[1] Водород\n";
        cout << "[2] Земля\n";
        cout << "[3] Кислород\n";
        cout << "[4] Вода\n";
        cin >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 2:
        cout << "[1] 12\n";
        cout << "[2] 1\n";
        cout << "[3] Он не имеет массы\n";
        cout << "[4] 180\n";
        cin >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 3:
        cout << "[1] Этиловый спирт\n";
        cout << "[2] Метанол\n";
        cout << "[3] Водород\n";
        cout << "[4] Диоксид углерода\n";
        cin >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 4:
        cout << "[1] 1800\n";
        cout << "[2] 1900\n";
        cout << "[3] 684\n";
        cout << "[4] 1861\n";
        cin >> answer;
        if (answer == 4) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 5:
        cout << "[1] Алкан\n";
        cout << "[2] Алкен\n";
        cout << "[3] Алкин\n";
        cout << "[4] Алкадиен\n";
        cin >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 6:
        cout << "[1] 8\n";
        cout << "[2] 2\n";
        cout << "[3] 4\n";
        cout << "[4] 1\n";
        cin >> answer;
        if (answer == 3) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 7:
        cout << "[1] Кант\n";
        cout << "[2] Фрейд\n";
        cout << "[3] Стивен Хокинг\n";
        cout << "[4] Ян Топлес\n";
        cin >> answer;
        if (answer == 3) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 8:
        cout << "[1] Вывод\n";
        cout << "[2] Ввод\n";
        cout << "[3] Цикл\n";
        cout << "[4] Функция\n";
        cin >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 9:
        cout << "[1] Цикл\n";
        cout << "[2] Функция\n";
        cout << "[3] Вывод\n";
        cout << "[4] Ввод\n";
        cin >> answer;
        if (answer == 4) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 10:
        cout << "[1] Цикл\n";
        cout << "[2] Функция\n";
        cout << "[3] Переменная\n";
        cout << "[4] Точка входа\n";
        cin >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 11:
        cout << "[1] main\n";
        cout << "[2] main()\n";
        cout << "[3] tochka vhoda()\n";
        cout << "[4] tochka vhoda\n";
        cin >> answer;
        if (answer == 2) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 12:
        cout << "[1] Метан\n";
        cout << "[2] Метил\n";
        cout << "[3] Метанол\n";
        cout << "[4] Метандиол\n";
        cin >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 13:
        cout << "[1] Железный специфический\n";
        cout << "[2] Металлический\n";
        cout << "[3] У железа нет запаха\n";
        cout << "[4] Запах сероводорода\n";
        cin >> answer;
        if (answer == 3) {
            return true;
        }
        else {
            return false;
        }
        break;
    case 14:
        cout << "[1] Adrenaline\n";
        cout << "[2] Coca-cola\n";
        cout << "[3] Pepsi\n";
        cout << "[4] Fanta\n";
        cin >> answer;
        if (answer == 1) {
            return true;
        }
        else {
            return false;
        }
        break;
    default:
        break;
    }
}

void used_questions(int question) {
    for (int i = 0; i < 15; i++) {
        if (previous_questions[i] == NULL) {
            previous_questions[i] = question;
            return;
        }
    }
}
// Рандомайзер

int rnd() {
    int question = rand() % 15;
    for (int i = 0; i < 15; i++) {
        if (previous_questions[i] == question) {
            question = rand() % 15;
            i = 0;
        }
    }

    used_questions(question);

    return question;
}

// Скрипт самой игры
void play() {
    system("cls");

    int total_questions = num_questions;
    if (help == false) {
        while (amount_attempts >= 0 && num_questions > 0) {
            int current_question = rnd();
        start:
            system("cls");
            cout << "Осталось попыток: " << amount_attempts << "\n";
            cout << "Вопрос " << total_questions - num_questions + 1 << "/" << total_questions << "\n";
            cout << questions[current_question] << "\n";
            if (answers(current_question)) {

                num_questions--;

            }
            else {
                amount_attempts--;
                if (amount_attempts < 0) {
                    break;
                }
                goto start;
            }
        }
    }
    else if (help == true) {
        while (amount_attempts >= 0 && num_questions > 0) {
            int current_question = rnd();
        start1:
            system("cls");
            cout << "Осталось попыток: " << amount_attempts << "\n";
            cout << "Вопрос " << total_questions - num_questions + 1 << "/" << total_questions << "\n";
            cout << questions[current_question] << "\n";
            if (help_on(current_question)) {
                num_questions--;

            }
            else {
                amount_attempts--;
                if (amount_attempts < 0) {
                    break;
                }
                goto start1;
            }
        }
    }

    system("cls");
    if (amount_attempts < 0) {
        cout << "Ты проиграл";
    }
    else {
        cout << "Ты победил";
    }
    exit(1);
}
// Настройки
void settings() {
    system("cls");

    int settings_menu, questions_num, attempts;
    char on;

    cout << "[1] Количество вопросов\n";
    cout << "[2] Количество попыток\n";
    cout << "[3] Помощь друга\n";
    cout << "[0] Назад\n";
    cin >> settings_menu;
    switch (settings_menu)
    {
    case 1:
        system("cls");
        cout << "5, 10, 15? -> ";
        cin >> questions_num;
        if (questions_num != 5 && questions_num != 10 && questions_num != 15) {
            error();
            settings();
        }
        else {
            num_questions = questions_num;
            success("Количество вопросов", to_string(num_questions));
            settings();
        }
        break;
    case 2:
        system("cls");
        cout << "Введите количество попыток -> ";
        cin >> attempts;
        amount_attempts = attempts;
        success("Количество попыток", to_string(amount_attempts));
        settings();
        break;
    case 3:
        system("cls");
        cout << "[y] Вкл\n";
        cout << "[n] Выкл\n";
        cin >> on;
        switch (on)
        {
        case 'y':
            help = true;
            success("Помощь друга", "включена");
            settings();
            break;
        case 'n':
            help = false;
            success("Помощь друга", "выключена");
            settings();
            break;
        default:
            error();
            settings();
            break;
        }
        break;
    case 0:
        break;
    default:
        error();
        settings();
        break;
    }
}
// Правила игры
void rules() {
    system("cls");

    int back_to_menu;

    cout << "1 вопрос, 4 варианта ответа.\n";
    cout << "Если выберешь верный ответ - перейдёшь к следующему вопросу, неверно - попробуй ещё раз,\n";
    cout << "также потратится одна попытка\n";
    cout << "Кончились попытки - игра закончена\n\n";
    cout << "[0] Вернуться в меню\n";
    cin >> back_to_menu;
    if (back_to_menu == 0) {
        return;
    }
    else {
        error();
        rules();
    }
}

int main()
{
    setlocale(0, "");

    while (true) {
        system("cls");

        int menu;

        cout << "[1] Играть\n";
        cout << "[2] Настройки\n";
        cout << "[3] Правила\n";
        cout << "[4] Выход\n";
        cin >> menu;
        switch (menu)
        {
        case 1:
            play();
            break;
        case 2:
            settings();
            break;
        case 3:
            rules();
            break;
        case 4:
            exit(0);
            break;
        default:
            error();
            break;
        }
    }

    return 0;
}