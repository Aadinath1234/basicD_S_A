// given a boolean 2d array, where each row is sorted. Find the row with the maximum number of 1s. 
// #include<bits/stdc++.h>
// using namespace std;


// int leftMostOneRow(vector<vector<int>> &V){
//         int leftMostOne = -1;
//         int maxOnesRow = -1; 
//         int j = V[0].size()-1;

//         // finding leftmost one in 0th row 
//         while(j>=0 && V[0][j] == 1){
//             leftMostOne = j; 
//             maxOnesRow = 0; 
//             j--;
//         }

//         // check in rest of the rows if we can find a one left to the leftMostOne 
//           for(int i = 1; i<V.size(); i++){
//               while (j>=0 && V[i][j] == 1)
//               {
//                 leftMostOne = j; 
//                 j--;
//                 maxOnesRow = i;
//               }
//           }
//           return maxOnesRow; 
// }



// int maximumOnesRow(vector<vector<int> > &V){
//       int maxOnes = INT_MIN; 
//       int maxOnesRow = -1;
//       int columns = V[0].size();
//       for(int i = 0; i<V.size(); i++){
//            for(int j = 0; j<V[i].size(); j++){
//                if(V[i][j] == 1){
//                    int numberOfOnes = columns - j;
//                    if(numberOfOnes > maxOnes){
//                         maxOnes =numberOfOnes;
//                         maxOnesRow= i;
//                    }
//                }
//            }
//       }

//       return maxOnesRow; 
// }


// int main(){
//       int n, m;
//       cin>> n>> m; 

//       vector<vector<int>> vec(n, vector<int> (m)); 
//       for(int i = 0; i < n; i++){
//           for(int j = 0; j< m; j++){
//               cin>> vec[i][j];
//           }
//       }

//       int res = maximumOnesRow(vec);
//       cout << res << endl; 
//      return 0; 
// }













// Rotation of matrix: 
// given a square matrix,turn it by 90 degrees in a clockwise direction without using any extra space. 
#include<bits/stdc++.h>
using namespace std;


void rotateArray(vector<vector<int> > & vec){
    int n = vec.size();
       // transpose
        for(int i=0; i<n; i++){
              for(int j =0; j< i; j++){
                  swap(vec[i][j], vec[j][i]);
              }
        }

        //reverse every row 
         for(int i = 0; i<n; i++){
              reverse(vec[i].begin(), vec[i].end());
         }

         return; 
}


int main(){
      int n; 
      cin >>n;
      vector<vector<int>> vec(n, vector<int> (n)); 
      for(int i = 0; i<n; i++){
          for(int j = 0; j<n; j++){
              cin >> vec[i][j];
          }
      }


    rotateArray(vec);
    for(int i = 0; i<n; i++){
          for(int j = 0; j<n; j++){
             cout << vec[i][j] << " ";
          }
          cout << endl;
    }

    return 0; 
}