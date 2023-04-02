#include <bits/stdc++.h>

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  long long N, M;
  cin >> N >> M;
  long long sum[N+1] ={0,};
  long long cnt =0;
  long long arr[M+1] ={0,};
  for(int i =1; i<= N; i++){
    int num;
    cin >> num;
    sum[i] =(sum[i-1] + num) % M;
    arr[sum[i]]+= 1;
  }
  for(int i =0; i<M; i++){
    if(arr[i] >=2)
     cnt += ((arr[i]*(arr[i]-1)) / 2);
  }

  cout << arr[0] + cnt;
}
/* sum[i] -sum[j] % M == 0 이란 것은
 sum[i] % M == sum[j] ==0이란 것을 의미한다.
 그래서 arr이라는 배열에 나머지 M을 저장하고
 그 값이 2개이상일때 nC2를 통해 2개를 뽑아 나머지를 0을 만듬 */