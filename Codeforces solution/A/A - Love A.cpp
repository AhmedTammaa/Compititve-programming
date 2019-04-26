#include<vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int main() {
	string s;
	int counter = 0;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s.at(i) == 'a') {
			
			counter++;
		}
	}
	int half = s.size() / 2,i=0;
	while ( (counter <= half) && (i < s.size())){
		if (s.at(i) != 'a') {
			s.erase(i, 1);
			 half = s.size() / 2;
			i = -1;
		}
		i++;
	}
	cout << s.size();
	return 0;
}