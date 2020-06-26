#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include <string>
using namespace std;
float GetCircumference(float r = 0.0, float d = 0.0) {
	const float pi = 3.14;
	if (r != 0.0) {
		float c = 2 * pi * r;
		return c;
	}
	else if (d != 0.0) {
		float c = pi * d;
		return c;
	}
}
float GetArea(float r = 0.0, float d = 0.0) {
	const float pi = 3.14;
	if (r != 0.0) {
		float s = pi * r * r;
		return s;
	}
	else if (d != 0.0) {
		r = d / 2;
		float s = pi * r * r;
		return s;
	}

}
int main() {
	string r_string;
	string answer;
	cout << "条件是半径(1)还是直径(2): ";
	cin >> answer;
	if (answer == "1" || answer == "半径") {
		cout << "输入半径:";
		cin >> r_string;
		float r = stof(r_string);
		cout << "面积:" << GetArea(r) << endl;
		cout << "周长:" << GetCircumference(r) << endl;
		system("pause");
		return 0;
	}
	else if (answer == "2" || answer == "直径") {
		cout << "输入直径:";
		cin >> r_string;
		float r = stof(r_string);
		cout << "面积:" << GetArea(0.0, r) << endl;
		cout << "周长:" << GetCircumference(0.0, r) << endl;
		system("pause");
		return 0;
	}
}
