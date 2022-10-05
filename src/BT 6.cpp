//BAI TAP THUC HANH BUOI 3
//MAI VAN HUY
//N21DCCN129
//D21CQCN02-N
#include<iostream>
#include<string>
using namespace std;
class Rectangle {
private:
	int width;
	int length;
public:
	Rectangle() {
		width = -1;
		length = -1;
	}
	int getWidth() {
		return width;
	}
	void setWidth(int width) {
		this->width = width;
	}
	int getLength() {
		return length;
	}
	void setLength(int length) {
		this->length = length;
	}
	int getPerimeter() {
		return (length + width) * 2;
	}
	int getArea() {
		return length * width;
	}
	void display() {
		cout << "Dien tich hinh chu nhat: " << getArea()<<endl;
		cout << "Chu vi hinh chu nhat: " << getPerimeter() << endl;
	}
};
int main() {
	Rectangle hcn;
	int input;
	cout << "Nhap chieu rong cua hinh chu nhat: ";
	cin >> input;
	hcn.setWidth(input);

	cout << "Nhap chieu dai cua hinh chu nhat: ";
	cin >> input;
	hcn.setLength(input);

	hcn.display();
	return 0;
}
