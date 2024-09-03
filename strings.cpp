// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     string str; 
//     cin >> str;  
    
//     cout << str << endl; 

// }




// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     string str; 
     
//     getline(cin , str);
//     cout << str << endl; 

// }






// #include<bits/stdc++.h>
// using namespace std;

// int main(){
    
//     // string str = "hello"; 
//     //  reverse(str.begin(), str.end());
//     // cout << str << endl; 

//     // string str = "survive";
//     // cout << str.substr(1,4) << endl; 
//     // cout << str.substr(1) << endl; 

//     //  string s1 = "college";
//     //  string s2 = "wallah";
//     //  s1+=s2; 
//     //  cout << s1 << endl; 



//     // char s1[20] = "college";
//     // char s2[20] = "wallah";
//     // strcat(s1, s2); 
//     // cout << s1 << endl; 


//     //  string  s1 = "abcd";
//     //  char ch = 'e';
//     //  s1.push_back(ch);
//     //  cout << s1 << endl;  


//     // string s1 = "abcde";
//     // cout << s1.size() << endl; 

//     // char ch[20] = "abcde";
//     // cout << strlen(ch) << endl; 

    




//     // int num = 432; 
//     // string str = to_string(num);
//     // str += "1";
//     // cout << str << endl; 
//     // cout << str[1] << endl; 




       




//     return 0; 
// }















// #include<bits/stdc++.h>
// using namespace std;

// string countSort(string str){
//       vector<int> freq(26, 0);

//       //storing frequency of every character in string 
//       for(int i = 0; i<str.length(); i++){
//           int index = str[i] - 'a';
//           freq[index]++;
//       }


//       // create our sorted string 
//       int j = 0; 
//       for(int i=0; i<26; i++){
//           while(freq[i]--){
//                 str[j++] = i + 'a';
//           }
//       }
//       return str;
// }


// int main(){
//     string str;
//     cin >> str;
//     cout << countSort(str) << endl;  
// }

















// #include<bits/stdc++.h>
// using namespace std;

// bool isAnagram(string s1, string s2){
//       // create freq array 
//       vector<int> freq(26, 0);

//       //if lengths are different for s1, s2 then return false. 
//       if(s1.length()!=s2.length()){
//              return false; 
//       }

//       //store frequency of characters in s1 and s2 
//       for(int i = 0; i<s1.length(); i++){
//             freq[s1[i]-'a']++; // for s1 , we are incrementing freq of char 
//             freq[s2[i]-'a']--; // for s2 , we are decrementing freq of char 
//       }


//       // checking if freq of every character is 0 
//       for(int i = 0; i<26; i++){
//             if(freq[i]!=0){
//                   // not anagram 
//                   return false; 
//             }
//       }
//       return true; 
    
// }


// int main(){
    
//     string s1, s2;
//     cin >> s1 >> s2; 

//     if(isAnagram(s1, s2)){
//           cout << "Strings are anagrams " << endl; 
//     } 
//     else{
//           cout << "Strings are not anagrams " << endl; 
//     }
// }













// #include<bits/stdc++.h>
// using namespace std;

// bool isIsomorphic(string s1, string s2 ){
//        vector<int> v1(128, -1);
//        vector<int> v2(128, -1);

//        if(s1.size() != s2.size()){
//          // if strings length does not match 
//          return false; 
//        }        

//        for(int i = 0; i< s1.size(); i++){
//           if(v1[s1[i]] != v2[s2[i]]){
//                 // checking if value of character at idx i match in boxes 
//                 return false; 
//           }
//           v1[s1[i]] = v2[s2[i]] = i; // storing string position in vectors for characters  at 
//        }

//        return true; 
// }



// int main(){
    
//     string s1, s2;
//     cin >> s1 >> s2; 

//     if(isIsomorphic(s1, s2)){
//           cout << "They are isomorphic" << endl; 
//     } else{
//            cout << "they are not isomorphic" << endl; 
//     }
// }









// given an array of strings . write a program to find the longest common prefix string amongst an array of strings. 

// #include<bits/stdc++.h>
// using namespace std;

// string LongestCommonPrefix(vector<string> &str){
//      // sorting the array of strings; 
//      sort(str.begin(), str.end());

//      string s1 = str[0]; // first string 
//      int i = 0;
//      string s2 = str[str.size()-1]; // last string 
//      int j = 0; 

//      string ans = " ";
//      while (i<s1.size() && j<s2.size()){
//          if(s1[i]==s2[j]){
//               ans+=s1[i];
//               i++; j++;
//          }
//          else{
//                break; 
//          }
//      }
//      return ans; 
// }



// int main(){
    
//     int n;
//     cout << "Enter no of strings: ";
//     cin >>n; 
//     cout << "Enter strings ";
//     vector<string> str(n);
//     for(int i = 0; i<n; i++){
//           cin >> str[i];
//     }
//     cout << "Longest common prefix: " << LongestCommonPrefix(str)<< endl; 

// }












// #include<bits/stdc++.h>
// using namespace std;

// string LongestCommonPrefix(vector<string> &str){
//         // keeping first string as const and  comparing it with all other strings 
//         string s1 = str[0];
//         int ans_length = s1.size();

//         for(int i = 1; i<str.size(); i++){
//               int j = 0; 
//               while(j<s1.size() && j<str[i].size() && s1[j]==str[i][j]) // finding the common print 
//               j++; 
//               ans_length = min(ans_length, j); // uploading length of ans string 

//         }
//       string ans = s1.substr(0, ans_length);
//       return ans; 
// }

// int main(){
    
//     int n;
//     cout << "Enter no of strings: ";
//     cin >>n; 
//     cout << "Enter strings ";
//     vector<string> str(n);
//     for(int i = 0; i<n; i++){
//           cin >> str[i];
//     }
//     cout << "Longest common prefix: " << LongestCommonPrefix(str)<< endl; 

// }









/*
  an encoded string(s) is given and the task is to decode it . the encoding 
   pattern is that the occurence of the string is given at the starting of the string 
   and each string is enclosed by square brackets . 
    the occurence of a single string is less than 1000. 
*/
// #include<bits/stdc++.h>
// using namespace std;

//  // space complexity -> o(n) where n is length of decoded string 
//  // time complexity -> o(n) where n is length of decoded string 


// string decodedString(string s){
//           string result = "";

//           // traversing the encoded string 
//           for(int i = 0; i<s.length();i++){
//               if(s[i]!=']'){
//                    result.push_back(s[i]);
//               }else{
//                     // extract str from result 
//                     string str = "";
//                     while(!result.empty() && result.back() != '['){
//                            str.push_back(result.back());
//                            result.pop_back();
//                     }

//                     // reversing the str
//                     reverse(str.begin(), str.end());

//                     // remove last char from result which is [
//                      result.pop_back();

//                      // extract num from result 
//                      string num ="";
//                      while(!result.empty() && (result.back()>='0' && result.back()<='9')){
//                             num.push_back(result.back());
//                             result.pop_back();
//                      }

//                      // reversing the num string 
//                      reverse(num.begin(), num.end());

//                      // convert string to integer 
//                      int int_num = stoi(num);

//                      // inserting str in result int_num times 
//                       while(int_num){
//                           result += str;
//                           int_num--;
//                       }
//               }
//           }
//            return result; 
// }


// int  main(){
//     string str; 
//     cin >> str; 

//     cout << decodedString(str)<< endl; 
//     return 0; 
// }












/*
  given a binary string and an integer k, return the maximum number of consecutive 
    1's in the string if you can flip at most k 0's. 
*/
#include<bits/stdc++.h>
using namespace std;


 int longestOnes(string str, int k ){
       int start=0;
       int end=0;
       int zero_count = 0;
       int max_length = 0;

       for(; end<str.length(); end++){
           if(str[end] == '0'){
              zero_count++;
           }
           while(zero_count>k){
              if(str[start] == '0') zero_count--;
              start++; //contracting our window  
           }
          
          //zero_count <= k 
          max_length = max(max_length, end-start+1);
       }
       return max_length;
 }



int main(){
      string str;
      cout << "Enter binary string: " ;
      cin >> str;

      int k;
      cout << "Enter max flips: ";
      cin >> k; 

      cout << longestOnes(str, k) << endl; 
      return 0; 
}




















