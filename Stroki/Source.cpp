#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
namespace copy_str
{
	void input(char *str1)
	{
		cout << "¬веди строку:\n";
		fgets(str1, 10, stdin);
		cout << str1;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	char *str1[10];
	
}