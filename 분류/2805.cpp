#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000000];
int N, M;

void binarySearch(){
    int start = 0;
    int end = arr[N-1];
    int mid;
    int ans =0;
    while(end>=start){
      long long int sum = 0;
      mid =(start+end)/2;
      for(int i =0; i< N; i++){
        if(arr[i] > mid){
          sum+= arr[i] -mid;
        }
      }
      if(sum < M){
        end = mid-1;
      }else{
        ans = mid;
        start = mid+1;
      }
    }
    cout<< ans;
    return;
}
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  cin >> N >> M;
  for(int i =0; i < N; i++){
    cin >> arr[i];
  }
  sort(arr, arr+N);

  binarySearch();
}