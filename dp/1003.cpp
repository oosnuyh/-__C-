#include <iostream>
#include <vector>

using namespace std;

int main(){
  ios_base::sync_with_stdio(false); 
  cin.tie(NULL);
  cout.tie(NULL);
  int T, N;
  cin >> T; //테스트 케이스의 개수
  vector<int> dp(41, 0);
  dp[1] = 1;
  dp[2] = 1;
  for(int i = 3; i< 41; i++){
    dp[i] = dp[i-1]+dp[i-2];   // dp에 피보나치 수열을 정의
  }
  for(int i =0; i< T; i++){
    cin >> N;         // 몇번째 수열인지 입력받음
    if(N == 0){
      cout << "1 0\n";   // 0이 1번 1이 0번 출력된 것을 의미
    }
    else if(N == 1){
      cout << "0 1\n";   // 0이 0번 1이 1번 출력된 것을 의미
    }
    else{
      cout << dp[N-1] << " " << dp[N] << "\n";    // 0과 1이 실행되는 횟수를 봣을때 0은 피보나치 수열의 N-1번째, 1은 N번쨰 인것을 알 수 있다.
    }
  }
}
