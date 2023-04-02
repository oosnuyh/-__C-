#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
#define INF 1000000000

int N, r, c;
int matrix[501][2], dp[501][501];

int main()
{
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> r >> c;
		matrix[i][0] = r;
		matrix[i][1] = c;
	}

	for (int i = 1; i < N; i++)
	{
		for (int j = 1; i + j <= N; j++)
		{
			dp[j][i + j] = INF;
			for (int k = j; k <= i + j; k++)
			{
				dp[j][i + j] = min(dp[j][i + j], dp[j][k] + dp[k + 1][i + j] + matrix[j][0] * matrix[k][1] * matrix[i+j][1]);
			}
		}

	}

	cout << dp[1][N];


}
/*int N;
  int r, c;
  vector<int> arr;
  cin >> N;

  for(int i = 0; i < N; i++){ 
    cin >> r >> c;
   if(i == 0){
      arr.push_back(r);
      arr.push_back(c);
    }
    else
      arr.push_back(c);
  }
  int sum = 0;
  while(arr.size() > 2){
  int arr_max = arr[1];
  for(int i =2; i < arr.size()-1; i++){
    arr_max = max(arr_max, arr[i]);
  }
  int a = find(arr.begin(), arr.end(), arr_max) - arr.begin();
  sum += arr[a-1]*arr[a]*arr[a+1];
  arr.erase(arr.begin()+a);
  cout << "Arr_max = " << arr_max << "\n";
  cout << "sum = " << sum << "\n";
  }
  cout << sum;


*/