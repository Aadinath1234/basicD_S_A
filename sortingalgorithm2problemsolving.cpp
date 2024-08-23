// // wap to find kth smallest element in an array using quicksort. 
// #include<bits/stdc++.h>
// using namespace std;


// int partition(int arr[], int l, int r){
//        int pivot = arr[r];

//        int i=l;
//        for(int j=l; j<r; j++){
//              if(arr[j]<pivot){
//                   swap(arr[i], arr[j]);
//                   i++;
//              }
//        }
//        swap(arr[i], arr[r]);
//        return i; 
// }

// int  kthSmallest(int arr[], int l, int r, int k){
//           if(k>0 && k<=r-l+1){
//             int pos = partition(arr, l, r); // position of pivot ele 
//                if(pos-l==k-1){
//                   return arr[pos];
//             }
//             else if(pos-l>k-1){
//                  return  kthSmallest(arr, l, pos-1, k);
//             }
//             else{
//                return kthSmallest(arr, pos+1, r, k-(pos-l+1));
//             }
//           }
//           return INT_MAX;
// }

// int main(){
     
//      int arr[] = {3,5,2,1,4,7,8,6};
//      int n = sizeof(arr)/sizeof(arr[0]);
//      int k = 5;

//     cout <<  kthSmallest(arr, 0, n-1, k) << endl;

    
// }







// merge arrays: 
#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[], int n1, int arr2[], int n2, int arr3[]){
        int a=0; // array1
        int b= 0; // array 2
        int c = 0; // array 3 

        while(a<n1 && b < n2){
              if(arr1[a]<arr2[b]){
                   arr3[c++]=arr1[a++];
              }else{
                 arr3[c++] = arr2[b++];
              }
        }

        while(a<n1){
                arr3[c++]=arr1[a++];
        }


        while(b<n2){
              arr3[c++] = arr2[b++];
        }
}


int main(){
     int arr1[] = {5,8,10,11,12};
     int arr2[] = {2,7,8};
     int n1 = sizeof(arr1)/sizeof(arr1[0]);
     int n2 = sizeof(arr2)/sizeof(arr2[0]);

     int n3 = n1 + n2; 
     int arr3[n3];
     merge(arr1, n1, arr2, n2, arr3);

     for(int i = 0; i<n3; i++){
           cout << arr3[i] << " ";
     } cout << endl; 
}