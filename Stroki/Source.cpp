#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;
int main()
{
	const int whosurstr = 3;
	setlocale(LC_ALL, "");
	const char p = '\n';
	char* arr[100];
	char str1[100];
	char array[3][41];
	string path = "D:\\who\\LoveCPP.txt";
	ifstream fin;
	fin.open(path);
	if (!fin.is_open())
	{
		cout << "����� �� ����� �� ������ �����:/\n";
		return 0;
	}
	for (int i = 0; i < 3; i++)
	{
		fin.getline(array[i], 41 - 1, p);
		cout << array[i] << "\n";
	}
	cout << "\n\n";
	cout << "��������������� ������:\n";
	for (size_t i = 0; i < whosurstr; i++)
	{
		strcpy(str1, array[i]);
		//cout << str1;
		char* pch;
		pch = strtok(str1, " !?,.-"); // �� ������ ��������� ������� ����������� (������, �������, �����, ����)

		int k = 0;
		while (pch != NULL)
		{
			arr[k] = pch;
			k++;
			pch = strtok(NULL, " !?,.-");
		}
		char* temp = NULL; // ��������� ���������� ��� ������ ��������� �������

			// ���������� ������� ���������
		for (int i = 0; i < k - 1; i++) {
			for (int j = 0; j < k - i - 1; j++) {
				if (strlen(arr[j]) < strlen(arr[j + 1])) {
					// ������ �������� �������
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				}
			}
		}
		
		for (int i = 0; i < k; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	return 0;
}