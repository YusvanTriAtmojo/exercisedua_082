#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x;
public:
	bidangDatar() {
		x = 0;
	}
	virtual void input (){}
	virtual float Luas(int a) { return 0; }
	virtual float Keliling(int a) { return 0; }
	void setX(int a) {
		this->x = a;
	}
	int getX() {
		return x;
	}
};
class Lingkaran : public bidangDatar {
	void input() {
		int x;
		cout << "Lingkaran dibuat\n" <<  endl;
		cout << "Masukkan jejari: ";
		cin >> x;
	}
	float Luas() {
		int a;
		return 3,14 * a * a;
		cout << "Luas lingkaran= " << endl;
	}
	float Keliling() {
		int a;
		return 3,14 * a * 2;
		cout << "Keliling lingkaran= " << endl;
	}
};
class Bujursangkar : public bidangDatar {
	void input(int x) {
		cout << "Bujursangkar dibuat\n" << endl;
		cout << "Masukkan sisi: ";
		cin >> x;
	}
	float Luas() {
		int a;
		return a * a;
		cout << "Luas Bujursangkar= " << Luas << endl;
	}
	float Keliling() {
		int a;
		return 4 * a;
		cout << "Keliling Bujursangkar= " << Keliling << endl;
	}
};

int main() {
	bidangDatar* bidang;
	Lingkaran L;
	Bujursangkar B;
	bidang = &L;
	bidang->input();
	bidang->Luas(1);
	bidang->Keliling(1);
	bidang = &B;
	bidang->input();
	bidang->Luas(1);
	bidang->Keliling(1);
	system("pause");
	return 0;
}
