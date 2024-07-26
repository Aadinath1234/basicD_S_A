//length of the array : 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int array[] = {1,2,3,4};
//    cout << sizeof(array) << endl;
//    cout << sizeof(array)/sizeof(array[0])<<endl;

//     return 0;

// }



// loop : 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       int array[] = {1,2,3,4}; 
//       int size = sizeof(array)/sizeof(array[0]);
//        for(int idx=0; idx<size; idx++){
//          cout << array[idx]<<endl;
//        }

//        cout << "now we are using for each loop: "<<endl;
//        for(int ele: array){
//            cout << ele <<endl;
//        }


//        cout << "now we are using while loop: " << endl;
//        int index = 0;
//        while(index < size){
//             cout << array[index] << endl;
//             index++;
//        }
//        return 0;
// }






// taking the input from the user: 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       char vowels[5];
//       for(int idx=0; idx<5;idx++){
//          cin>>vowels[idx];
//       }

//       for(int idx=0;idx<5;idx++){
//           cout << vowels[idx]<< " ";
//       }
//       return 0;
// }





// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       char vowels[5];
//     //   for each loop taking input from the user: 
//       for(char &element:vowels){
//            cin>>element;
//       }

//       for(int idx=0;idx<5;idx++){
//           cout << vowels[idx]<< " ";
//       }
//       return 0;
// }



// sum of all the elements of the array: 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       int array[] = {3, 4,10,11};
//       int size = sizeof(array)/sizeof(array[0]);
//       int sum = 0;
//       for(int i = 0; i<size; i++){
//          sum+=array[i];
//       }
//       cout << sum << endl;
//       return 0;
// }







// find the maximum element: 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int array[] = {3,7,18,9,11};
//      int max = array[0];

//      for(int i = 1; i<5;i++){
//           if(array[i] > max){
//              max = array[i];
//           }
//      }
//      cout << max << endl;

//   return 0;
// }




// linear search: 
#include<bits/stdc++.h>
using namespace std;

int main(){
      int array[] = {3,9,18,11,7};
      int key = 7;

      int ans = -1;

      for(int i = 0; i<5;i++){
           if(array[i] == key){
               ans = i;
               break;
           }
      }
      cout << ans << endl;
      return 0;
}