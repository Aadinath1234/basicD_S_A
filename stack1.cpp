// #include<bits/stdc++.h>
// using namespace std; 

// class Stack{
//      int capacity;
//      int* arr;
//      int top; 
//      public: 
//       Stack(int c){
//           this->capacity = c;
//           arr = new int[c];
//           this->top = -1; 
//       }

//       void push(int data){
//            if(this->top == this -> capacity - 1){
//               cout << "Overflow\n";
//               return; 
//            }
//            this->top++; 
//            this->arr[this->top] = data; 
//       }

//       int pop(){
//           if(this->top == -1){
//              cout << "Underflow\n";
//              return INT_MIN; 
//           }
//           return this->arr[this->top--]; 
//       }

//       int getTop(){
//            if(this->top == -1){
//               cout << "Underflow\n";
//               return INT_MIN;
//            }
//            return this->arr[this->top];
//       }

//       bool isEmpty(){
//             return this->top == -1; 
//       }

//       int size(){
//            return this->top + 1; 
//       }

//       bool isFull(){
//          return this->top == this->capacity - 1; 
//       }
// }; 



// int main(){
//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout << st.getTop() << "\n";
//     st.push(4);
//     st.push(5);
//     cout << st.getTop() << "\n"; 
//     st.push(8); 

//     st.pop();
//     st.pop(); 
//     cout << st.getTop() << "\n";
//     return 0; 
// }







/*
  stackusing linkedlist . 
*/
// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//     public: 
//       int data;
//       Node* next;
//       Node(int d){
//           this->data = d; 
//           this->next = NULL; 
//       }
// };



// class Stack{
//      Node* head; 
//      int capacity;
//      int currSize;
//      public: 
//      Stack(int c){
//           this->capacity = c;
//           this->currSize = 0;
//           head = NULL; 
//      }
//      bool isEmpty(){
//           return this->head == NULL;
//      }

//      bool isFull(){
//          return this->currSize == this->capacity; 
//      }
     

//     void push(int data){
//          if(this->currSize == this->capacity){
//              cout << "Overflow" << "\n" << endl;
//              return; 
//          }
//          Node* new_node = new Node(data);
//          new_node->next = this->head;
//          this->head = new_node;
//          this->currSize++; 
//     }

//     int pop(){
//          if(this->head == NULL){
//               cout << "Underflow\n";
//               return INT_MIN;
//          }
//          Node* new_head = this->head->next;
//          this->head->next = NULL;
//          Node* tobeRemoved = this->head;
//          int result = tobeRemoved->data;
//          delete tobeRemoved; 
//          this->head = new_head;
//          return result; 
//     }
    
//     int getTop(){
//          if(this->head == NULL){
//              cout << "Underflow\n";
//              return INT_MIN;
//          }
//          return this->head->data;
//     }
//     int size(){
//          return this->currSize;
//     }


     
// }; 




// int main(){
//     Stack st(5);
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout << st.getTop() << "\n";
//     st.push(4);
//     st.push(5);
//     cout << st.getTop() << "\n";
//     st.push(8);

//     st.pop();
//     st.pop();
//     cout << st.getTop() << "\n"; 



//     return 0;
// }










/*
 stack using stl.
*/
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     cout << st.top() << "\n";
//     st.push(4);
//     st.push(6);
//     cout << st.top() << "\n";
//     st.pop();
//     st.pop();
//     cout << st.top() << "\n";
//     cout << st.empty() <<"\n";
//     return 0;
// }





/*
copy one stack to other
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// stack<int> copyStack(stack<int> &input){
//        stack<int> temp; 
//        while(not input.empty()){
//           // do the process till the time input stack  doesn't become empty
//           int curr = input.top(); // [], curr = 1;
//           input.pop();
//           temp.push(curr); //[3,2,1]
//        }

//        stack<int> result;
//        while(not temp.empty()){
//            int curr = temp.top();
//            temp.pop();
//            result.push(curr);
//        }
//        return result; 
// }

//  void f(stack<int> &st, stack<int> &result){
//        if(st.empty()) return; 
//        int curr = st.top();
//        st.pop();
//        f(st, result);
//        result.push(curr); 
//  }


// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     // stack<int> res = copyStack(st);
//     // 
//     stack<int> res; 
//     f(st, res); 
//     while(not res.empty()){
//          int curr = res.top();
//          res.pop();
//          cout << curr << "\n";
//     }
//     return 0; 
// }









/*
 insert at bottom stack 
*/  
// #include<bits/stdc++.h>
// using namespace std;

// void insertAtBottom(stack<int> &st, int x){
//      /*
//        #time: o(N).
//        #space: o(N).
//      */

//      stack<int> temp; 
//      while(not st.empty()){
//           int curr = st.top();
//           st.pop();
//           temp.push(curr);
//      }
//      st.push(x); // this is the point where x got inserted at the bottom 
//      while(not temp.empty()){
//          int curr = temp.top();
//          temp.pop();
//          st.push(curr); 
//      }
// }

// void f(stack<int> &st, int x){
//     /*
//       time: o(N)
//       space: o(N)
//     */
//    if(st.empty()){
//      st.push(x);
//      return;
//    }
//    int curr = st.top();
//    st.pop();
//    f(st, x);
//    st.push(curr);
// }





// int main(){
//     stack<int> st;
//     st.push(1);
//     st.push(2);
//     st.push(3);
//     st.push(4);
//     // insertAtBottom(st, 100);
//     f(st, 100); 
//     while(not st.empty()){
//           int curr = st.top();
//           st.pop();
//           cout << curr << "\n";
//     }
//     return 0;
// }





/*
 insert at index stack. 
*/
// #include<bits/stdc++.h>
// using namespace std;

// void insertAt(stack<int> &st, int x, int idx){
//        stack<int> temp; 
//        int n = st.size();
//        int count= 0;
//        while(count < n - idx){
//          count++;
//          int curr = st.top();
//          st.pop();
//          temp.push(curr);
//        }
//        st.push(x);
//        while(not temp.empty()){
//           int curr = temp.top();
//           temp.pop();
//           st.push(curr);

//        }
// }

// int main(){
//   stack<int> st;
//   st.push(1);
//   st.push(2);
//   st.push(3);
//   st.push(4); 
//   insertAt(st, 100, 1);
//   while(not st.empty()){
//       int curr = st.top();
//       st.pop();
//       cout<<curr << "\n";
//   }
//   return 0; 
// }







/*
 remove at bottom 
*/
// #include<bits/stdc++.h>
// using namespace std;

// void removeAtBottom(stack<int> &st){
//   stack<int> temp;
//   int n = st.size();
//   int count = 0;
//   while(st.size() != 1){
//      int curr = st.top();
//      st.pop();
//      temp.push(curr);
//   }
//   st.pop();
//   while(not temp.empty()){
//      int curr = temp.top();
//      temp.pop();
//      st.push(curr);
//   }
// }

// void f(stack<int> &st){
//    if(st.size() == 1){
//      st.pop();
//      return; 
//    }
//    int curr = st.top();
//    st.pop();
//    f(st);
//    st.push(curr);
// }

// int main(){
//   stack<int> st;
//   st.push(1);
//   st.push(2);
//   st.push(3);
//   st.push(4);
//   f(st);
//   while(not st.empty()){
//       int curr = st.top();
//       st.pop();
//       cout<<curr <<"\n";
//   }
//   return 0; 
// }





/*
reverse stack
*/ 
#include<bits/stdc++.h>
using namespace std;

void reverse(stack<int> &st){
    stack<int> t1, t2;
    while(not st.empty()){
       int curr = st.top();
       st.pop();
       t1.push(curr); 
    }
    while(not t1.empty()){
      int curr = t1.top();
      t1.pop();
      t2.push(curr); 
    }
    while (not t2.empty()){
        int curr = t2.top();
        t2.pop();
        st.push(curr); 
    }
}


void insertAtBottom(stack<int> &st, int x){
     /*
       #time: o(N).
       #space: o(N).
     */

     stack<int> temp; 
     while(not st.empty()){
          int curr = st.top();
          st.pop();
          temp.push(curr);
     }
     st.push(x); // this is the point where x got inserted at the bottom 
     while(not temp.empty()){
         int curr = temp.top();
         temp.pop();
         st.push(curr); 
     }
}


void f(stack<int> &st){
      if(st.empty()) 
      return; 
      int curr = st.top();
      st.pop();
      f(st);
      insertAtBottom(st, curr);
}

int main(){
       stack<int> st;
       st.push(1);
       st.push(2);
       st.push(3);
       st.push(4);
       f(st);
       while(not st.empty()){
         int curr = st.top();
         st.pop();
         cout << curr << "\n";
       }
       return 0; 
}