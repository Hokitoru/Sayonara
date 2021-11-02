#include <iostream>

int main()
{
	using namespace std;
	setlocale(0, "");
	system("cls");

	cout << "[!] Программа \"Фигуры\"\n\n";
	cout << "[!] Выберите фигуру\n\n";
	cout << "[1] Линия\n";
	cout << "[2] Квадрат\n";
	cout << "[3] Прямоугольник\n";
	cout << "[4] Треугольник\n";
	cout << "[5] Решётка\n";
	cout << "[6] Крестик\n";
	cout << "[7] Плюсик\n\n";

	short figure;
	cin >> figure;

	system("cls");

	if (figure == 1) {
		cout << "[!] Выберите тип фигуры\n\n";
		cout << "[1] Горизонтальная\n";
		cout << "[2] Вертикальная\n\n";

		short type;
		cin >> type;

		system("cls");

		if (type == 1) {

			cout << "[!] Размер фигуры?\n\n";
			short size;
			cin >> size;

			cout << "[!] Символ?\n\n";
			char symbol;
			cin >> symbol;

			system("cls");

			cout << "[!] Результат:\n\n\n";

			short i = 0;
			while (i < size) {
				cout << symbol << " ";
				i++;
			}


		}

		else if (type == 2) {

			cout << "[!] Размер фигуры?\n\n";
			short size;
			cin >> size;

			cout << "[!] Символ?\n\n";
			char symbol;
			cin >> symbol;

			system("cls");

			cout << "[!] Результат:\n\n\n";

			short i = 0;
			while (i < size) {
				cout << symbol << "\n";
				i++;
			}


		}

		else {
			cout << "Такого типа фигуры пока нет";
		}
	}

	else if (figure == 2) {

		cout << "[!] Выберите тип квадрата\n\n";
		cout << "[1] Заполненный\n";
		cout << "[2] Незаполненный\n\n";

		short type;
		cin >> type;

		system("cls");

		if (type == 1) {
			cout << "[!] Размер фигуры?\n\n";
			short size;
			cin >> size;

			cout << "[!] Символ?\n\n";
			char symbol;
			cin >> symbol;

			system("cls");

			cout << "[!] Результат:\n\n\n";

			short j = 0;
			short i = 0;
			while (i < size) {

				j = 0;

				while (j < size) {

					cout << symbol << " ";
					j++;
				}

				cout << "\n";
				i++;
			}
		}

		else if (type == 2) {
			cout << "[!] Размер фигуры?\n\n";
			short size;
			cin >> size;

			cout << "[!] Символ?\n\n";
			char symbol;
			cin >> symbol;

			system("cls");

			cout << "[!] Результат:\n\n\n";

			short i = 0;
			for (i = 0; i < size; i++) {
				short j = 0;
				for (j = 0; j < size; j++) {
					if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
						cout << symbol << " ";
					}

					else {
						cout << "  ";
					}
				}
				cout << endl;
			}

		}

		else {
			cout << "Такого типа нет...";
		}


	}

	else if (figure == 3) {

		cout << "[!] Выберите тип прямоугольника\n\n";
		cout << "[1] Заполненный\n";
		cout << "[2] Незаполненный\n\n";

		short type;
		cin >> type;

		system("cls");

		if (type == 1) {

			cout << "[!] Выберите длину\n";
			short length;
			cin >> length;

			cout << "[!] Выберите ширину\n";
			short width;
			cin >> width;

			cout << endl << endl << "[!] Символ?";
			char symbol;
			cin >> symbol;

			system("cls");

			cout << endl << "[!] Результат:\n\n\n";

			short i = 0;
			for (i = 0; i < length; i++) {
				short j = 0;
				for (j = 0; j < width; j++) {
					cout << symbol << " ";
				}
				cout << endl;
			}


		}

		else if (type == 2) {

			cout << "[!] Выберите длину\n";
			short length;
			cin >> length;

			cout << "[!] Выберите ширину\n";
			short width;
			cin >> width;

			cout << endl << endl << "[!] Символ?";
			char symbol;
			cin >> symbol;

			system("cls");

			cout << endl << "[!] Результат:\n\n\n";

			short i = 0;
			for (i = 0; i < length; i++) {
				short j = 0;
				for (j = 0; j < width; j++) {
					if (i == 0 || i == length - 1 || j == 0 || j == width - 1) {
						cout << symbol << " ";
					}

					else {
						cout << "  ";
					}
				}
				cout << "\n";
			}
		}

		else {
			cout << "Такого типа нет...";
		}
	}

	else if (figure == 4) {
		cout << "[!] Выберите тип треугольника\n\n";
		cout << "[1] Заполненный\n";
		cout << "[2] Незаполненный\n";
		short type;
		cin >> type;

		system("cls");

		if (type == 1) {
			cout << endl << "[!] Высота треугольника?\n";
			short height;
			cin >> height;

			cout << endl << "[!] Символ?\n";
			char symbol;
			cin >> symbol;

			system("cls");

			cout << endl << endl << "[!] Результат: \n\n";
			for (int i = 0; i < height; i++)
			{
				for (int j = 1; j < height - i; j++)
				{
					cout << " ";
				}

				for (int j = height - 2 * i; j <= height; j++)
				{
					cout << symbol;
				}
				cout << endl;
			}
		}

		else if (type == 2) {
			cout << "Высота треугольника?\n";
			short height;
			cin >> height;

			cout << endl << "Символ?\n";
			char symbol;
			cin >> symbol;

			system("cls");

			cout << "\n\n Результат:\n\n\n";
			for (int i = 0; i < height; i++)
			{
				for (int j = 1; j < height - i; j++)
				{
					cout << " ";
				}

				if (i != 0) {
					cout << symbol;
				}

				if (i != height - 1) {
					for (int j = height + 1 - 2 * i; j < height; j++) {
						cout << " ";
					}
				}

				if (i != height - 1) {
					cout << symbol << endl;
				}

				if (i == height - 1) {
					short k = 0;
					while (k < height - 1) {
						cout << " " << symbol;
						k++;
					}
				}
			}
		}

		else {
			cout << "Такого типа треугольника нет...\n";
		}
	}

	else if (figure == 5) {
		cout << "[!] Размер фигуры?\n\n";
		short size;
		cin >> size;

		cout << "[!] Символ?\n\n";
		char symbol;
		cin >> symbol;

		system("cls");

		cout << "[!] Результат:\n\n\n";

		for (int i = 1; i < size; i++) {
			for (int j = 1; j < size; j++) {
				if (i % 2 == 0 || j % 2 == 0) {
					cout << symbol << " ";
					}

				else {
					cout << "  ";
				}
			

			
			}
			cout << endl;
		}

	}

	else if (figure == 6) {
		cout << "[!] Размер фигуры?\n\n";
		short size;
		cin >> size;

		cout << "[!] Символ?\n\n";
		char symbol;
		cin >> symbol;

		system("cls");

		cout << "[!] Результат:\n\n\n";

		for (int i = 0; i < size; i++) {
			for (int j = 0; j <= size; j++) {
				
				if (i == j || j == size - i - 1) {
					cout << symbol << " ";
				}
				else {
					cout << "  ";
				}
				
			}
			cout << endl;
		}
	}

	else if (figure == 7) {
		cout << "[!] Размер фигуры?\n\n";
		short size;
		cin >> size;

		cout << "[!] Символ?\n\n";
		char symbol;
		cin >> symbol;

		system("cls");

		cout << "[!] Результат:\n\n\n";

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (i == size / 2 || j == size / 2) {
					cout << symbol << " ";
				}
					
				else {
					cout << "  ";
				}
			}
			cout << endl;
		}
	}


			


	else {
		cout << "[!] Такой фигуры пока нет";
	}

	short _; cin >> _;
	return 0;
}