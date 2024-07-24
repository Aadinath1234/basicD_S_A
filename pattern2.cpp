//Diamond problem:
// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//    int n = 5;
//    // loop to print upper triangle
//    for(int line = 1; line <= n; line++){
//      // this loop does some work for each line 

//      // below loop is to print spaces 
//      int no_of_spaces = (n-line);
//      for(int k = 0; k<no_of_spaces; k++){
//          cout << " ";
//      }

//      // below loop is to print chars for each line 
//      int no_of_chars = 2*line - 1;
//      for(int j = 0; j<no_of_chars; j++){
//          char ch = (char)('A' + j);
//          cout << ch; 
//      }
//      cout <<"\n";
//    }


//   //loop to print the lower triangle: 
//   for(int line = n + 1; line <= 2*n - 1; line++){
//      int no_of_spaces = (line - n);
//      for(int k = 0; k < no_of_spaces; k++){
//          cout << " ";
//      }
//      int no_of_chars = 2*(2*n - line) - 1;
//      for(int j = 0; j< no_of_chars; j++){
//          cout << (char) ('A' + j);
//      }
//      cout << "\n";
//   }
//   return 0;


// }







// draw a pattern + : 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n = 5;
//     for(int line = 0; line < n; line++){
//            for(int i = 0; i< n; i++){
//              if(i == n/2) cout << "*";
//              else if(line == n/2) cout << "*";
//              else cout << " ";
//            }
//            cout << "\n";
//     }
//     return 0;

// }









#include<bits/stdc++.h>
using namespace std;

int main(){
   int starRows, starCols;
   cout << "Please enter the number of star rows";
   cin >> starRows;
   cout << "Please enter the number of star cols";
   cin >> starCols;

   for(int line = 1; line <= starRows; line++){
     for(int j = 1; j <= starCols; j++){
         cout << "*";
     }
     cout << "\n";
   }
   return 0;




}