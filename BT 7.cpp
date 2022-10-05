//BAI TAP THUC HANH BUOI 3
//MAI VAN HUY
//N21DCCN129
//D21CQCN02-N
#include<iostream>
#include<string>
#include<math.h>
using namespace std;
class ptb2 {
private:
	float a, b, c;
public:
	ptb2() {
		a = 0;
		b = 0;
		c = 0;
	}
	float getA() {
		return a;
	}
	void setA(float a) {
		this->a = a;
	}
	float getB() {
		return b;
	}
	void setB(float b) {
		this->b = b;
	}
	float getC() {
		return c;
	}
	void setC(float c) {
		this->c = c;
	}
	void giaipt() {
		float denta = b * b - 4 * a * c;
		if (denta < 0) cout << "Phuong trinh vo nghiem";
		else if (denta == 0) cout << "Phuong trinh co nghiem kep: x=" << -b /(2 * a); 
		else cout << "Phuong trinh co hai nhiem phan biet: x1=" << (-sqrt(denta) - b) /(2 * a) << ", x2=" << (sqrt(denta) - b) / (2 * a);
	}
};
int main() {
	ptb2 giai;
	float a, b, c;
	cout << "Nhap he so A: ";
	cin >> a;

	cout << "Nhap he so B: ";
	cin >> b;

	cout << "Nhap he so C: ";
	cin>> c;

	giai.setA(a);
	giai.setB(b);
	giai.setC(c);
	giai.giaipt();
}
