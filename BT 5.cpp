//BAI TAP THUC HANH BUOI 3
//MAI VAN HUY
//N21DCCN129
//D21CQCN02-N
#include<iostream>
#include<string>
using namespace std;
class Thisinh {
private:
	string hoten;
	int somonthi;
	float* diem;
	float trungbinh;
public:
	Thisinh() {
		hoten = "N/A";
	}
	void show() {
		cout << "Ho va ten: " << hoten << endl;
		cout << "Diem cac mon thi: ";
		for (int i = 0; i < somonthi; i++)cout << diem[i] << ' ';
		cout << endl << "Diem trung binh: " << trungbinh << endl;
	}
	string getHoten() {
		return hoten;
	}
	void setHoten(string hoten) {
		this->hoten = hoten;
	}
	int getSomonthi() {
		return somonthi;
	}
	void setSomonthi(int somonthi) {
		this->somonthi = somonthi;
	}
	float* getDiem() {
		return diem;
	}
	void setDiem(int somonthi) {
		diem = new float[somonthi];
		for (int i = 0; i < somonthi; i++) {
			cin >> diem[i];
		}
		setTrungbinh();
	}
	float getTrungbinh() {
		return trungbinh;
	}
	void setTrungbinh() {
		float trungbinh = 0.0;
		for (int i = 0; i < somonthi; i++) {
			trungbinh += diem[i];
		}
		trungbinh /= somonthi;
		this->trungbinh = trungbinh;
	}
	bool kiemtradiem0() {
		for (int i = 0; i < somonthi; i++) if (diem[i] == 0)return false;
		return true;
	}
	~Thisinh() {
		delete[]diem;
	}
};
int main() {
	int n;
	cout << "Nhap so thi sinh: ";
	cin >> n;

	Thisinh* thisinh;
	thisinh = new Thisinh[n];
	string hoten;
	int somonthi;
	float diem;
	for (int i = 0; i < n; i++) {
		cout << "Nhap ho va ten thi sinh: ";
		cin.ignore();
		getline(cin, hoten);
		thisinh[i].setHoten(hoten);

		cout << "Nhap so mon thi cua thi sinh: ";
		cin >> somonthi;
		thisinh[i].setSomonthi(somonthi);

		cout << "Nhap diem thi tung mon cua thi sinh: " << endl;
		thisinh[i].setDiem(somonthi);
		cout << endl;
	}

	for (int i = 0; i < n; i++) {
		if (thisinh[i].getTrungbinh() >= 5 && thisinh[i].kiemtradiem0()) {
			thisinh[i].show();
			cout << endl;
		}
	}
	delete[] thisinh;
	return 0;
}
