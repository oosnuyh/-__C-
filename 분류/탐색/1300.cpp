#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);


  long long N, k;
  cin >> N >> k;
  int ans =0;

  long long start = 1;
  long long end = k;
  long long mid;
  while(end >= start){
    long long cnt =0;
    mid = (start + end)/2;
    for(int i =1; i <=N; i++){
      cnt += min(mid/i, N);             //mid의 값보다 작거나 같은 수들의 개수
    }
    if(cnt < k)                         // 목표값보다 mid의 갯수가 작으므로 mid의 값을 더 크게 해야함 따라서 start의 수를 키워줌
      start = mid +1;
    else{                               // 목표값보다 mid의 갯수가 크므로 mid의 값을 더 작게 해야함 따라서 end의 크기를 줄임
      ans = mid;
      end = mid -1;
    }
  }
  cout << ans;
}