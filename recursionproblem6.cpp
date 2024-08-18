// given an array of n integers and a target value x.Print whether x exists in the array or not. 
// #include<bits/stdc++.h>
// using namespace std;

// // f represents whether x is present in the range [i, n-1] or not ?
// bool f(int *arr, int n, int i, int x){
//     // base case 
//     if(i == n){
//           // array is exhausted 
//           return false;
//     }
//     return (arr[i] == x) || f(arr, n, i+1, x);
// }

// int main(){
//     int arr[] = {5, 4, 1, 8, 6, -9, 8,2,3,5};
//     int n = 10;
//     int x = 8;
//     bool result = f(arr, n, 0,x);
//     if(result) cout << "YES";
//     else cout << "NO";
//     return 0;
// }








// given an array of integers,print sums of all subsets in it. Output sums can be printed in any order. 
// #include<bits/stdc++.h>
// using namespace std;

// void f(int *arr, int n, int i, int sum, vector<int> &result){
//   //base case 
//   if(i == n){
//       result.push_back(sum);
//       return;
//   }
//   f(arr, n, i+1, sum + arr[i], result);
//   f(arr, n, i+1, sum , result);
// }

// int main(){
//         int arr[] = {2,4,5};
//         int n = 3;
//         vector<int> result;
//         f(arr, n, 0, 0, result);
//         for(int i = 0; i< result.size(); i++){
//               cout << result[i] << " ";
//         }
//         return 0;
// }









// the problem is to count all the possible paths on an m x n grid from top left (grid[0][0]) to bottom right (grid[m-1][n-1]).having  constraints that from each cell you can either move only to right or down. 
#include<bits/stdc++.h>
using namespace std;

int f(int i, int j, int m, int n){
      if(i == m-1 and j== n-1) return 1;
      if(i >= m or j >= n) return 0;
      return f(i, j +1, m, n) + f(i+1, j, m, n);
}

int main(){
    cout << f(0,0,2,3);
    return 0;
}