// #include<bits/stdc++.h>
// using namespace std;



// int main(){
//     set<int> set1; 
//   // insertion in a set 
//     set1.insert(3);
//     set1.insert(2);
//     set1.insert(1); 
//     cout << set1.size() << endl; 
//     set1.insert(3);
    
//     cout<< set1.size() << endl;
//     set1.insert(4);
//     set1.insert(5);  
//      // size remains same because duplicate value is added 
//      // and sets contain only unique values 
    


//     // traversing  a set.
//     // set<int>:: iterator itr; 
//     // for(itr = set1.begin(); itr!=set1.end(); itr++){
//     //        cout << *itr << " ";
//     // } cout << endl; 






//     //  set<int>:: iterator itr; 
//     //  for(auto value:set1){
//     //       cout << value << " ";
//     //  }cout << endl; 






//     // deletion of elements 
//     // set1.erase(4);
//     // for(auto value:set1){
//     //      cout << value << " ";
//     // } cout << endl; 






//     //
//     // auto start_itr = set1.begin();
//     // start_itr++; 

//     // auto end_itr = set1.begin(); 
//     // advance(end_itr, 3); 

//     // set1.erase(start_itr, end_itr);
//     // for(auto value:set1){
//     //       cout << value << " "; 
//     // } cout << endl; 


//     //search operation 
//     if(set1.find(4) != set1.end()){
//           cout<< "value is present" << endl; 
//     } else{
//          cout << "Value is not present" << endl; 
//     }
//     return 0; 
// }





//
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      set<string> invitelist; 
//      int n; 
//      cin >> n; 

//      while(n--){
//           string name; 
//           cin >> name; 
//           invitelist.insert(name); 
//      }

//       cout << "Printing invite list : " << endl; 

//      for(auto name:invitelist){
//           cout << name << endl; 
//      }

//      return 0; 
// }








/*
 add the common elements 
 given 2 vectors v1 and v2 .find out the common elements 
 between the two and return the sum of them. 
 v1 = {1,1,2,3,3,3}
 v2 = {5,6,7,5,2,3,6}
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int n, m; 
//    cin >> n >> m; 

//    vector<int> v1(n);
//    vector<int> v2(m); 

//    cout << "Enter elements of v1: " << endl; 
//    for(int i = 0; i<n; i++){
//        cin >> v1[i];
//    }

//    cout << "Enter elements of v2: " << endl; 
//    for(int i = 0; i<m; i++){
//        cin >> v2[i]; 
//    }
   
//    int ans_sum = 0;

//    set<int> s1; 
//    for(auto ele:v1){
//         s1.insert(ele);
//    }

//    for(auto ele:v2){
//         if(s1.find(ele)!=s1.end()){
//             ans_sum+=ele; 
//         }
//    }
//    cout << "Ans: " << ans_sum << endl; 


//   return 0; 

// }






/*
 checkalphabets 
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// bool checkAllAlphabets(string s){
//        if(s.length() < 26){
//             return false; 
//        }

//        transform(s.begin(), s.end(), s.begin(),::tolower);

//        set<char> alphabets;
//        for(auto ch:s){
//             alphabets.insert(ch);
//        }

//        return (alphabets.size() == 26);
// }

// int main(){
    
//     string input; 
//     cin >> input; 

//     if(checkAllAlphabets(input)){
//       cout << "Yes " << endl; 
//     }
//     else{
//       cout<<"No" << endl; 
//     }
//    return 0; 
// }    















/*
 unordered set : 
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       unordered_set<int> s1;

//       s1.insert(3);
//       s1.insert(1);
//       s1.insert(2);
//       s1.insert(1); 

//       for(auto value:s1){
//            cout << value << " ";
//       } cout << endl; 

//   return 0; 
// }







/*
 multiset.cpp
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      multiset<int> ms; 

//      ms.insert(1);
//      ms.insert(3);
//      ms.insert(2);
//      ms.insert(3); 

//      for(auto value:ms){
//             cout << value<< " ";
//      }cout << endl; 


//   return 0;  
// }







/*
unordered_multiset 
*/ 
// #include<bits/stdc++.h>
// using namespace std; 

// int main(){
//    unordered_multiset<int> ms1; 
//    ms1.insert(4);
//    ms1.insert(8);
//    ms1.insert(3);
//    ms1.insert(1);

//    for(auto value:ms1){
//       cout << value<< " ";
//    }  cout << endl;

//    return 0; 
// }









/*
 given n integers(can be duplicates), print the second smallest 
 integer. if it does not exist, print -1. 
*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int n; 
//   cin >> n; 

//   vector<int> v(n);
//   for(int i = 0; i<n; i++){
//        cin>>v[i];
//   }

//   set<int> s;
//   for(auto val:v){
//        s.insert(val);
//   }
//   auto itr = s.begin();
//   itr++; 
//   cout << "Second smallest number: "<<*itr << endl; 
//   return 0; 
// }












/*
 given the number of questions as n and marks for the correct answer as p and q marks for the 
 incorrect answer. One can either attempt to solve the question in an examination and get 
  either p marks if the answer is right or q marks if the answer is wrong. or leave 
   the question unattended and get 0 marks. the task is to find the count of all the different 
   possible marks that one can score in the examination. 
   input; n =2, p=1, q=-1 
    
*/ 
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n, p, q;
     cin >> n >> p >> q; 
       
       unordered_set<int> s; 


       
     for(int i = 0; i<=n; i++){
            for(int j = 0; j<=n; j++){
                 int correct = i;
                 int incorrect = j; 
                 int unattended = n - (i - j);
                 if(unattended>=0){
                      int score = correct*p + incorrect*q; 
                      s.insert(score); 
                 }
                 else{
                     break; 
                 }

            }
     }

     for(auto score:s){
           cout<<score << " ";
     } cout << endl; 


     cout << "Ans: " << s.size() << endl;

return 0; 


}
