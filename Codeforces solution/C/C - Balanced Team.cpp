#include <iostream>
#include<vector>
#include <algorithm>
typedef long long ll;
using namespace std;
int main() {
	ll L = 0, R=0, ans = 0,n;
	cin >> n;
	vector <ll> x(n);
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	sort(x.begin(), x.end());
	for (;L<n;L++){
		while (R < n && x[L]+5>=x[R]){
				R++;
		}
			ans = max(ans, R - L);
	}


	cout << ans;
}