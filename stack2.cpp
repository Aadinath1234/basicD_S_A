// #include<bits/stdc++.h>
// using namespace std;

// bool isValid(string str){
//       stack<char> st;
//       for(int i = 0; i< str.size(); i++){
//           char ch = str[i]; //current char 
//           if(ch == '[' or ch == '{' or ch == '('){
//              st.push(ch);
//           }else{
//              // closing bracket (( ] 
//              if(ch == ')' and !st.empty() and st.top() == '(') {
//                  st.pop();
//              } else if(ch == ']' and !st.empty() and st.top() == '['){
//                  st.pop();
//              } else if(ch == '}' and !st.empty() and st.top() == '{'){
//                   st.pop();
//              }else{
//                  return false; 
//              }
//           }
//       }
//       return st.empty();
// }


// int main(){
//    string str = "())(())";
//    cout << isValid(str) << "\n";
//     return 0; 
// }





/*
 nge.cpp: (next greater element )
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> nge(vector<int> &arr){
//      int n = arr.size();
//      vector<int> output(n, -1);
//      stack<int> st;
//      st.push(0);
//      for(int i = 1; i < n; i++){
//          while(!st.empty() and arr[i] > arr[st.top()]){
//              output[st.top()] = arr[i];
//              st.pop();
//          }
//          st.push(i);
//      }
//      while(not st.empty()){
//          // not mandatory while loop
//          output[st.top()] = -1;
//          st.pop();
//      }
//      return output;
// }

// int main(){
//    int n; 
//    cin >> n; 
//    vector<int> v; 
//    while(n--){
//      int x;
//      cin >> x;
//      v.push_back(x);
//    }
//    vector<int> res = nge(v);
//    for(int i = 0; i< res.size(); i++){
//      cout << res[i] << " ";
//    }
//    return 0; 
// }







/*
 given a series of N daily price quotes for a stock, we need to calculate the span of
  the stock's price for all N days the span of the stock's price in one day is the maximum number
  of consecutive days (starting from that day and going 
   backward) for which the stock price was less than or equal to the price of that day. 
*/
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> pge(vector<int> &arr){
//      int n = arr.size();
//      reverse(arr.begin(), arr.end());
     
//      cout << "\n";
//      vector<int> output(n, -1);
//      stack<int> st;   // indexes 
//      st.push(0); 
//      for(int i = 1; i<n; i++){
//            while(!st.empty() and arr[i] > arr[st.top()]){
//               output[st.top()] = n - i - 1;
//               st.pop();
//            }
//            st.push(i);
//      }
//      while(not st.empty()){
//          // not mandatory while loop 
//          output[st.top()] = -1;
//          st.pop();
//      }
       
//        cout << "\n";

//        reverse(output.begin(), output.end());
       
//        cout << "\n";


     
//      reverse(arr.begin(), arr.end());
//      return output;
// }

// int main(){
//     int n; 
//     cin >>n; 
//     vector<int > v;
//     while(n--){
//          int x; 
//          cin >> x;
//          v.push_back(x);
//     }
//     vector<int> res = pge(v);
//     for(int i = 0; i< res.size(); i++){
//          cout <<(i- res[i]) <<" ";
//     }
//    return 0; 
// }








/*
 given an array of integer heights representing the histogram's bar height where 
 the width of each bar is 1, return the area of the largest rectangle in the histogram. 
*/ 
#include<bits/stdc++.h>
using namespace std;

int histogram(vector<int> &arr){
     int n = arr.size(); 
     stack<int> st;
     int ans = INT_MIN; 
     st.push(0);
     for(int i = 1; i <n; i++){
          while(!st.empty() and arr[i] < arr[st.top()]){
              int el = arr[st.top()];
              st.pop();
              int nsi = i;
              int psi = (st.empty()) ? -1 : st.top();
              ans = max(ans, el*(nsi - psi - 1));
          }
          st.push(i);
     }
     while(not st.empty()){
         // not mandatory while loop 
         int el = arr[st.top()];
         st.pop();
         int nsi = n; 
         int psi = (st.empty()) ? (-1) : st.top();
         ans = max(ans, el*(nsi - psi - 1));
     }
     return ans; 
}


int main(){
     int n;
     cin>>n; 
     vector<int> v;
     while(n--){
       int x;
       cin >> x; 
       v.push_back(x);
     }
     int ans = histogram(v);
     cout << ans << "\n";
    return 0; 
}