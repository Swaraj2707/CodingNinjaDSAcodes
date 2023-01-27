/*
Given the number 'n', find out and return the number of digits present in a number .

Input Format :
Integer n

Output Format :
Count of digits

Constraints :
1 <= n <= 10^6

Sample Input 1 :
 156
Sample Output 1 :
3

Sample Input 2 :
 7
Sample Output 2 :
1
*/

#include<bits/stdc++.h>
using namespace std;

int cnt=0; //global variable

int count(int n){
    //write your code here
    if(n==0){
        return 2;
    }

    cnt++;

    count(n/10);

    return cnt;
}
int main()
{
   int n;
    cin >> n;
  
    cout << count(n) << endl;
}
