// OOP_lab_3.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class A {
private:
	float a,c, b;
public:

	A() {
		a = 15;
		b = 3;
	}
	
	void operation() {
		a = a / b;
		c = a - b;
		cout << c;
	}

};

int main() {
	A *n = new A();
	n->operation();
	system("pause");
	return 0;
}
