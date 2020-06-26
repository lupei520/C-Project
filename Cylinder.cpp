#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
float volume(float h,float r=0.0, float d = 0.0){
	const float pi = 3.14;
	if (r != 0.0) {
		float v = pi * r * r * h;   //体积计算公式: π 乘以 半径的平方 乘以高
 		return v;
	}
	else if (d != 0.0) {
		r = d / 2;   //将直径转化为半径再套入公式
		float v = pi * r * r * h;
		return v;
	}
}
float area(float h, float r = 0.0, float d = 0.0,int Mian=2) {
	const float pi = 3.14;
	if (r != 0.0) {
		float s = 2 * pi * r * h + pi * r * r * Mian;
		return s;
	}
	else if (d != 0.0) {
		r = d / 2;
		float s = 2 * pi * r * h + pi * r * r * Mian;
		return s;
	}
}
int main() {
	string answer;
	cout << "条件是半径(1)还是直径(2): ";
	cin >> answer;
	if (answer == "1" || answer == "半径") {
		//如果条件是半径，则执行以下代码!
		string r_string;
		string h_string;
		cout << "请输入半径的值: ";
		cin >> r_string;
		cout << "请输入高的值: ";
		cin >> h_string;
		float r = stof(r_string);
		float h = stof(h_string);
		cout << "体积: " << volume(h, r)<<endl;
		cout << "表面积: " << area(h, r) << endl;
	}
	else if (answer == "2" || answer == "直径") {
		//如果条件是半径，则执行以下代码!
		string d_string;
		string h_string;
		cout << "请输入直径的值: ";
		cin >> d_string;
		cout << "请输入高的值: ";
		cin >> h_string;
		float d = stof(d_string);
		float h = stof(h_string);
		cout <<"体积: "<< volume(h,0.0,d)<<endl;
		cout << "表面积: " << area(h, 0.0, d) << endl;
	}
	else {
		cout << "请输入正确地你的条件!";
	}
	system("pause");
	return 0;
}
