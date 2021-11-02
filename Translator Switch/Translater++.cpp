#include <iostream>

int main()
{
	using namespace std;
	setlocale(0, "");

	cout << "[!] С какого языка вы хотите получить перевод?" << endl << endl;
	cout << "[1] С английского" << endl;
	cout << "[2] С русского" << endl;
	
	
	int language, word_number;
	cin >> language;
	
	
	switch (language)
	{
	case 1:
		cout << "[!] Вот список слов, перевод которых возможен с английского: " << endl << endl;
		cout << "[1] Dog" << endl;
		cout << "[2] Hunt" << endl;
		cout << "[3] Code" << endl;
		cout << "[4] Money" << endl;
		cout << "[5] Power" << endl;
		cout << "[6] Name" << endl;
		cout << "[7] Love" << endl;
		cout << "[8] Game" << endl;
		cout << "[9] Acid" << endl;
		cout << "[10] Body" << endl;
		cout << "[11] Axe" << endl;
		cout << "[12] Rat" << endl;
		cout << "[13] Keyboard" << endl;
		cout << "[14] Cat" << endl;
		cout << "[15] Key" << endl;
		cout << "[!] Выберите слово цифрой" << endl << endl;

		cin >> word_number;
		
		switch (word_number)
		{
		case 1:
			cout << "[!] Dog - собака";
			break;
		case 2:
			cout << "[!] Hunt - охота";
			break;
		case 3:
			cout << "[!] Code - код";
			break;
		case 4:
			cout << "[!] Money - деньги";
			break;
		case 5:
			cout << "[!] Power - сила";
			break;
		case 6:
			cout << "[!] Name - имя";
			break;
		case 7:
			cout << "[!] Love - любовь";
			break;
		case 8:
			cout << "[!] Game - игра";
			break;
		case 9:
			cout << "[!] Acid - кислота";
			break;
		case 10:
			cout << "[!] Body - тело";
			break;
		case 11:
			cout << "[!] Axe - топор";
			break;
		case 12:
			cout << "[!] Rat - крыса";
			break;
		case 13:
			cout << "[!] Keyboard - клавиатура";
			break;
		case 14:
			cout << "[!] Cat - кошка";
			break;
		case 15:
			cout << "[!] Key - ключ";
			break;
		default:
			cout << "Такого слова в переводчике пока нет :/";
			break;
		}
		break;

	case 2:
		cout << "[!] Вот список слов, перевод которых возможен с русского: " << endl << endl;
		cout << "[1] Собака" << endl;
		cout << "[2] Охота" << endl;
		cout << "[3] Код" << endl;
		cout << "[4] Деньги" << endl;
		cout << "[5] Сила" << endl;
		cout << "[6] Имя" << endl;
		cout << "[7] Любовь" << endl;
		cout << "[8] Игра" << endl;
		cout << "[9] Кислота" << endl;
		cout << "[10] Тело" << endl;
		cout << "[11] Топор" << endl;
		cout << "[12] Крыса" << endl;
		cout << "[13] Клавиатура" << endl;
		cout << "[14] Кошка" << endl;
		cout << "[15] Ключ" << endl;
		cout << "[!] Выберите слово цифрой" << endl << endl;

		cin >> word_number;
		
		switch (word_number)
		{
		case 1:
			cout << "[!] Cобака - dog";
			break;
		case 2:
			cout << "[!] Охота - hunt";
			break;
		case 3:
			cout << "[!] Код - code";
			break;
		case 4:
			cout << "[!] Деньги - money";
			break;
		case 5:
			cout << "[!] Сила - power";
			break;
		case 6:
			cout << "[!] Имя - name";
			break;
		case 7:
			cout << "[!] Любовь - Love";
			break;
		case 8:
			cout << "[!] Игра - game";
			break;
		case 9:
			cout << "[!] Кислота - acid";
			break;
		case 10:
			cout << "[!] Тело - body";
			break;
		case 11:
			cout << "[!] Топор - axe";
			break;
		case 12:
			cout << "[!] Крыса - rat";
			break;
		case 13:
			cout << "[!] Клавиатура - keyboard";
			break;
		case 14:
			cout << "[!] Кошка - cat";
			break;
		case 15:
			cout << "[!] Ключ - key";
			break;
		default:
			cout << "Такого слова в переводчике пока нет :/";
			break;
		}
		break;

	default:
		cout << "[!] Такого языка в переводчике нет :/";
		break;
	}


	int _; cin >> _;
}