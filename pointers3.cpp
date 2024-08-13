// wild pointer: 
// #include<bits/stdc++.h>
// using namespace  std;

// int main(){
//  int *ptr;        // only declared 
//      cout<<ptr<<" "<<*ptr; 
//      return 0;
// }




// Null pointer : 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int *ptr = NULL;
//      int *p1 = 0;
//      int *p2 = '\0';
//      cout <<ptr<<" "<<p1<<" "<<p2<<" "<<"\n";
//      return 0;
// }





// Dangling pointers: 

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//       int *ptr = NULL;
//       {
//           int x= 10;
//           ptr = &x;
//       }
//       cout << ptr;
// }









// void pointers: 
#include<bits/stdc++.h>
using namespace std;

int main(){
    float f = 10.2;
    int x = 10; 
    void *ptr = &f;
    ptr = &x;

    int *integerPointer = (int *)ptr;
    cout << *integerPointer << "\n";
    return 0;
}




