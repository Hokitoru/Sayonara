#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

void error();
void rules();
void menu();
void settings();
void background_color();
void text_color();
char** get_field();
void print_field(char** field);
void print_clue();
void make_turn(char** field, int num, char symbol);
int get_random_turn(char** field);
char check_cell(int num, char** field);
bool check_win(char** field, char symbol);
void game();


int main() {
	setlocale(0, "");

	menu();

	int _; cin >> _;
}

void rules() {
	system("cls");

	cout << "Павила игры просты: чтобы победить,\n";
	cout << "ты должен первым сделать \"Три в ряд\" из крестиков или ноликов\n";
	cout << "[1] Назад в меню\n";

	int back_to_menu;
	cin >> back_to_menu;

	if (back_to_menu == 1) {
		menu();
	}

	else {
		error();
		Sleep(500);
		rules();
	}
}

void error() {
	system("cls");
	cout << "Что-то пошло не так...";
	Sleep(800);
}

void menu() {
	system("cls");

	cout << "*Крестики-нолики*\n\n";
	cout << "[!] Меню:\n";
	cout << "[1] Начать игру\n";
	cout << "[2] Настройки\n";
	cout << "[3] Правила игры\n";
	cout << "[4] Выход\n";

	int menu_option;
	cin >> menu_option;

	switch (menu_option)
	{
	case 1: 
		game();
		break;
	case 2:
		settings();
		break;
	case 3:
		rules();
		break;
	case 4:
		system("cls");
		exit(0);
		break;
	default:
		error();
		menu();
		break;
	}
}

void settings() {
	system("cls");

	cout << "[!] Настройки:\n";
	cout << "[1] Выбрать цвет текста\n";
	cout << "[2] Выбрать цвет фона\n";
	cout << "[0] Назад\n";

	int settings_option;
	cin >> settings_option;

	switch (settings_option)
	{
	case 0:
		menu();
	case 1:
		text_color();
		break;
	case 2:
		background_color();
		break;
	default:
		error();
		Sleep(500);
		settings();
		break;
	}
}

void background_color() {
	system("cls");

	cout << "[!] Выберите цвет фона\n";
	cout << "[1] Чёрный\n";
	cout << "[2] Синий\n";
	cout << "[3] Зелёный\n";
	cout << "[4] Голубой\n";
	cout << "[5] Красный\n";
	cout << "[6] Фиолетовый\n";
	cout << "[7] Жёлтый\n";
	cout << "[8] Белый\n";
	cout << "[9] Серый\n";
	cout << "[10] Светло-синий\n";
	cout << "[11] Светло-зелёный\n";
	cout << "[12] Аквамариновый\n";
	cout << "[13] Светло-красный\n";
	cout << "[14] Светло-фиолетовый\n";
	cout << "[15] Светло-жёлтый\n";
	cout << "[16] ОЧЕНЬ БЕЛЫЙ\n";
	cout << "[0] Вернуться к настройкам\n\n";
	
	cout << "Выберите цвет\n";

	int background_color_option;
	cin >> background_color_option;

	switch (background_color_option)
	{
	case 0:
		settings();
	case 1:
		system("color 07");
		background_color();
		break;
	case 2:
		system("color 17");
		background_color();
		break;
	case 3:
		system("color 27");
		background_color();
		break;
	case 4:
		system("color 37");
		background_color();
		break;
	case 5:
		system("color 47");
		background_color();
		break;
	case 6:
		system("color 57");
		background_color();
		break;
	case 7:
		system("color 67");
		background_color();
		break;
	case 8:
		system("color 77");
		background_color();
		break;
	case 9:
		system("color 87");
		background_color();
		break;
	case 10:
		system("color 97");
		background_color();
		break;
	case 11:
		system("color A7");
		background_color();
		break;
	case 12:
		system("color B7");
		background_color();
		break;
	case 13:
		system("color C7");
		background_color();
		break;
	case 14:
		system("color D7");
		background_color();
		break;
	case 15:
		system("color E7");
		background_color();
		break;
	case 16:
		system("color F7");
		background_color();
		break;
	default:
		error();
		background_color();
		break;
	}
}

void text_color() {
	system("cls");

	cout << "[!] Выберите цвет текста\n";
	cout << "[1] Чёрный\n";
	cout << "[2] Синий\n";
	cout << "[3] Зелёный\n";
	cout << "[4] Голубой\n";
	cout << "[5] Красный\n";
	cout << "[6] Фиолетовый\n";
	cout << "[7] Жёлтый\n";
	cout << "[8] Белый\n";
	cout << "[9] Серый\n";
	cout << "[10] Светло-синий\n";
	cout << "[11] Светло-зелёный\n";
	cout << "[12] Аквамариновый\n";
	cout << "[13] Светло-красный\n";
	cout << "[14] Светло-фиолетовый\n";
	cout << "[15] Светло-жёлтый\n";
	cout << "[16] ОЧЕНЬ БЕЛЫЙ\n";
	cout << "[0] Вернуться к настройкам\n\n";

	cout << "Выберите цвет\n";

	int text_color_option;
	cin >> text_color_option;

	switch (text_color_option)
	{
	case 0:
		settings();
	case 1:
		system("color 00");
		text_color();
		break;
	case 2:
		system("color 01");
		text_color();
		break;
	case 3:
		system("color 02");
		text_color();
		break;
	case 4:
		system("color 03");
		text_color();
		break;
	case 5:
		system("color 04");
		text_color();
		break;
	case 6:
		system("color 05");
		text_color();
		break;
	case 7:
		system("color 06");
		text_color();
		break;
	case 8:
		system("color 07");
		text_color();
		break;
	case 9:
		system("color 08");
		text_color();
		break;
	case 10:
		system("color 09");
		text_color();
		break;
	case 11:
		system("color 0A");
		text_color();
		break;
	case 12:
		system("color 0B");
		text_color();
		break;
	case 13:
		system("color 0C");
		text_color();
		break;
	case 14:
		system("color 0D");
		text_color();
		break;
	case 15:
		system("color 0E");
		text_color();
		break;
	case 16:
		system("color 0F");
		text_color();
		break;
	default: 
		error();
		text_color();
		break;
	}
}

char** get_field() { // Инициализация поля

	char** field = new char* [3];

	for (int i = 0; i < 3; i++) {
		field[i] = new char[3];
		for (int j = 0; j < 3; j++) {
			field[i][j] = '?';
		}
	}

	return field;
}

void print_field(char** field) { // Вывод поля

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << field[i][j] << " ";
		}
		cout << endl;
	}
}

void print_clue() {
	cout << "----------------\n";
	cout << "1 2 3\n4 5 6\n7 8 9\n";
}

void make_turn(char** field, int num, char symbol) {
	switch (num) {
	case 1:
		field[0][0] = symbol;
		break;
	case 2:
		field[0][1] = symbol;
		break;
	case 3:
		field[0][2] = symbol;
		break;
	case 4:
		field[1][0] = symbol;
		break;
	case 5:
		field[1][1] = symbol;
		break;
	case 6:
		field[1][2] = symbol;
		break;
	case 7:
		field[2][0] = symbol;
		break;
	case 8:
		field[2][1] = symbol;
		break;
	case 9:
		field[2][2] = symbol;
		break;
	default:
		break;
	}
}

int get_random_turn(char** field) {
	while (true) {
		int num = rand() % 9 + 1;
		if (check_cell(num, field) == '?') {
			return num;
		}
	}
}

char check_cell(int num, char** field) {
	switch (num) {
	case 1:
		return field[0][0];
	case 2:
		return field[0][1];
	case 3:
		return field[0][2];
	case 4:
		return field[1][0];
	case 5:
		return field[1][1];
	case 6:
		return field[1][2];
	case 7:
		return field[2][0];
	case 8:
		return field[2][1];
	case 9:
		return field[2][2];
	default:
		break;
	}
}

bool check_win(char** field, char symbol) {
	if (check_cell(1, field) == symbol && check_cell(2, field) == symbol && check_cell(3, field) == symbol) {
		return true;
	}
	else if (check_cell(4, field) == symbol && check_cell(5, field) == symbol && check_cell(6, field) == symbol) {
		return true;
	}
	else if (check_cell(7, field) == symbol && check_cell(8, field) == symbol && check_cell(9, field) == symbol) {
		return true;
	}
	else if (check_cell(1, field) == symbol && check_cell(4, field) == symbol && check_cell(7, field) == symbol) {
		return true;
	}
	else if (check_cell(2, field) == symbol && check_cell(5, field) == symbol && check_cell(8, field) == symbol) {
		return true;
	}
	else if (check_cell(3, field) == symbol && check_cell(6, field) == symbol && check_cell(9, field) == symbol) {
		return true;
	}
	else if (check_cell(1, field) == symbol && check_cell(5, field) == symbol && check_cell(9, field) == symbol) {
		return true;
	}
	else if (check_cell(3, field) == symbol && check_cell(5, field) == symbol && check_cell(7, field) == symbol) {
		return true;
	}
	else {
		return false;
	}
}

void game() {
	char user_symbol;
	char computer_symbol;
	int turn_counter = 1;
	bool is_user_first;

	char** field = get_field(); //Создаём поле и инициализируем

	char symbol = '?';
	int num;

	while (true) {
		cout << "Выберите сторону (X или 0)";
		char side;
		cin >> side;

		if (side == 'X') {
			user_symbol = 'X';
			computer_symbol = '0';
			is_user_first = true;
			break;
		}

		else if (side == '0') {
			user_symbol = '0';
			computer_symbol = 'X';
			is_user_first = false;
			break;
		}
	}

	int temp;
	if (is_user_first) {
		temp = 0;
	}
	else {
		temp = 1;
	}

	while (true) {
		system("cls");
		print_field(field);
		if (symbol != '?' && check_win(field, symbol)) {
			cout << symbol << " победил";
			Sleep(3000);
			break;
		}
		if (turn_counter == 10) {
			cout << "Ничья";
			Sleep(3000);
			break;
		}

		if (turn_counter % 2 == temp) {
			symbol = computer_symbol;
			num = get_random_turn(field);

		}
		else {
			symbol = user_symbol;
			print_clue();
			while (true) {
				cin >> num;
				if (check_cell(num, field) == '?') {
					break;
				}
			}
		}

		make_turn(field, num, symbol);
		turn_counter++;

	}
}
