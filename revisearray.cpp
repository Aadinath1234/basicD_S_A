// given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the two arrays into a single sorted array of size m+n.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int arr1[] = {1, 6, 7, 10};
//     int arr2[] = {0, 1, 3, 8, 11, 12, 15, 18};
//     int m = 4;
//     int n = 8;

//     // code to merge two sorted arrays :
//     int result[m + n];
//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while (i < m and j < n)
//     {
//         // both i and j should be within the limits or arr1 and arr2
//         if (arr1[i] < arr2[j])
//         {
//             result[k] = arr1[i];
//             k++;
//             i++;
//         }
//         else
//         {
//             result[k] = arr2[j];
//             k++;
//             j++;
//         }
//     }
     
//      while(i<m){
//           // arr2 was exhausted and we still got elements left in arr1
//            result[k] = arr1[i];
//            i++;
//            k++;
//      } 
//      while(j < n){
//           // arrr1 was exhausted and we still got elements left in arr2
//            result[k] = arr2[j];
//            k++;
//            j++;
//      }

//      // display results: 
//      for(int i = 0; i< (m+n); i++)
//        cout << result[i]<< " ";
//         return 0;



// }











// given a vector arr[] sorted in increasing order of n size and an integer x,find if  there exists a pair in the array whose sum is exactly x.
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int arr[] = {-2, -1 , 0, 3 , 6,8,11, 12};
//    int x = 15;
//    int n = 8;
//    // code to find if there is a pair with sum x 
//    int i =0;
//    int j = n-1;
//    bool found = false;
//    while(i<j){
//         if(arr[i] + arr[j] == x){
//               // we found a pair 
//               found= true;
//               break;
//         } else if(arr[i] + arr[j] < x){
//               // sum is less than x , increase the sum 
//                i++;
//         }else{
//               // sum is morethan x, decrease the sum :
//               j--;
//         }
//    }

//   if(found == true) 
//    cout << "YES";
//    else cout << "NO";

// return 0;
// }











// Given a vector arr[] sorted in increasing order  of n size and an integer x, find if there exists a pair in the array whose absolute difference is exactly x. 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int arr[] = {9,23,45, 69, 78};
//      int n= 5;
//      int x = 10;


//      // code to check whether there is any pair with the given abs diff:
//      int i = 0;
//      int j = 1;
//      bool found = false;
//      while(i<n and j < n){
//           if(abs(arr[i] - arr[j]) == x){
//               found= true;
//               break;
//           } else if(abs(arr[i] = arr[j])< x){
//               j++;
//           }else{
//               i++;
//           }
//      }

//      if(found == true) cout << "YES";
//      else cout << "NO";
//      return 0;
// }










// given a vector arr[] sorted in increasing order. return an array of squares of each number sorted in increasing order. Where size of vector 1 < size < 101.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int arr[] = {-25, -3 , -1 , 0 , 2, 10};
//   int n = 6;

//   // code to arrange square of given elements in the order : 
//   int result[n];
//   int i = 0, j = n-1, k = n-1;
//   while(i <= j && k >= 0){
//          if(abs(arr[i]) > abs(arr[j])){
//                result[k] = arr[i]*arr[i];
//                i++;
//                k--;
//          }
//          else{
//               result[k] = arr[j] * arr[j];
//               j--;
//               k--;
//          }
         
//   }

//    // display the result : 
//    for(int i  = 0; i<n; i++)
//      cout << result[i] << " ";

//      return 0;
// }






// given a vector arr[] sorted in increasing order of n size and an integer x, find the number of unique pairs that exist in the array whose absolute sum is exactly x.

#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[]= {-2, -1, 0, 1, 3, 4, 6, 8,11, 12};
   int x = 12;
   int n = 10;

   // code to find if there is a pair with sum x: 
   int i =0;
   int j = n-1;
   int answer = 0;
   while(i<j){
          if(arr[i] + arr[j] == x){
              // we found a pair 
              answer += 1;
              i++;
              j--;
          } else if(arr[i] + arr[j] < x){
             // sum is less than x, increase the sum : 
             i++;
          } else{
             // sum is more than x, decrease the sum 
             j--;
          }
   }

   cout << answer;



}