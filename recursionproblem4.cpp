// given a number n.find the increasing sequence from 1 to n without using any loop. 
// #include<bits/stdc++.h>
// using namespace std;

// void f(int n){
//       // base case 
//       if(n < 1) return;
//       //  go and print first n-1 natural numbers
//       f(n-1);
//       cout << n << " ";
// }

// int main(){
//       f(20);
//       return 0;
// }









// given a number num and a value k. print k multiples of num. 
// #include<bits/stdc++.h>
// using namespace std;

// void f(int num, int k){
//      // base case 
//      if(k == 0) return;
//      // assumption 
//      f(num, k-1); // the function correctly prints the first k-1 multiples 
//      // self work
//      cout << (num * k) << " ";

// }

// int main(){
//      f(3,3);
//      return 0;
// }










// given a number n. Find the sum of natural numbers till n but with alternate signs. 
#include<bits/stdc++.h>
using namespace std;

int f (int n){
         //base case
          if(n==0) return 0;
          // assumption 
          return f(n-1) + ((n%2 == 0) ? (-n) : (n)); // calculate sum of first n-1 natural num with alternate 
}

int main(){
    cout << f(10) << "\n";
    return 0;
}