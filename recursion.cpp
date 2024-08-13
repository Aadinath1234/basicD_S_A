// #include<bits/stdc++.h>
// using namespace std;

// int f(int n ){
//      if(n==1) return 1;
//       return n*(n-1);
// }

// int main(){
//      int result = f(5);
//      cout << result;
//      return 0;
// }






#include<bits/stdc++.h>
using namespace std;

int fib(int n){
   // base case 
    if(n == 0 or n == 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
     int result = fib(3);
     cout << result;
     return 0;
}



