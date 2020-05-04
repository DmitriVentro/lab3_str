#define _CRT_SECURE_NO_WARNINGS
#define DELIM " \t\n,.:;?!"
#include <iostream>
#include <fstream> 
#include <string>
using namespace std;
struct word_t {
	char* _word;
	size_t length;
};
namespace ThirdTask
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
	

	void _swap(word_t& w1, word_t& w2) {
		word_t tmp = w1;
		w1 = w2;
		w2 = tmp;
	}
}

int main()
{
	setlocale(LC_ALL, "");
	int min = 25;
	char MainStr[100];
	char BeforeChangesStr[100];
	char AllFileInOneArray[3][41];
	char str1[100];
	char str2[100];
	char str3[100];
	char *NewStr1;
	char *NewStr2;
	char *NewStr3;
	char p = '\n';
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
	word_t words[BUFSIZ];


	/*
	strcpy(str1, AllFileInOneArray[0]);
	strcpy(str2, AllFileInOneArray[1]);
	strcpy(str3, AllFileInOneArray[2]);
	cout << str1 <<"\n";
	cout << str2 <<"\n";
	cout << str3 <<"\n";
	*/
	int i = 0, j;
	for (NewStr1 = strtok(str1, DELIM); NewStr1; NewStr1 = strtok(NULL, DELIM)) {
		words[i]._word = new char[strlen(NewStr1) + 1];
		strcpy(words[i]._word, NewStr1);
		words[i++].length = strlen(NewStr1);
	}
	for (int i_ = 0; i_ < i; ++i_)
		for (j = i_; j < i; ++j)
			if (words[i_].length > words[j].length)
				ThirdTask::_swap(words[i_], words[j]);
	for (j = 0; j < i; ++j)
		std::cout << words[j]._word << ' ';
	for (j = 0; j < i; ++j)
		delete[] words[j]._word;

	cout << endl << AllFileInOneArray;
	return 0;
}