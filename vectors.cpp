// #include<bits/stdc++.h>

// using namespace std;

// int main(){
//    vector<int> v;

//    cout <<"size: "<< v.size() << endl;
//    cout << "capacity:  "<<v.capacity() << endl;

//    v.push_back(1);
//    cout << "size: "<<v.size() << endl;
//    cout << "Capacity: "<<v.capacity() << endl;

//    v.push_back(2);
//    cout << "Size: " << v.size() << endl;
//    cout << "Capacity: "<<v.capacity() << endl;

//    v.push_back(3);
//    cout << "Size: " << v.size() << endl;
//    cout << "Capacity: " << v.capacity() << endl;

//    v.resize(5);
//    cout << "size: " << v.size() << endl;
//    cout << "capacity: " << v.capacity() << endl;

//    v.resize(10);
//    cout << "Size: " << v.size() << endl;
//    cout << "Capacity: " << v.capacity() << endl;

//    v.pop_back();
//    v.pop_back();

//    cout << "Size: " << v.size() << endl;
//    cout << "Capacity: " << v.capacity() << endl;

//  return 0;

// }







// loopsinvector.cpp
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   vector<int> v;

//   // for loop:
//   for (int i = 0; i < 5; i++)
//   {
//     int element;
//     cin >> element;
//     v.push_back(element);
//   }

//   for (int i = 0; i < v.size(); i++)
//   {
//     cout << v[i] << " ";
//   }

//   cout << endl;

//   v.insert(v.begin() + 2,6);


//   // for each loop:
//   for (int ele : v)
//   {
//     cout << ele << " ";
//   }
//   cout << endl;

//   v.erase(v.end()-3);

//   // while loop:
//   int idx = 0;
//   while (idx < v.size())
//   {
//     cout << v[idx++] << " ";
//   }
//   return 0;
// }








// find the last occurence of an element x in a given array: 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   vector<int> v(6);
//   for(int i = 0; i<6; i++){
//      cin >> v[i];
//   }

//   cout << "Enter x : ";
//   int x;
//   cin>>x;

//   int occurence = -1;
//   for(int i=0; i<v.size();i++){
//        if(v[i] == x){
//           occurence = i;
//        }
//   }
//   cout << occurence << endl;

//   return 0;
// }


// another way of doing it: 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   vector<int> v(6);
//   for(int i = 0; i<6; i++){
//      cin >> v[i];
//   }

//   cout << "Enter x : ";
//   int x;
//   cin>>x;

//   int occurence = -1;
//   for(int i = v.size()-1; i>=0; i--){
//        if(v[i] == x){
//            occurence = i;
//            break;
//        }
//   }
//   cout << occurence << endl;

//   return 0;
// }





// occurences: 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    vector<int> v(6);
//    for(int i = 0; i<v.size();i++){
//          cin >> v[i];
//    }

//    cout << "Enter x:";
//    int x;
//    cin >> x;

//    int occurences =0;

//    for(int ele:v){
//          if(ele==x){
//              occurences++;
//          }
//    }
//    cout << occurences <<  endl;

//    return 0;



// }





// find the how many greater no. of elements : 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    vector<int> v(6);
//    for(int  i = 0;i<v.size(); i++){
//        cin >> v[i];
//    }

//    cout << "enter x: ";
//    int x;
//    cin>>x;


//    int count = 0;
//    for(int i =0; i<v.size(); i++){
//       if(v[i]>x){
//            count++;
//       }
//    }
//    cout << count << endl;


// return 0;
// }










// check if the given array is sorted or not : 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int array[] = {1,2,3,4,5,6};

//     bool sortedflag = true;
//     for(int i = 1;i<6;i++){
//          if(array[i]<= array[i-1]){
//               sortedflag = false;
//          }
//     }

//     cout << sortedflag << endl;
//      return 0;
// }








// find the difference between the sum of elements at even indices to the sum of elements at odd indices.

#include<bits/stdc++.h>
using namespace std;

int main(){
   int array[] = {1,2,1,2,1,2};
   int anssum = 0;

   for(int i = 0; i<6;i++){
      if(i%2 == 0){
           anssum+= array[i];
      }
      else{
          anssum -= array[i];
      }
   }
   cout << anssum << endl;
   return 0;
}