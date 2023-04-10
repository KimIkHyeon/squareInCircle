#include <iostream>
using namespace std;

int R;//원의 반지름

void InputData(){
	cin >> R;
}

int main() {
	int ans;
	InputData();//입력
	
	//여기서부터 작성
	for (int i = 1; i <= R; i++) {
		for (int j = 1;  j <= R; j++) {
			if (i*i+j*j <= R*R) ans++;
		}
	}	
	
	ans *= 4;
	
	cout << ans << endl;//출력
	return 0;
}
