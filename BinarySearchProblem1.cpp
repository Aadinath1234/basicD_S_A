// given an array of integers 'a' that is sorted in non-decreasing order.
// Find the first and the last position of the given 'target' element in the sorted array. Follow 0-based indexing. If 'target' is not found in the array. 
// return [-1, -1] 

// #include <bits/stdc++.h>
// using namespace std;

// int lowerbound(vector<int> &input, int target) {
//     // time : Olog n, space: o(1).

//     int lo = 0, hi = input.size() - 1;
//     int ans = -1;
//     while (lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
//         if (input[mid] >= target) {
//             ans = mid;
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }
//     return ans;
// }

// int upperbound(vector<int> &input, int target) {
//     int lo = 0, hi = input.size() - 1;
//     int ans = -1;
//     while (lo <= hi) {
//         int mid = lo + (hi - lo) / 2;
//         if (input[mid] > target) {
//             ans = mid;
//             hi = mid - 1;
//         } else {
//             lo = mid + 1;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cin >> n;
//     std::vector<int> input;
//     for (int i = 0; i < n; i++) {
//         int x;
//         cin >> x;
//         input.push_back(x);
//     }
//     int target;
//     cin >> target;
//     std::vector<int> result;
//     int lb = lowerbound(input, target);
//     if(input[lb] !=  target) {
//         result.push_back(-1);
//         result.push_back(-1);
//     } else {
//         int ub = upperbound(input, target);
//         result.push_back(lb);
//         result.push_back(ub - 1);
//     }
//     cout << result[0] << " " << result[1] << "\n";
//     return 0;
// }









//problem 2:  a rotated sorted array is a sorted array on which rotation operation has 
// been performed some number of times. Given a rotated sorted array. Find the index of the minimum 
// element in the array. Follow 0-based indexing. It is guaranteed that all the elements in the 
// array are unique. 


// #include<bits/stdc++.h>
// using namespace std;
// int findMinimumInSortedRotated(vector<int> &input){
//     // time: o(logn)   space: o(1). 

//         if(input.size() == 1) return input[0];
//         int lo = 0, hi = input.size() - 1;
//         if(input[lo] < input[hi]){
//               return lo; 
//         }
//         while(lo <= hi){
//                int mid = lo +(hi-lo)/2;
//                if(input[mid] > input[mid + 1]) return mid + 1;
//                if(input[mid] < input[mid - 1]) return mid;
//                if(input[mid] > input[lo]){
//                     lo = mid + 1;
//                } else{
//                    hi = mid - 1;
//                }
//         }
//         return -1;
// }



// int main(){
//    int n; 
//    cin >> n;
//    std:: vector<int> input;
//    for(int i = 0; i<n; i++){
//        int x;
//        cin >> x;
//        input.push_back(x);
//    }
//    cout << findMinimumInSortedRotated(input) << "\n";
//    return 0; 
// }









// given the rotated sorted array of integers, which contains distinct elements and an integer target, return the index of target
// return the index of target if it is in the array. otherwise return -1. 
#include<bits/stdc++.h> 
using namespace std;

int binarySearchSortedRotated(vector<int> &input, int target){
        int lo = 0, hi = input.size() - 1;
        while(lo <= hi){
              int mid = lo + (hi - lo) / 2; 
              if(input[mid] == target) return mid; 
              if(input[mid] >= input[lo]){
                   if(target >= input[lo] and target <= input[mid]){
                       hi = mid - 1;
                   }else{
                       lo= mid + 1;
                   }
              } else{
                   if(target >= input[mid] and target <= input[hi]){
                      lo = mid + 1;
                   }else{
                      hi = mid - 1;
                   }
              }
        }
        return -1;
}

int main(){
     int n; 
     cin >> n; 
     std::vector<int> input;
     for(int i = 0; i< n; i++){
          int x;
          cin >> x;
          input.push_back(x);
     }
     int target;
     cin >> target;
     cout << binarySearchSortedRotated(input, target) << "\n";
     return 0;
}