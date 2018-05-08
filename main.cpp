#include <iostream>
#include <string>
#include <math.h>
using namespace std;

long long Conv(string s) {
	int num;
	long long ans = 0;
	for(int i=0; i<(int)s.size(); i++) {
		num = (int)s[i]-96;	//i文字目のアルファベットの数値 a:1 b:2 ...
		ans += num*pow(26,(int)s.size()-1-i);
	}
	return ans;
}

int main() {
	string s;
	cin >> s;
	
	cout << Conv(s) << endl;
	
	return 0;
}
