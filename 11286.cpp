#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int N;
  cin >> N;
  int a;
  vector<int> arr;
  for(int i =0; i < N; i++){
    cin >> a;

    if(a != 0){
      arr.push_back(a);
    }
    else{
      if(arr.size() == 0){
        cout << 0 << "\n";
      }
     else{
        int arr_min = abs(arr[0]);
        int idx =0;
        int cnt;
        for(int j = 1; j<arr.size(); j++){
          if(abs(arr[j]) < arr_min){
            arr_min = abs(arr[j]);
            idx = j;
          }
        }
        for(int j = 0; j<arr.size(); j++){
          if(abs(arr[j]) == arr_min)
            cnt++;
        }
        if(cnt == 1){
          cout << arr[idx] << "\n";
          arr.erase(arr.begin()+ idx);
        }
        else{
          arr_min *= -1;
          for(int j = 0; j<arr.size(); j++){
            if(arr_min == arr[j]){
              idx = j;
            }
          }
          cout << arr[idx] << "\n";
          arr.erase(arr.begin()+ idx);
        }
      }
    }
    
  }

}