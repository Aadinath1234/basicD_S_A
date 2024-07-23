// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//      int n, m;
//      cin >> n;
//      cin>> m;

//      for(int i = 1; i<=n; i++){
//           for(int j =1; j<=m;j++){
//              cout << "*";
//           }
//           cout << endl;
//      }
//      return 0;
// }





//hollow rectangle: 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n, m;
//     cin>>n>>m;
//     for(int i = 1; i<=n; i++){
//          for(int j =1; j<=m; j++){
//              if(i==1 || j==1 || i==n || j==n){
//                  cout << "*";
//              } else{
//                   cout << "  ";
//              }
//          }
//          cout << endl;
//     }
//   return 0;



// }






// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     for(int i = 1; i<=n; i++){
//          for(int j = 1; j<=i; j++){
//              cout << "*";
//          }
//          cout << endl;
//     }
//     return 0;

// }







// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int n; 
//    cin >> n;

//    for(int i = 1; i<=n; i++){
//        for(int j = 1; j<=(n-i); j++){
//          cout << " ";
//        }
//        for(int j = 1;j<=(2*i-1); j++){
//           cout << "*";
//        }
//        cout << endl;
//    }
//    return 0;




// }








// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int n;
//    cin >> n;
//    for(int i = 1; i<=n; i++){
//      for(int j = i; j<=n; j++){
//          cout << j;
//      }
//      for(int j = 1; j<=(i-1); j++){
//          cout << j;
//      }
//      cout << endl;
//    }


// return 0;

// }






// #include<bits/stdc++.h>
// using namespace std;


// int main(){
// int n, m;
// cin >> n>>m;

// for(int i = 1; i<=n; i++){
//      for(int j = 1; j<=m; j++){
//          if((i+j) % 2 == 0){
//              cout << "1";
//          }
//          else{
//               cout << "2";
//          }
         
//      }
//      cout << endl;
// }

// }










// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int n;
//    cin >> n; 

//    for(int i = 1; i<=n; i++){
//         for(int j = 1; j<=(n-i); j++){
//              cout << " ";
//         }
//         for(int j = 1; j<=i; j++){
//              cout << j;
//         }
//         for(int j = (i-1); j>= 1; j--){
//             cout << j;
             
//         }
//         cout << endl;
//    }

//   return 0;
// }









// count the no. of digits: 
// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//    int n;
//    cin >> n; 

//    int digits = 0;
//    while(n>0){
//      digits++;
//      n = n/10;
//    }
//    cout << digits << endl;
// }






//find the sum of the digits in a given numbers n :
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//    int n;
//    cin >> n;

//    int sum = 0;
//    while(n>0){
//      int lastdigit = n % 10;
//      sum += lastdigit;
//      n/=10;
//    }
//    cout << sum << endl;

// }









//reverse the digits of a number: 


// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//        int n;
//        cin >> n;
//        int reverse = 0;
//        while(n>0){
//          int lastdigit = n % 10;
//          reverse = reverse * 10 + lastdigit;
//          n/=10;
//        }
//        cout << reverse << endl;


// return 0;
// }





// find the sum of the following series: 


// #include<bits/stdc++.h>
// using namespace std;


// int main(){
//    int n ;
//    cin>> n;

//    int result = 0;
//    for(int i = 1; i<=n; i++){
//       if(i%2 == 0){
//          result -= i;
//       } else{
//          result += i;
//       }
//    }
//    cout << result << endl;
//    return 0;

// }






// find the first n factorial numbers: 


#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;

  int factorial = 1;
  for(int i = 1; i<=n; i++){
       factorial*= i;
       cout << factorial << endl;
  }

  return 0;



}