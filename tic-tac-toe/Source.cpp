// ������������ ������ C++
#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
using namespace std;


 const int rows = 3;
 const int colums = 3;
char field[rows][colums] = {
	{'_','_','_'},
	{'_','_','_'},
	{'_','_','_'}
};
bool file_ex(string &path) {
	ifstream chek;
	chek.open(path);
	if (chek.is_open()) {
		chek.close();
		return true;
	}
	chek.close();
	return false;
}

int main() {
	setlocale(LC_ALL, "ru");
	SYSTEMTIME date;
	GetSystemTime(&date);
	
	
	ofstream out;
	out.exceptions(ios::badbit | ios::failbit | ios::eofbit);
	string slot;
	cout << "������� �������� �����:\n";
	getline(cin, slot);
	slot += ".save";
	out.open("saves/" + slot);
					out << "#commit with #";
			out << "\n���� ����������: " <<(date.wDay)<<"." << (date.wMonth)<<"." << date.wYear <<" " << (date.wHour + 5) << ":" << date.wMinute << endl;
		

		/*
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < colums; j++)
				out << fild[i][j];
			out << "\n";
		}
		out << turn << "\n";
		*/
	
	
	out.close();
	cout << "���� ��������";


	system("pause>null");
	return 0;
}
