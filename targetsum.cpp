// target sum with pairs: 
// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int array[]  = {3,4,6,7,1};
//     int targetsum = 7;

//     int size = 5;
//     int pairs = 0;

//     for(int i = 0; i<size; i++){
//            for(int j = i+1; j < size; j++){
//                 if(array[i] + array[j] == targetsum){
//                       pairs++;
//                 }
//            }
//     }
//     cout << pairs << endl;
//     return 0;

// }





//count the number of triplets whose sum is equal to the given value x : 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//   int array[] = {3,1,2,4,0,6};
//   int targetsum = 6;
//   int size= 6;

//   int triplets = 0;

//   for(int i = 0; i<size; i++){
//       for(int j = i+1;j<size; j++){
//           for(int k =j+1; k<size; k++){
//               if(array[i] + array[j] + array[k] == targetsum){
//                    triplets++;
//               }
//           }
//       }
//   }

//   cout << triplets << endl;
//   return 0;


// }











// Array manipulation: find the unique number in  a given array where all the elements are being repeated twice with one value being unique. 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int array[] = {2,3,1,3,2,4,4,5,1};
//    int size = 9;
//    for(int i = 0; i<size;i++){
//       for(int j = i+1; j < size; j++){
//            if(array[i]== array[j]){
//               array[i] = array[j] = -1;
//            }
//       }
//    }

//    for(int i = 0; i<size;i++){
//       if(array[i]>0){
//           cout << array[i] << endl;
//       }
//    }

//    return 0;
// }












// find the second largest element in the given array: 
// #include<bits/stdc++.h>
// using namespace std;

// int largestElementIndex(int array[], int size){
//       int max=INT_MIN;
//       int maxindex= -1;
//       for(int i = 0; i<size; i++){
//           if(array[i]>max){
//               max=array[i];
//               maxindex=i;
//           }
//       }
//       return maxindex;
// }






// int main(){
//   int array[] = {2,3,5,7,6,1,7};
//   int n =7;
//   int indexoflargest =largestElementIndex(array, n);
//   cout << array[indexoflargest]<<endl;
// //   array[indexoflargest]=-1;
// int largestelement = array[indexoflargest];
// for(int i = 0; i<n; i++){
//       if(array[i] == largestelement){
//           array[i] = -1;
//       }
// }
//   int indexofsecondlargest = largestElementIndex(array, n);
//   cout << array[indexofsecondlargest]<<endl;

//   return 0;
// }



// another way of finding the second largest element in the array: 
// #include<bits/stdc++.h>
// using namespace std;

// int secondLargestElement(int array[], int size){
//     int max = INT_MIN;
//     int second_max=INT_MIN;

//     for(int i = 0; i<size; i++){
//          if(array[i]>max){
//             max=array[i];
//          }
//     }

//     for(int i =0;i<size;i++){
//          if(array[i]>second_max && array[i]!=max){
//              second_max=array[i];     
//          }
//     }

//     return second_max;
// }


// int main(){
//     int array[] = {2,3,5,7,6,1,7};
//     int n = 7;

//     cout << secondLargestElement(array, n) << endl;
//     return 0;
// }












// rotate the given array 'a' by k steps, where k is non-negative.note:k can be greater than n as well where n is the size of array'a'.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int array[] = {1,2,3,4,5};
//    int n = 5;
//    int k = 3;
//  // k can be greater than n 
//    k = k %n;


//    int ansarray[5];
//    int j = 0;

//    // inserting last k elements in ans array: 
//     for(int i = n-k; i<n; i++){
//          ansarray[j++] = array[i];
//     }

//     // inserting first n-k elements in ans array 
//      for(int i =0; i<=k; i++){
//         ansarray[j++] = array[i];
//      }


//      for(int i = 0; i<n; i++){
//         cout << ansarray[i] << " ";
//      }

//      return 0;
// }











// rotate the given array 'a' by k steps where k is non-negative . note : k can be greater than n as well where n is the size of array 'a'.
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      vector<int> v;
//      v.push_back(1);
//      v.push_back(2);
//      v.push_back(3);
//      v.push_back(4);
//      v.push_back(5);

//      int k = 2;
//      k = k%v.size();

//      reverse(v.begin(), v.end());
//      reverse(v.begin(), v.begin()+k);
//      reverse(v.begin()+k, v.end());

//      for(int a:v){
//         cout << a << " ";
//      } cout << endl;






// }










// given Q queries, check if the given number is present in the array or not.note : value of all the elements in the array is less than 10 to the power 5.
#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;

   vector<int> v(n);
   for(int i =0; i<n; i++){
      cin>>v[i];
   }

   const int N = 1e5 + 10;
   vector<int> freq(N,0);
   for(int i = 0; i<n; i++){
       freq[v[i]]++;
   }

   cout << "Enter queries: ";
   int q;
   cin >> q;


  while(q--){
      int queryelement;
      cin >> queryelement;
      cout << freq[queryelement] << endl;  
  }

  return 0; 
}

