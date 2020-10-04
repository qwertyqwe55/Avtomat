#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// { "htm", "html", "class", "js", "css" };

int main()
{
	int count[9] = { 0,1,2,3,4,5,6,7,8};
	string file_name;
	const int n = 5;
	int col;
	int num = 0;

	int i=1;
	int j = 0;
	string s;

	cin >> file_name;
	cin >> col;
	do {
		switch (count[i]) {
			case 1:
				 if (('A' < file_name[j] < 'Z') || ('a' < file_name[j] < 'z')) {
					 s += file_name[j];
					 if (file_name[j] == '.') {
						i = 2;
					 }
				}
				else {
					 s = "";
				}
				break;
			case 2:
				 if (file_name[j] == 'h') {
					 i = 3;
					 s += file_name[j];
				 }
				 else if (file_name[j] == 'c') {
					 i = 4;
					 s += file_name[j];
				 }
				 else if (file_name[j] == 'j') {
					 i = 5;
					 s += file_name[j];
				 }
				else {
					 s = "";
					 i = 1;
				}
				break;
			case 3:
				if (file_name[j] == 't') {
					i = 6;
					s += file_name[j];
				}
				else {
					i = 1;
					s = "";
				}
				break;
			case 6:
				if (file_name[j] == 'm') {
					i = 7;
					s += file_name[j];
				}
				else {
					s = "";
					i = 1;
				}
				break;
			case 7:
				if (file_name[j] == 'l') {
					i = 8;
					s += file_name[j];
				}
				else {
					i = 8;
				}
			case 8:
				cout << s << endl;
				num++;
				s = "";
				if (col == num) {
					i = 0;
				}
				else {
					i = 1;
				}
				break;
		}
		if (file_name[j] == '\0') {
			i = 0;
		}
		else {
			j++;
		}
	} while ((count[i] != 0));
}

