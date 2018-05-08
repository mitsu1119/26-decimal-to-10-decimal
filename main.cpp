#include <iostream>
#include <string>
#include <math.h>
using namespace std;

long long Conv(string s) {
	int num;
	long long ans = 0;
	for(int i=0; i<(int)s.size(); i++) {
		if((int)s[i] > 96)	{	//アルファベットのとき
			num = (int)s[i]-87;	//i文字目のアルファベットの数値 a:10 b:11 ...
		} else {										//数値のとき
			num = (int)s[i]-48;	//i文字目の数字の数値 0:0 1:1 ...
		}
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
