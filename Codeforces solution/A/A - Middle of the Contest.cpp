#include <iostream>
#include<vector>
#include <algorithm>
#include <string>
typedef long long ll;
using namespace std;
int main() {
	string beginn,endd;
	cin >> beginn>>endd;
	int hh = stoi(beginn.substr(0, 2)),hh2= stoi(endd.substr(0, 2));
	int finder = beginn.find(':');
	int mm = stoi(beginn.substr(finder + 1)),mm1=stoi(endd.substr(finder+1));
	int midhh = (hh + hh2)/2;
	float midhhf = hh + hh2;
	midhhf /= 2;
	midhhf -= midhh;
	midhhf *= 100;
	midhhf = (60 * midhhf) / 100;
	int midmm = (mm + mm1) / 2;

	midmm += midhhf;
check:
	if (midmm >= 60) {
		midhh++;
		midmm-=60;
		goto check;
	}
	if (midhh < 10) {
		cout << "0" << midhh << ":";
	}
	else {
		cout << midhh<<":";
	}
	if (midmm < 10) {
		cout << "0" << midmm;
	}
	else {
		cout << midmm;
	}
jump:
	return 0;
}