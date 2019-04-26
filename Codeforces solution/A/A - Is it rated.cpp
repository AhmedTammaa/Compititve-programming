#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	vector<int> qeruy1,query2;
	int n,sum1=0,sum2=0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int temp;
		cin >> temp;
		qeruy1.push_back(temp);
		sum1 += temp;
		cin >> temp;
		sum2 += temp;
		query2.push_back(temp);
	}
		bool checker = false;
		for (int i = 0; i < n; i++) {
			if (qeruy1[i] != query2[i]) {
				checker = true;
				cout << "rated";
				return 0;
			}
		}
		sort(qeruy1.rbegin(), qeruy1.rend());
		for (int i = 0; i < n; i++) {
			if (qeruy1[i] != query2[i]) {
				checker = true;
				break;
			}
		}
		if (checker) {
			cout << "unrated";
		}
		else {
			cout << "maybe";
		}
		
}