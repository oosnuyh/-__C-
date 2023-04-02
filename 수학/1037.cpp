#include <iostream>
#include <algorithm>

using namespace std;

int main(){

  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;

  int arr[N];

  for(int i =0; i < N; i++){
    cin >> arr[i];
  }
  int arr_min = arr[0];  // 약수중 가장 작은 수
  int arr_max = arr[0];  // 약수중 가장 큰 수
  for(int i = 1; i < N; i++){  // N이 1일 경우는 작용 X
    arr_min = min(arr_min, arr[i]);
    arr_max = max(arr_max, arr[i]);
  }
  cout << arr_min * arr_max;   // 약수는 짝을 이루기 때문에 가장 작은수와 큰 수의 곱이 구하고자 하는 값이 된다.

}
