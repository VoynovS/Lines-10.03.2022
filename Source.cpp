//Персональный шаблон проекта С++
#include <iostream> // Главная библиотека
#include <string> // содержит ф. строк
#include <string.h> //содержит ф. массива строк
using namespace std; //Подключение пространства имен

string repeatStr(string str, int n) {
	string newStr;
	for (int i = 0; i < n; i++)
		newStr += str;
	return newStr;
}

int equals(string str, string str2) {
	if (str.size() > str2.size())
		return 1;
	if (str.size() < str2.size())
		return -1;
	return 0;
}






int main() {

	setlocale(LC_ALL, "Russian");
	string str88, str89;
	/*char word[5] = {'H','e','y','!','\0'};
	for (int i = 0; i < 5; i++) 
		cout << word[i];
	cout << endl;


	char line[] = "Hello world!";
	cout << line << endl;

	cout << line[1] << line[2] << endl;
	char sym = line[3];
	
	line[0] = 'L';
	cout << line << endl;

	string str;
	str = "Hello world!"; //Любое значение даже цифры
	cout << str << endl;
	str = "Bye world!!";
	cout << str << endl;
	str = ""; //Обнуленная строка
	string str2 = str; //copy string
	str2 = "Bananas";
	str = "Oranges";
	cout << str + " " + str2 + "\n"; //выводит oranges Bananas

	string str3 = str + " without " + str2;
	cout << str3 << endl;

	string str4 = "apples";
	str4 += " and kiwi";
	cout << str4 << endl;

	//сравнение строк
	if (str == "Oranges")
		cout << "TRUE\n";
	else
		cout << "FALSE\n";*/

	//cout << "Enter word: ";
	//string str5 = "Oranges!";
	//cin >> str5; //Воспринимается только первое введенное слово.
	//cout << "We enter word \"" + str5 + "\"\n"; 

	/*cout << "Введите предложение: ";
	getline(cin, str5);
	cout << "Вы ввели:\n" + str5 << endl;

	for (int i = 2; i >= 0; i--)
		cout << str5[i];
	cout << endl;
	
	str5 = "Hello\nWorld";
	cout << str5 << endl;*/

	/*string str6;
	cout << "Введите строку: ";
	getline(cin, str6);
	
	int len = str6.size();
	cout << "Длина строки \"" + str6 + "\" = " << len << endl;
	cout << str6.length() << endl;*/

	/*string str7, str8;
	cout << "Введите 1 строку: ";
	getline(cin, str7);
	cout << "Введите 2 строку: ";
	getline(cin, str8);
	str7.insert(2, str8);
	cout << str7 << endl;*/

	/*string str9, str10;
	cout << "Введите 1 строку: ";
	getline(cin, str9);
	cout << "Введите подстроку: ";
	getline(cin, str10);
	//str9.replace(3, 4, str10);
	int index = str9.find(str10);
	cout << str9 << endl << index;*/

	/*string str11, str12;
	cout << "Введите 1 строку: ";
	getline(cin, str11);
	cout << "Введите подстроку: ";
	getline(cin, str12);
	//str9.replace(3, 4, str10);
	int index = str11.rfind(str12);
	cout << str11 << endl << index;*/

	//Метод .substr()
	/*string str13, str14;
	cout << "Введите 1 строку: ";
	getline(cin, str13);
	string str15 = str13.substr(5, 4);
	cout << str15 << endl;*/

	//to_string
	/*int n;
	cout << "Enter num: ";
	cin >> n;
	string str16 = to_string(n);
	string newStr;
	for (int i = str16.length() - 1; i >= 0; i--)
		newStr += str16[i];
	int newN = stoi(newStr);
	cout << newN << endl;*/


	//toupper
	/*string str17;
	cout << "Введите строку: ";
	getline(cin, str17);
	for (int i = 0; i < str17.length(); i++)
	str17[i] = tolower(str17[i]);
	cout << str17 << endl;*/

//Task 1
/*cout << "Task 1.\nEnter string: \n";
int m;

getline(cin, str88);
cout << "Enter number: \n";
cin >> m;
cout << repeatStr(str88, m) << endl;*/

//Task 2
cout << "Task 2. \n Enter first string:\n";
getline(cin, str88);
cout << "Task 2. \n Enter second string:\n";
getline(cin, str89);
if (equals(str88, str89) == 1)
	cout << "Length first string bigger\n\n";
else
	if (equals(str88, str89) == -1)
		cout << "Length second string bigger\n\n";
	else
		cout << "Length string equals\n\n";














	return 0;
}