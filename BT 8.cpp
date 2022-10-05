//BAI TAP THUC HANH BUOI 3
//MAI VAN HUY
//N21DCCN129
//D21CQCN02-N
#include<iostream>
#include<string>
using namespace std;
class Point {
private:
	int x;
	int y;
	string name;
public:
	Point() {
		x = 0;
		y = 0;
	}
	void show() {
		cout <<"Diem "<< name << '(' << x << "; " << y << ')';
	}
	int getX() {
		return x;
	}
	void setX(int x) {
		this->x = x;
	}
	int getY() {
		return y;
	}
	void setY(int y) {
		this->y = y;
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	float distance( Point B) {
		return sqrt(pow(x - B.x, 2) + pow(y - B.y, 2));
	}
};
int main() {
	int n=0;
	while (n <= 0) {
		cout << "Nhap so diem: ";
		cin >> n;
	}

	Point* point = new Point[n];
	for (int i = 0; i < n; i++) {
		int x, y;
		string name;
		
		cout << "Nhap ten diem: ";
		cin.ignore();
		getline(cin, name);
		point[i].setName(name);

		cout << "Nhap toa do X: ";
		cin >> x;
		point[i].setX(x);

		cout << "Nhap toa do Y: ";
		cin >> y;
		point[i].setY(y);
	}
	float min=INT_MAX;
	int position = 0;
	for (int i = 0; i < n; i++) {
		float kc = 0;
		for (int j = 0; j < n; j++) {
			kc += point[i].distance(point[j]);
		}
		if (kc < min) min = kc, position = i;
	}

	cout << "Diem trong tam la: "; point[position].show();
	delete[]point;
	return 0;
}
