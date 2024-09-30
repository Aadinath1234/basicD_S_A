/*
 can you make the strings equal 
 given an array of strings. You can move any number of characters from one string any 
 number of times. You just have to make all of them equal . 
 print "Yes" if you can make every string in the array equal by using any 
 number otherwise print "NO". 
 Input: ["collegeee", "call", "collegge"].
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// bool canMakeEqual(vector<string> &v){
//       unordered_map<char, int> m;

//       for(auto str:v){
//           for(char c:str){
//               m[c]++; 
//           }
//       }

//       int n = v.size();
//       for(auto ele:m){
//          if(ele.second%n!=0){
//              return false; 
//          }
//       }

//       return true; 
// }



// int main(){

//   int n; 
//   cin >> n; 

//   vector<string> v(n);
//   for(int i = 0; i<n; i++){
//      cin >> v[i]; 
//   }

//    cout << (canMakeEqual(v) ? "Yes":"No") << endl; 

//   return 0; 


// }










/*
check whether two strings are anagram of each other. Return true 
if they are else return false. an anagram of a  string is another 
string that contains the same characters, only the order of 
characters can be different. For example "abcd" and "dabc" are 
an anagram of each other . 
*/ 
// #include <bits/stdc++.h>
// using namespace std;

// bool checkAnagrams(string s1, string s2) {
//     // If lengths are not equal, they can't be anagrams
//     if (s1.length() != s2.length()) {
//         return false;
//     }

//     // Map to store frequency of characters in s1
//     unordered_map<char, int> m;

//     // Increase frequency of each character in s1
//     for (auto c1 : s1) {
//         m[c1]++;
//     }

//     // Decrease frequency for each character in s2
//     for (auto c2 : s2) {
//         if (m.find(c2) == m.end() || m[c2] == 0) {
//             return false;
//         }
//         m[c2]--;
//     }

//     // Check if all frequencies are zero
//     for (auto ele : m) {
//         if (ele.second != 0) {
//             return false;
//         }
//     }

//     return true;
// }

// int main() {
//     string s1, s2;
//     cin >> s1 >> s2;

//     // Call checkAnagrams (use correct function name)
//     cout << (checkAnagrams(s1, s2) ? "Anagrams" : "Not anagrams") << endl;

//     return 0;
// }










/*
check whether two strings are isomorphic of each other . Return true  if they are else
return false.
two strings are isomorphic of each other if there is a one-to-one mapping possible 
for every character of the first string to every character of second string and all 
occurences of every character in first string maps to the same character in the second string. 
*/ 
// #include <bits/stdc++.h>
// using namespace std;

// bool checkNoOneToManyMapping(string s1, string s2) {
//     unordered_map<char, char> m;
    
//     // Iterate through the strings
//     for (int i = 0; i < s1.length(); i++) {
//         if (m.find(s1[i]) != m.end()) {
//             // If a mapping already exists, it must match the current character
//             if (m[s1[i]] != s2[i]) {
//                 return false;
//             }
//         } else {
//             // Create a new mapping
//             m[s1[i]] = s2[i];
//         }
//     }

//     return true;
// }

// bool checkIsomorphic(string s1, string s2) {
//     if (s1.length() != s2.length()) {
//         return false;
//     }

//     // Check one-to-one mapping from s1 -> s2 and s2 -> s1
//     bool s1s2 = checkNoOneToManyMapping(s1, s2);
//     bool s2s1 = checkNoOneToManyMapping(s2, s1);

//     // Both directions must be valid
//     return s1s2 && s2s1;
// }

// int main() {
//     string s1, s2;
//     cin >> s1 >> s2;

//     // Check if the strings are isomorphic
//     cout << (checkIsomorphic(s1, s2) ? "Is isomorphic" : "Is not isomorphic") << endl;

//     return 0;
// }










/*
 given an array of length n and a target, return a pair 
 whose sum is equal to the target. if there is no pair 
 present, return -1. 
input: n=7; 
 elements: [1,4,5,11,13,10,2]
 target=13 
*/ 

// #include<bits/stdc++.h>
// using namespace std;

// vector<int> targetsumpair(vector<int> &v, int targetsum){
     
//       unordered_map<int, int> m; 
//       vector<int> ans(2, -1);

//       for(int i =0; i<v.size(); i++){
//            if(m.find(targetsum-v[i]) != m.end()){
//               ans[0] = m[targetsum-v[i]];
//               ans[1] = i; 
//               return ans; 
//            }
//            else{
//               m[v[i]]=i; 
//            }
//       }

//       return ans; 
// }

// int main(){
    
//      int n; 
//      cin >> n; 

//      vector<int> v(n); 
//      for(int i = 0; i<n; i++){
//           cin>>v[i]; 
//      }

//      int targetsum; 
//      cin >> targetsum; 
//      vector<int> ans = targetsumpair(v, targetsum); 
//      cout << ans[0] << " ," << ans[1] << endl; 


//       return 0; 

// }











/*
 given an array arr[] or length N, find the length of the longest subarray with a 
 sum equal to 0. 
*/ 
#include<bits/stdc++.h>
using namespace std;

int maxLengthZeroSumSubarray(vector<int> &v){
        unordered_map<int,int> m; 
        int prefixsum = 0; 
        int maxlen = 0; 

        for(int i =0; i<v.size(); i++){
              prefixsum+=v[i];

              if(m.find(prefixsum)!=m.end()){
                  maxlen = max(maxlen, i-m[prefixsum]);
              }
              else{
                  m[prefixsum] = i; 
              }
        }
        return maxlen; 



}




int main(){

     int n; 
     cin >> n; 
     vector<int> v(n); 
     for(int i=0; i<n; i++){
          cin>>v[i]; 
     }

     cout << maxLengthZeroSumSubarray(v) << endl; 

     return 0; 




}

