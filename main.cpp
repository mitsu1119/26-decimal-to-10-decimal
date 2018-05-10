#include <iostream>
#include <string>
#include <math.h>
using namespace std;

long long Conv(int decimal, string s) {
	int num;
	long long ans = 0;
	int string_size = (int)s.size();
	for(int i=0; i<string_size; i++) {
		if((int)s[i] > 96)	{							//小文字ののとき
			num = (int)s[i]-87;						//i文字目のアルファベットの数値 a:10 b:11 ...
		} else if((int)s[i] > 64) {			//大文字のとき
			num = (int)s[i]-29;						//i文字目のアルファベットの数値 A:35 B:36 ...
		} else {															//数値のとき
			num = (int)s[i]-48;						//i文字目の数字の数値 0:0 1:1 ...
		}
		ans += num*pow(decimal,string_size-1-i);
	}
	return ans;
}

int main() {
	string s;
	int decimal;
	cout << "何進数を10進数へ変換しますか(2-62)：";
	cin >> decimal;
	cout << "変換したい数値(0,1,2,...a,b,c,...A,B,C...Z)" << endl;
	cin >> s;
	
	cout << Conv(decimal,s) << endl;
	
	return 0;
}
