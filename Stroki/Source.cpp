#include <iostream>
#include <cstdio>
using namespace std;
namespace copy_str
{
	int size_str1(char* str1)
	{
		int i;
		for (i = 0; str1[i] != '\0'; i++);
		return i - 1;
	}
	void input(char *str1)
	{
		cout << "Введи строчечку:\n";
		fgets(str1, 100, stdin);
		//cout << str1 << endl;
	}
	void cpy_str(int lenStr, char* str1, char* str2)
	{
		for (int i = 0; i <= lenStr; i++)
		{
			str2[i] = str1[i];
		}
	}
	void cpyStr(char* str1, char* str2)
	{
		while (*str2++ = *str1++);
	}
}

int main()
{
	setlocale(LC_ALL, "");
	char str1[10];
	char str2[10];
	copy_str::input(str1);
	int lenStr = copy_str::size_str1(str1);
	copy_str::cpyStr(str1, str2);
	cout << "Скопированная строка:\n" << str2;
}