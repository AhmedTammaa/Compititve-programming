#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <string>
#include <map>
#include <set>
#include <deque>
using namespace std;
int main() {
	long long n, m, counteroddkey=0, counterevenkey=0, counteroddchest=0, counterevernchest = 0,ans=0;
	cin >> n >> m;
	for (long long i = 0; i < n; i++) {
		long long temp;
		cin >> temp;
		if (temp % 2 == 0) {
			counterevernchest++;
		}
		else {
			counteroddchest++;
		}
	}
	for (long long i = 0; i < m; i++) {
		long long temp;
		cin >> temp;
		if (temp % 2 == 0) {
			counterevenkey++;
		}
		else {
			counteroddkey++;
		}
	}
	if (counterevenkey <= counteroddchest) {
		ans += counterevenkey;
	}
	else {
		ans += counteroddchest;
	}
	if (counteroddkey <= counterevernchest) {
		ans += counteroddkey;
	}
	else {
		ans += counterevernchest;
	}
	cout << ans;
}