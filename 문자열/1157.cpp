#include <iostream>
#include <string>

using namespace std;

int main(){
  string S;
  int arr[26] ={0, };
  cin >> S;
  for(int i = 0; i <S.length(); i++){
    S[i] = toupper(S[i]);  // 문자열을 전부 대문자로 치환 (소문자여도 상관없음)
  }
  for(int i =0; i < S.length(); i++){
    int a;
    a = S[i] - 'A';  // 문자열에 'A'를 뺌으로써 문자열을 0~25의 숫자로 바꾸어 준다.
    arr[a]++;         // 해당하는 문자의 인덱스를 가진 배열의 값을 1 증가시켜준다.
  }
  int max=0, index =0;
  for(int j =0; j<26; j++){
    if(arr[j] > max){
      max = arr[j];        // 가장 큰 값을 갖고 있는 배열을 찾는다(가장 많이 사용된)
      index = j;          // 인덱스의 값을 지정
    }
  }
  int cnt =0;
  for(int j =0; j<26; j++){
    if(arr[j] == max){
      cnt++;              // 가장 많이 사용된 알파벳의 갯수를 카운트 한다. 
    }
  }
  if(cnt > 1)           // 가장 많이 사용된 알파벳의 수가 2이상인 경우
    cout << "?";
  else                  // 가장 많이 사용된 알파벳의 수가 1개인 경우
    cout << (char)(index+ 'A');   // 숫자를 다시 문자열로 변환해 준다.


}