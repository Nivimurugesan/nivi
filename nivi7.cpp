#include <bits/stdc++.h> 
using namespace std;
int findSum(int Num, int K) 
{ 
    int answer = 0; 
    for (int j = 1; j <= Num; j++) 
        ans += (j % K); 
  
    return answer; 
} 
void main() 
{ 
    int Num = 10, K = 2; 
    cout << findSum(Num, K) << endl; 
} 
