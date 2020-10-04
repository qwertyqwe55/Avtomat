#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
	int count[5] = { 0,1,2,3,4};
	string file_name;
	const int n = 5;
	int col;
	int num = 0;
	string types[n] = { "htm", "html", "class", "js", "css" };
	int i=1;
	int j = 0;
	int point = 0;
	string type;
	string s;
	string file = "text.txt";
	ifstream input(file);

	//if (!input.is_open()) {
	//	cout << "ERROR" << endl;
	//}
	//else {
	//	while (getline(input, file_name)) {
	//		cout << file_name << endl;
	//	}
	//}
	cin >> file_name;
	cin >> col;
	do {
		switch (count[i]) {
			case 1:
				 if (('A' < file_name[j] < 'Z') || ('a' < file_name[j] < 'z')) {
					 s += file_name[j];
					 if (file_name[j] == '.') {
						i = 2;
						point = j;
					 }
				}
				else {
					 j = point;
					 s = "";
				}
				break;
			case 2:
				 if ('a' < file_name[j] < 'z') {
					s += file_name[j];
					type += file_name[j];
					for (int k = 0; k < n; k++)
					{
						if (type == types[k]) {
							i = 3;
						}
					}
					if (type.length() - 1 > 5) {
						s = "";
						type = "";
						j = point;
						i = 1;
					}
				}
				else {
					 j = point;
					 s = "";
					 i = 1;
				}
				break;
			case 3:
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

