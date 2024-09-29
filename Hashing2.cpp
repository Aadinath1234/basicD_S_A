// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     map<string, int > directory; 
//     directory["naman"] = 3876; 
//     directory["animesh"] = 74529; 
//     directory["rity"] = 265289; 

//     for(auto element:directory){
//           cout << "Name - " << element.first << endl; 
//           cout << "Phone no. - " << element.second << endl; 
//     } cout << endl; 


//     // directory["ritu"] = 265289; 
  
//     for(auto element:directory){
//           cout << "Name - " << element.first << endl; 
//           cout << "Phone no. - " << element.second << endl; 
//     }
//     return 0; 
// }










/*reverse order */ 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     map<string, int > directory; 
//     directory["naman"] = 3876; 
//     directory["animesh"] = 74529; 
//     directory["rity"] = 265289; 

//     for(auto element:directory){
//           cout << "Name - " << element.first << endl; 
//           cout << "Phone no. - " << element.second << endl; 
//     } cout << endl; 


//     // directory["ritu"] = 265289; 
  
//      map<string, int>::reverse_iterator itr; 
//      for(itr = directory.rbegin(); itr!=directory.rend(); itr++){
//           cout << itr-> first << "- " <<itr->second<<endl; 
//      }
//     return 0; 
// }











/*
sum of repetitive elements 
you are given an integer n, representing the number of elements. Then , you will be given 
n elements.You have to return the sum of repetitive elements i.e. the elements that appear 
more than one time . 
*/ 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//  int n; 
//  cin >> n; 
//  vector<int> input(n);

//  for(int i = 0; i<n; i++){
//        cin >> input[i];
//  }

//  map<int, int> m; 
//  for(int i=0; i<n; i++){
//       // storing frequency of every element in input array 
//       m[input[i]]++; 
//  }


//  int sum=0; 
//  // finding sum of repetitive elements 
//  // pair - element, frequency 
//  for(auto pair:m){
//       if(pair.second>1){
//          // element is repetitive 
//          sum+=pair.first; 
//       }
//  }

//  cout << "Ans - " << sum<<endl; 

// }











/*
 unorderedmap  
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      unordered_map<int, string> record; 
//      //   map<int, string> record; 
//       //rollno, name 
//       record.insert(make_pair(3, "ria"));
//       record[1] = "bali";
//       record[2] = "animesh";
//       record[3] = "payal"; 

//      //  record.insert(make_pair(3, "payal")); 

//       for(auto pair:record){
//             cout << "Roll No - " << pair.first << endl; 
//             cout << "Name - " << pair.second << endl; 
//       }

//   return 0; 

// }











/*
multimap.cpp
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       multimap<string, int> directory;

//       directory.insert(make_pair("urvi", 6292001));
//       directory.insert(make_pair("saghvi", 653902));
//       directory.insert(make_pair("saghvi", 90000));
//      //  directory["urvi"] = 278192; not allowed 

//      for(auto pair:directory){
//            cout << "Name - " << pair.first << endl; 
//            cout << "Phone no - " << pair.second << endl; 
//      }

//      return 0; 
// }











/*
 unordered multimap 
*/ 
#include<bits/stdc++.h>
using namespace std;

int main(){
       unordered_multimap<string, int > fruitcount; 

       fruitcount.insert(make_pair("apple", 6));
       fruitcount.insert(make_pair("banana", 9));
       fruitcount.insert(make_pair("apple", 3)); 


       for(auto pair: fruitcount){
           cout<< "Fruit - " << pair.first << endl; 
           cout << "Count - " << pair.second << endl; 
       }
    return 0; 

}