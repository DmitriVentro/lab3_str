#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream> 
#include <string>
using namespace std;
namespace SecondTask
{
	void FindTheShortestWord(char* MainStr, int min, char* BeforeChangesStr)
	{
		cout << MainStr;
		for (char* p = strtok(MainStr, " "); p; p = strtok(NULL, " "))
		{
			if (strlen(p) < min)
			{
				min = strlen(p);
				strcpy(BeforeChangesStr, p);
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "");
	int min = 25;
	char MainStr[100];
	char BeforeChangesStr[100];
	char AllFileInOneArray[3][41];
	const char p = '\n';
	string path = "D:\\who\\LoveCPP.txt";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "файла не будет он принял ислам:/\n";
		return 0;
	}
	for (int i = 0; i < 3; i++)
	{
		fin.getline(AllFileInOneArray[i], 41 - 1, p);
		cout << AllFileInOneArray[i] << "\n";
	}
	cout << endl;
	strcpy(MainStr, AllFileInOneArray[0]);
	SecondTask::FindTheShortestWord(MainStr, min, BeforeChangesStr);
	cout << endl << "Самое короткое слово: " << BeforeChangesStr;
	return 0;
}