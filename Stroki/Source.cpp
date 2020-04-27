#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
char* input_file()
{
	int k, i;
	k = 0;
	char Str;
	string str;
	ifstream file;
	file.open("D:\\who\\LoveCPP.txt", ios::in);
	if (!file.is_open()) { cout << "Error: no file\n" << endl; }
	else
	{
		while (file.get(Str))
		{
			if (Str == '!'	|| Str == '?'	|| Str == '.') break;
			else k++;
		}
	}
	char* s2 = new char[k];
	for (i = 0; i < k; i++)
	{
		file >> s2;
		cout << s2 << "\t";
	}
	return s2;
}

int main()
{
	
	char* fileStr = input_file();
	setlocale(LC_ALL, "");
	//char str1[10];
	//char str2[10];
	//int lenStr = copy_str::size_str1(str1);
	//cout << "Скопированная строка:\n" << str2;
}