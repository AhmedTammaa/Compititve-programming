#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <math.h>
#include <set>
#include <map>
#include <queue>
#include <deque>
typedef long long ll;
using namespace std;
int main() {
		int n;
		cin >> n;
		vector<int> x(n);
		for (int i = 0; i < n; i++) {
			cin >> x[i];
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			if (x[i] != x[0]) {
				ans = max(ans, i);
			}
			if (x[i] != x[n - 1]) {
				ans = max(ans, n - 1 - i);
			}
		}
		cout << ans << '\n';
		return 0;
	
}