/*
you have 'n'(n <= 10^5) boxes of chocolate . Each box contains a[i] (a[i] <= 10000 ) chocolates. You need to distribute
 these boxes among 'm' students such that the  maximum number of chocolates allocated to a student in minimum. 
   a. one box will be allocated to exactly one student. 
   b. all the boxes should be allocated. 
   c. Each student has to be allocated at least one box. 
   d. Allotment should be in contiguous order, for instance , a student cannot be allocated box 1 and 
        box 3, skipping box 2. 
         calculate and return that minimum possible number. 
         assume that it is always possible to distribute  the chocalates. 
         the first line of input will contain the value of n, the number of boxes.
         the second line of input will contain the n numbers denoting the number of 
           chocolates in each box. 
         the third line will contain the m , number of students. 
*/ 

// #include<bits/stdc++.h>
// using namespace std;

// bool canDistChoco(vector<int> &arr, int mid , int s){
//        int n = arr.size();
//        int studentsReqd = 1;
//        int currSum = 0;

//        for(int i = 0; i<n; i++){
//            if(arr[i] > mid){
//               return false; 
//            }
//            if(currSum + arr[i] > mid){
//               studentsReqd++;
//               currSum = arr[i];
//               if(studentsReqd > s) return false; 

//            }  else{
//                 currSum += arr[i];
//            }
//        }
//        return true; 
// }


// int distChoco(vector<int> &arr, int s){
//          int n = arr.size();
//          int lo = arr[0];
//          int hi = 0;
//          for(int i = 0; i< arr.size(); i++){
//               hi += arr[i];
//          }
//          int ans = -1; 
//          while(lo <= hi){
//               int mid = lo + (hi - lo)/2;
//               if(canDistChoco(arr, mid, s)){
//                     ans = mid;
//                     hi = mid - 1;

//               } else{
//                     lo =mid + 1; 
//               }
//          }
//          return ans; 
// }

// int main(){
//     int n ;
//     cin >> n; 
//     vector <int> v;
//     for(int i = 0; i< n; i++){
//            int x;
//            cin >> x;
//            v.push_back(x);
//     }
//     int s;
//     cin >> s; 
//     cout << distChoco(v, s) << "\n";
//     return 0; 
// }








/*
  problem2 : 
   a new racing track for kids is being built in new york with 'n' starting spots. the spots are 
    located along a straight line at positions x1, x2...xn(xi <= 10^9). for each 'i', xi+1 > xi. 
    At  a time only 'm' children are allowed  to enter  the race. Since the race  track is for kids 
    , they may run into each other while running. To prevent this, we want to choose the starting spots 
    such that the minimum distance between any two of them is as large as possible. what is the largest minimum 
     distance? 
     the first line of input will contain the value of n, the number of starting spots. 
     the second line of input will contain the n numbers depending the location of each spot. 
     the third will contain the value of m , number of children. 

*/
#include<bits/stdc++.h>
using namespace std;

bool canPlaceStudents(vector<int > &pos, int s, int mid){
      int studentsReqd = 1;
      int lastPLaced = pos[0];
      for(int i = 1; i< pos.size(); i++){
           if(pos[i] - lastPLaced >= mid){
              studentsReqd++; 
              lastPLaced = pos[i];
              if(studentsReqd == s){
                  return true; 
              }
           }
      }
     return false; 
}


int race(vector<int> &pos, int s){
     int n = pos.size();
     int lo = 1;
     int hi = pos[n-1] - pos[0];
     int ans = -1;
     while(lo <= hi){
           int mid = lo + (hi - lo) /2 ;
           if(canPlaceStudents(pos, s, mid)){
              ans = mid; 
              lo =mid + 1; 
           } else{
              hi = mid - 1;
           }
     }
     return ans; 
}

int main(){
      int n; 
      cin >> n; 
      vector<int> pos;
      while(n--){
          int x;
          cin >> x; 
          pos.push_back(x);
      }
      int s;
      cin >> s;
      cout << race(pos, s) << "\n";
      return 0;
}



