/******
  Trailing zeroes in factorial 
  For an integer N find the number of trailing zeroes in N!.
  Example 1:
  Input:
  N = 5
  Output:
  1
  Explanation:
  5! = 120 so the number of trailing zero is 1.
  Example 2:
  Input:
  N = 4
  Output:
  0
  Explanation:
  4! = 24 so the number of trailing zero is 0.
  Your Task:  
  You don't need to read input or print anything. Your task is to complete the function trailingZeroes() which take an integer N as an input parameter and returns the count of trailing zeroes in the N!.
  Expected Time Complexity: O(logN)
  Expected Auxiliary Space: O(1)
  Constraints:
  1 <= N <= 109
****/
//User function Template for C++


// Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

int findZeroes(int n){

    int ans=0;
    int p=5;
    while((n/p)>0){
        ans+=(n/p);
        p=p*5;
    }

    return ans;
}

int main(){

    long long int n;
    cin>>n;

    cout<< findZeroes(n)<<endl;

    return 0;
}