#include<iostream>
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
		this->x;
	}
	int getX() {
		return x;
	}
};

class Lingkaran :public bidangDatar{
public:
	float Luas() {
		cout << "Luas Lingkaran" << endl;
	}
	float keliling() {
		cout << "Keliling Lingkaran" << endl;
	}

};

class bujursangkar : public bidangDatar {
	float Luas() {
		cout << "Luas bujursangkar" << endl;
	}
	float keliling() {
		cout << "Keliling bujursangkar " << endl;
	}
};

int main() {
	bidangDatar* bentuk;
		Lingkaran a;
		bujursangkar b;

		bentuk = &a;
		bentuk->Luas();
		bentuk = &b;
		bentuk->Luas();


		bentuk = &a;
		bentuk->Keliling();
		bentuk = &b;
		bentuk->Keliling();

		return 0;
}