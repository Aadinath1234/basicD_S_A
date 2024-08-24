// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(vector<int> &input, int target){
//        // define search space 
//        int lo = 0;
//        int hi = input.size() - 1;
//        while(lo <= hi){
//            int mid = (lo + hi) /2;
//            if(input[mid] == target) return mid;
//            else if(input[mid] < target){
//                 lo = mid +1;
//            } else{
//                 hi = mid - 1;
//            }
//        }
//           return -1;
// }

// int main(){
//       int n; 
//       cin >> n; 
//       vector<int> input; 
//       for(int i = 0; i<n; i++){
//           int x;
//           cin >> x;
//           input.push_back(x);
//       }

//       int target;
//       cin >> target;
//       cout << binarySearch(input, target) << "\n";
//       return 0;
// }   










// recursive binary search implementation :
// #include<bits/stdc++.h>
// using namespace std;

// int binarySearch(vector<int> &input, int target){
//        // define search space 
//        int lo = 0;
//        int hi = input.size() - 1;
//        while(lo <= hi){
//            int mid = (lo + hi) /2;
//            if(input[mid] == target) return mid;
//            else if(input[mid] < target){
//                 lo = mid +1;
//            } else{
//                 hi = mid - 1;
//            }
//        }
//           return -1;
// }

//     int binarySearchRecursive(vector<int> &input, int target, int lo, int hi){
//            // Time complexity: O(logn)

//            if(lo > hi) return -1;
//         //    int mid = (lo + hi) /2; 
//            int mid = lo +(hi - lo) / 2; 
//            if(input[mid] == target) return mid; 
//            if(input[mid] < target){
//                return binarySearchRecursive(input, target, mid + 1, hi);
//            }else{
//               return binarySearchRecursive(input, target, lo, mid - 1);
//            }
//     }




// int main(){
//       int n; 
//       cin >> n; 
//       vector<int> input; 
//       for(int i = 0; i<n; i++){
//           int x;
//           cin >> x;
//           input.push_back(x);
//       }

//       int target;
//       cin >> target;
//       cout << binarySearchRecursive(input, target, 0, n -1) << "\n";
//       return 0;
// }   












// pr0blem in binary search: 
// find the first occurrence of a given element x, given that the given array is sorted. If no occurence of x is found then return -1;
// #include<bits/stdc++.h>
// using namespace std;

// int firstOccurence(vector<int> &input, int target){
//         int lo = 0, hi = input.size() - 1;
//         int ans = -1;
//         while(lo <= hi){
//              int mid = lo + (hi - lo) / 2;
//              if(input[mid] == target){
//                   ans = mid;
//                   hi = mid - 1;
//              } else if( input[mid] > target){
//                      hi = mid - 1;
//              } else{
//                   lo = mid + 1;
//              }
//         }
//         return ans; 
// }

// int main(){
//       int n; 
//       cin >> n;
//       vector<int> arr;
//       for(int i = 0; i<n; i++){
//            int x;
//            cin >> x;
//            arr.push_back(x);
//       }
//       int target; 
//       cin >> target;
//       cout << firstOccurence(arr, target) << "\n";
//       return 0;
// }








// problem : 02 : 
// find the square root of the given non negative value x. Round it off to the nearest floor integer value. 
#include<bits/stdc++.h>
using namespace std;

int sqrt(int x){
      int lo = 1, hi = x;
      int ans = -1;
      while (lo <= hi)
      {
         int mid = lo + (hi - lo) / 2;
          if(mid * mid <= x){
                ans = mid;
                lo= mid + 1;
          } else{
               hi = mid - 1;
          }
      }
      return ans; 
}

int main(){
      cout << sqrt(100) << "\n";
      return 0;
}