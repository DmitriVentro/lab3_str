#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
const int len = 30, strings = 5;
const char ch = '\n';
void input_file(char *mass)
{
	
	
	ifstream fs("strings.txt", ios::in | ios::binary);
	
	if (!fs) {cout<<"error";}; //Если ошибка открытия файла, то завершаем программу

	while (getline(fs, mass))
	{
		std::cout << mass << std::endl;
	}
	fs.close();
}

int main()
{
	char mass[100];

	char* fileStr = input_file(mass);
	setlocale(LC_ALL, "");
	//char str1[10];
	//char str2[10];
	//int lenStr = copy_str::size_str1(str1);
	//cout << "Скопированная строка:\n" << str2;
}