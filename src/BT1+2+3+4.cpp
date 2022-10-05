//BAI TAP THUC HANH BUOI 3
//MAI VAN HUY
//N21DCCN129
//D21CQCN02-N
#include<iostream>
#include<string>
using namespace std;
class Car {
private:
	string brand;
	int weight;
	int seats;
	int travelers;
	string* travelers_list;
public:
	Car() {
		brand = "N/A";
		weight = 0;
		seats = 0;
	}
	Car(string brand, int weight, int seats) {
		this->brand = brand;
		this->weight = weight;
		this->seats = seats;
	}
	void show() {
		cout << "Brand: " << brand << endl;
		cout << "Weight: " << weight << endl;
		cout << "Seats: " << seats << endl;
		cout << "Travelers_list: " << endl;
		for (int i = 0; i < travelers; i++) {
			cout <<"\t#"<< i+1 << " Id: " << travelers_list[i] << endl;
		}
	}
	string getBrand() {
		return brand;
	}
	void setBrand(string brand) {
		this->brand = brand;
	}
	int getWeight() {
		return weight;
	}
	void setWeight(int weight) {
		this->weight = weight;
	}
	int getSeats() {
		return seats;
	}
	void setSeats(int seats) {
		this->seats = seats;
	}
	int getTravelers() {
		return travelers;
	}
	void setTravelers(int travelers) {
		this->travelers = travelers;
	}
	string* getTravelers_list() {
		return travelers_list;
	}
	void setTravelers_list(int travelers) {
		travelers_list = new string[travelers];
		for (int i = 0; i <travelers; i++) {
			cout << "Id of travelers: ";
			cin >> travelers_list[i];
		}
	}
	~Car() {
		delete [] travelers_list;
		
	}
};
int main() {
	int n;
	Car* car1;
	car1 = new Car[10000];
	string inputs;
	int input;
	
	cout << "Nhap so luong xe: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		cout << "Nhap nhan hieu xe: ";
		cin.ignore();
		getline(cin, inputs);
		car1[i].setBrand(inputs);

		cout << "Nhap trong luong xe: ";
		cin >> input;
		car1[i].setWeight(input);

		cout << "Nhap so ghe ngoi trong xe: ";
		cin >> input;
		car1[i].setSeats(input);

		cout << "Nhap so luong khach: ";
		cin >> input;
		while (input<0 || input>car1[i].getSeats()) {
			cout << "Nhap lai so luong khach: ";
			cin >> input; 
		}
		car1[i].setTravelers(input);
		car1[i].setTravelers_list(input);
	}
	cout << endl;
	for (int i = 0; i < n; i++) car1[i].show(),cout<<endl;
	delete[] car1;
	return 0;
}

