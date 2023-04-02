#include <iostream>

using namespace std;

int main(){	
	int n;
	int cnt = 0;
	string str;
	cin >> n;

	for(int i=0; i<n; i++){
		cin >> str;
		int size = str.length();
		bool flag = true;
		
		for(int j=0; j<size; j++){
			for(int k=0; k<j; k++){
				if(str[j] != str[j-1] && str[j] == str[k]){		// 사용된 문자가 다시 사용되었을 때
					flag = false;																// flag를 false로 바꾸고 for문을 벗어난다.
					break;			
				}				
			}
		}
		if(flag) cnt++;																		// flag가 true일 경우 그룹단어이기에 cnt는 증가한다.
	}
	
	cout << cnt;

    return 0;
}