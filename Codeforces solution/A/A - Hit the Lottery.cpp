#include <iostream>
using namespace std;
int main()
{
	int n,counter=0;
	cin >> n;
		if (n >= 100) {
			int mod = n % 100;
			int div = n / 100;
			counter += div;
			n = mod;
		}
		if (n >= 20) {
			int mod = n%20;
			int div = n / 20;
			counter += div;
			n = mod;
		}
		if (n >= 10) {
			int mod = n % 10;
			int div = n / 10;
			counter += div;
			n = mod;
		}
		if(n>=5){
			int mod = n % 5;
			int div = n / 5;
			counter += div;
			n = mod;

		}
		if (n!=0){
			counter += n;
		}
	
	cout << counter;
	return 0;
}