// #include<bits/stdc++.h>
// using namespace std;

// void f(int *arr,  int idx, int n){
//    // base case 
//      if(idx == n) return;
//      // self work 
//      cout << arr[idx] << "\n";
//      //assume that 
//      f(arr, idx+1, n); // assume it works correctly :- it will print the remaining arr 
// }



// int main(){
//     int n = 5;
//     int arr[] = {6,1,9,3,4};
//     f(arr, 0, n);
//     return 0;
// }








// print the max value of the array [3, 10, 3, 2, 5];
// #include<bits/stdc++.h>
// using namespace std;


// int f(int *arr, int idx, int n){
//      // base case 
//      if(idx == n - 1){
//            // we only have one element left, so it is the maximum 
//            return arr[idx];
//      }
//     return max(arr[idx], f(arr, idx + 1, n));
// }

// int main(){
//    int arr[] = {13,10,3,2,15};
//    int n = 5;
//    cout << f(arr, 0, n);
//    return 0;
// }






// find the sum of the values of the array [2,3,5,20,1];
#include<bits/stdc++.h>
using namespace std;

int f(int *arr, int idx, int n){
   // base case 
   if(idx == n-1){
       // idx is at least index so there is only one element under consideration 
       return arr[idx];
   }
   return arr[idx] + f(arr, idx + 1, n);
}

int main(){
    int arr[] = {2,3,5,20,1};
    int n = 5;
    cout << f(arr, 0, n);
    return 0;
}




