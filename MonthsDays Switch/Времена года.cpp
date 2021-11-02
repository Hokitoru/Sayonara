#include <iostream>

int main()
{
	using namespace std;
	setlocale(0, "");

	int seasons;

	cout << "Выберите время года" << endl << "1 - Лето" << endl << "2 - Осень" << endl << "3 - Зима" << endl << "4 - Весна" << endl;
	cin >> seasons;

	if (seasons == 1) {
		cout << "Сейчас лето, долой одежду, и на пляж!";
	}

	else if (seasons == 2) {
		cout << "Сейчас осень, следует одеться тепло и взять с собой зонт.";
	}

	else if (seasons == 3) {
		cout << "Сейчас зима, не забудьте куртку и кофту.";
	}
	
	else if (seasons == 4) {
		cout << "Сейчас весна, возьмите кофту.";
	}

	else {
		cout << "Такого времени года не существует...";
	}

}

