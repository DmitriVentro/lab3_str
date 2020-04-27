#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void input_file()
{
	string str;
	ifstream file;
	file.open("D:\\who\\LoveCPP.txt", ios::in);
	if (!file.is_open()) { cout << "Error: no file\n" << endl; }
	else
	{
		while (file.get(s))
		{
			if (s == '!'  s == '?'  s == '.') break;
			else k++;
		}
	}
	char* s2 = new char[k];
	for (int i = 0; i < k; i++)
	{
		file >> s2;
		cout << s2 << "\t";
	}
}

int main()
{

}