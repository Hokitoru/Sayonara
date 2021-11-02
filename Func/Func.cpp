#include <iostream>
using namespace std;


void get_clear();
void get_background_color();
void get_text_color();
int get_int_size();
int get_char_size();
int get_double_size();
int get_float_size();
int get_bool_size();
void hello();
void square();



int main() {
	setlocale(0, "");
	system("color 07");

	cout << "[!] Программа \"Функции\"\n\n";
	cout << "[!] Выберите функцию:\n\n";
	cout << "[1] Очистить консоль\n";
	cout << "[2] Изменить цвет фона\n";
	cout << "[3] Изменить цвет текста\n";
	cout << "[4] Размер int\n";
	cout << "[5] Размер char\n";
	cout << "[6] Размер double\n";
	cout << "[7] Размер float\n";
	cout << "[8] Размер bool\n";
	cout << "[9] Приветствие\n";
	cout << "[10] Вывод квадрата\n";

	short func;
	cin >> func;

	switch (func)
	{
	case 1:
	{
		get_clear();
		break;
	}
	case 2:
	{
		get_background_color();
		break;
	}
	case 3:
	{
		get_text_color();
		break;
	}
	case 4:
	{
		cout << get_int_size() + sizeof(int);
		break;
	}
	case 5:
	{
		cout << get_char_size() + sizeof(char);
		break;
	}
	case 6:
	{
		cout << get_double_size() + sizeof(double);
		break;
	}
	case 7:
	{
		cout << get_float_size() + sizeof(float);
		break;
	}
	case 8:
	{
		cout << get_bool_size() + sizeof(bool);
		break;
	}
	case 9:
	{
		hello();
		break;
	}
	case 10:
	{
		square();
		break;
	}
	default: {
		cout << "[!] Такой функции нет...";
		break;
	}
	}

	int _; cin >> _;
	return 0;
}

void get_clear() {
	system("cls");
}

void get_background_color() {

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
	cout << "[16] ОЧЕНЬ БЕЛЫЙ\n\n";

	cout << "Выберите цвет\n";
	int background_color;
	cin >> background_color;

	switch (background_color)
	{
	case 1:
	{
		system("color 07");
		break;
	}
	case 2:
	{
		system("color 17");
		break;
	}
	case 3:
	{
		system("color 27");
		break;
	}
	case 4:
	{
		system("color 37");
		break;
	}
	case 5:
	{
		system("color 47");
		break;
	}
	case 6:
	{
		system("color 57");
		break;
	}
	case 7:
	{
		system("color 67");
		break;
	}
	case 8:
	{
		system("color 77");
		break;
	}
	case 9:
	{
		system("color 87");
		break;
	}
	case 10:
	{
		system("color 97");
		break;
	}
	case 11:
	{
		system("color A7");
		break;
	}
	case 12:
	{
		system("color B7");
		break;
	}
	case 13:
	{
		system("color C7");
		break;
	}
	case 14:
	{
		system("color D7");
		break;
	}
	case 15:
	{
		system("color E7");
		break;
	}
	case 16:
	{
		system("color F7");
		break;
	}
	default: {
		cout << "Такого цвета нет";
		break;
	}

	}
}

void get_text_color() {

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
	cout << "[16] ОЧЕНЬ БЕЛЫЙ\n\n";

	cout << "Выберите цвет\n";
	int text_color;
	cin >> text_color;

	switch (text_color)
	{
	case 1:
	{
		system("color 00");
		break;
	}
	case 2:
	{
		system("color 01");
		break;
	}
	case 3:
	{
		system("color 02");
		break;
	}
	case 4:
	{
		system("color 03");
		break;
	}
	case 5:
	{
		system("color 04");
		break;
	}
	case 6:
	{
		system("color 05");
		break;
	}
	case 7:
	{
		system("color 06");
		break;
	}
	case 8:
	{
		system("color 07");
		break;
	}
	case 9:
	{
		system("color 08");
		break;
	}
	case 10:
	{
		system("color 09");
		break;
	}
	case 11:
	{
		system("color 0A");
		break;
	}
	case 12:
	{
		system("color 0B");
		break;
	}
	case 13:
	{
		system("color 0C");
		break;
	}
	case 14:
	{
		system("color 0D");
		break;
	}
	case 15:
	{
		system("color 0E");
		break;
	}
	case 16:
	{
		system("color 0F");
		break;
	}
	default: {
		cout << "Такого цвета нет";
		break;
	}

	}
}

int get_int_size() {
	cout << "\n\n[!] Размер int = ";
	return 0;
}

int get_char_size() {
	cout << "\n\n[!] Размер char = ";
	return 0;
}

int get_double_size() {
	cout << "\n\n[!] Размер double = ";
	return 0;
}

int get_float_size() {
	cout << "\n\n[!] Размер float = ";
	return 0;
}

int get_bool_size() {
	cout << "\n\n[!] Размер bool = ";
	return 0;
}

void hello() {
	cout << "\t\t\t###################################\n";
	cout << "\t\t\t#        Привет, я функция        #\n";
	cout << "\t\t\t###################################\n";
}

void square() {
	cout << "[!] Введите символ\n";
	char symbol;
	cin >> symbol;
	system("cls");
	cout << "[!] Ваш квадрат:\n\n\n";

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << symbol << " ";
		}
		cout << endl;
	}
}