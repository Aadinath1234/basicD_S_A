// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int  x = 18;
//      float  y = 7.9;

//      // create a pointer that can store address of x as x is an integer variable, so we need a pointer that can store address of integer type 

//      int *ptr = &x;
//      cout << ptr << "\n";


//      // create a pointer that can store address of y and y is a float variable so we need to store it in a float pointer. 
//      float *ptrf = &y;
//      cout << ptrf << "\n";

//      return 0;

// }













// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int *ptr; // declaring the pointer 

//      cout << ptr << "\n";

//      int marks = 90;

//      ptr = &marks; // reassignment /update 

//      cout << ptr << "\n";


//      return 0;

// }












// #include<bits/stdc++.h>
// using namespace  std;

// int main(){
//     float x = 4.5;

//     float *ptr = &x;

//     cout << ptr;
//     return 0;

// }








// #include<bits/stdc++.h>
// using namespace  std;

// int main(){
//      int x = 18;
//      float y = 7.9; 


//      int *ptr = &x;
//      cout << "Address stored inside ptr: " << ptr << "\n";
//      cout << "Value present at the address stored in ptr: " << *ptr << "\n";


//      float *ptrf = &y;
//      cout << "Address stored inside ptrf: " << ptrf << "\n";
//      cout << "Value present at the address stored in ptrf: " << *ptrf << "\n";




//     //-----------

//     x = 23;
//     cout << "New updated value of x : " << x << "\n";
//     cout << "ptr still pointing to same memory which has 23 instead of  18 - " << *ptr << "\n";


//     // updating x with pointer: 
//      *ptr=50;

//      cout << "New value of x " << x << "\n";
//      cout << "New value pointed by ptr" << *ptr << "\n";

//      int valueAtX = *ptr;
//      cout << valueAtX << "\n";

//      return 0;

// }














// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int x, y;  // declare x and y so x,y has garbage value; 
      
//       cin >> x >> y;  // taking input of x and y; 

//       int *ptrx = &x; // &x fetches address of x and then store it in ptrx

//       int *ptry = &y; // &y fetches address of y and then store it in ptry;

//       int result; // declare result so it has garbage value 
//       int *ptr_result = &result;

//       *ptr_result = *ptrx + *ptry; 

//       cout << result << "\n";


//    return 0;
// }








#include<bits/stdc++.h>
using namespace std;

int main(){
     int x = 9;

     int y = 2;

     int *ptr = &x;

     cout << &ptr;
  
   // ptr = 5;  we cant do this as ptr only stores address nothing else 

   // *ptr = &y;  this won't work as we cannot store address in an int bucket 

   cout << "Address of x " << &x << "\n";
   cout << "Address stored inside ptr " << ptr << "\n";

   cout <<"Address of ptr itself "<<  &ptr << "\n"; // prints the address of the ptr bucket  

     return 0;
}