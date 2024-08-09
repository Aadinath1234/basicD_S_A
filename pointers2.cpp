// #include<bits/stdc++.h>
// using namespace std;

//  void swap(int *x, int *y){
//        //try to swap x and y 
//        int temp = *x;
//        *x = *y;
//        *y = temp;
//  }


//  int main(){
//        int x = 10;
//        int y = 20;

//        int *p1 = &x;
//        int *p2 = &y;

//        swap(p1, p2);

//        cout << x << " "<< y;
//        return 0;
//  }








// #include<bits/stdc++.h>
// using namespace std;


// void findFirstAndLastIndex(string s, char ch, int *first, int *last){
//     for(int i = 0; i< s.size(); i++){
//            if(s[i] == ch){
//               *first = i; 
//               break; 
//            }
//     }



//     for(int i = s.size() -1 ; i>=0; i--){
//             if(s[i] == ch){
//                   *last  = i;
//                    break; 
//             }
//     }
// }


//  int main(){
//       string s = "aaabac";
//       char ch = 'a';
//       int first = -1; 
//       int last = -1;

//       int *pf=&first;
//       int *pl = &last; 

//       findFirstAndLastIndex(s, ch, pf, pl);

//       cout << *pf << " " << *pl << "\n";
//       cout << first << " " << last << "\n";

//       return 0;
//  }










// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//     int x = 20; 
//   double dec = 9.8;
//   int *ptr = &x;
//   double *ptrd = &dec;

//   cout << "Size of x is : " << sizeof(x) << "\n";
//   cout << "size of dec is : " << sizeof(dec) << "\n";

//   cout << ptr << " " << (ptr + 1) << "\n";
//   cout << ptrd << " " << (ptrd + 2) << " " << (ptrd + 3) << " " << (ptrd - 1) << "\n";

//   return 0; 
// }












// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int x = 10;
//    int *ptr =  &x; 

//    cout << ptr << "\n";

//    ptr += 1; 

//    cout << ptr << "\n";

//    return 0; 
// }










// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int arr[2] = {1, 19};
//      int *ptr = &arr[0];

//      cout << ptr << " " << *ptr << "\n";

//      cout << *ptr++ << "\n";

//      cout << arr[0] << " " << arr[1] << "\n";

//      cout << ptr << " " << *ptr << "\n";
//      return 0;
// }












// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int arr[2] = {5, 4};
//      int *ptr = &arr[0];

     

//      cout << (*ptr)++ << "\n";

//      cout << arr[0] << " " << arr[1] << "\n";

    
//      return 0;
// }











// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int arr[2]= {7, 5};
//    int *ptr = &arr[0];
//    cout << *++ptr << "\n";
//    cout << arr[0] << " " << arr[1] << "\n";
//    return 0;
// }








// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int arr[2] = {8, 2};
//    int *ptr = &arr[0];

//    cout << ++*ptr << "\n";
//    cout << arr[0] << " " << arr[1] << "\n";

// }










// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     int arr[3] = {15, 12, 6};
//    int n = 3;
//    int *ptr = &arr[0];

//    cout << ptr << " " << arr << " " << *ptr << " " << *arr << "\n";
//    cout << *(arr + 0) << " " << *(arr + 1) << " " << *(arr + 2) << "\n";
//    for(int i = 0; i<n; i++){
//       cout << *(arr + i) << "\n";
//    }

//    return 0;
// }











// #include<bits/stdc++.h>
// using namespace std;

// void process(int *arr, int n){
//   // inside this function we have the access of the same array in the main 
//   for(int i  = 0; i<n; i++){
//       cout << *(arr + i) << "\n";
//   }
//   *(arr + 1) = 33; 
// }

// int main(){
//     int arr[3] = {5, 1, 2};
//     process(arr, 3);
//      for(int i = 0; i<3; i++){
//           cout << arr[i] << " ";
//      }
//     return 0; 
// }












#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[3] = {11,12,13};
    int (*p)[3] = &a;
    cout << p << " " << a << " " << *p << " " << *a << "\n";
    return 0;

}



