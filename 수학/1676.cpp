#include <iostream>
#include <vector>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;
  int cnt = 0;
  for(int i =1; i<=N; i++){
    int tmp = i;
    while(true){
      if((tmp % 5) ==0){     // 소인수 분해 햇을 때, 2의 갯수보다 5의 갯수가 작으므로 5의 개수를 셈
        tmp /= 5;
        cnt++;
      }
      else{
        break;
      }
    }
  }

  cout << cnt;
}