#include <iostream>
using namespace std;

int R;//���� ������

void InputData(){
	cin >> R;
}

int main() {
	int ans;
	InputData();//�Է�
	
	//���⼭���� �ۼ�
	for (int i = 1; i <= R; i++) {
		for (int j = 1;  j <= R; j++) {
			if (i*i+j*j <= R*R) ans++;
		}
	}	
	
	ans *= 4;
	
	cout << ans << endl;//���
	return 0;
}
