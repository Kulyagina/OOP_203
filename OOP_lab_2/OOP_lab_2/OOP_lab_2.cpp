#include "stdafx.h" 
#include <iostream> 
#include <fstream>
#include <cctype> 

using namespace std;
int _tmain() {

	setlocale(LC_ALL, "rus");
	string alfavit = "ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏĞÑÒÓÔÕÖ×ØÙÚÛÜİŞß";
	int count[33];
	int n = 0;
	int code = 0;
	for (int i = 0; i<33; i++) {
		count[i] = 0;
	}

	ifstream fin("in.txt");
	char c;
		while (!fin.eof())
	{
		fin >> c;
		c = toupper(c);
		code = (int)c;
		if (((code <= -33) && (code >= -64)) || (code == -88)) {
			n++;
			if (code == -88) {
				count[code + 94]++;
			}
			else {
				if (code <= -59) {
					code+=64;
					count[code]++;
				}
				else {
					code+=65;
					count[code]++;
				}
			}
		}
	}
count[code]--;

		fin.close();
	for (int i = 0; i<33; i++) {

		cout << alfavit[i] << " " << count[i] << "     " << ((double(count[i])) / n) << endl;

	}
	cout << "count " << n<<endl;
	system("pause");
	return 0;


}


