// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//  public: 
//    int data; 
//    Node* next;
//    Node(int data){
//        this->data = data;
//        this->next = NULL;
//    }
// };

// class Queue{
//       Node* head;
//       Node* tail;
//       int size; 
//   public: 
//     Queue(){
//           this->head = NULL;
//           this->tail = NULL;
//           this->size = 0; 
//     }

//     void enqueue(int data){
//            Node* newNode = new Node(data);
//            if(this->head == NULL){
//               // LL is empty 
//               this->head = this->tail = newNode; 
//            } else{
//              this->tail->next = newNode;
//              this->tail = newNode; 
//            }
//            this->size++;
//     }

//     void dequeue(){
//          if(this->head == NULL){
//               // LL is empty 
//               return; 
//          } else{
//              Node* oldHead = this->head;
//              Node* newHead = this->head->next;
//              this->head = newHead;
//              if(this->head == NULL) this->tail = NULL;
//              oldHead->next = NULL;
//              delete oldHead;
//             this -> size--; 
//          }
//     }
//     int getSize(){
//          return this->size; 
//     }

//     bool isEmpty(){
//          return this->head == NULL; 
//     }

//     int front(){
//           if(this->head == NULL) return -1; 
//           return this->head->data;
//     }
// }; 




// int main(){
//     Queue qu;
//     qu.enqueue(10);
//     qu.enqueue(20);
//     qu.enqueue(30);
//     qu.dequeue();
//     qu.enqueue(40);

//     while (not qu.isEmpty())
//     {
//         cout << qu.front() << " ";
//         qu.dequeue();
//     }
//     return 0;
// }









/*
queue using array:     
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// class Queue{
//       int front; 
//       int back; 
//       vector<int> v;
//   public: 
//       Queue(){
//           this->back = -1;
//           this->front = -1;
//       }

//       void enqueue(int data){
//           this->v.push_back(data);
//           this->back++;
//           if(this->back == 0) this->front = 0; 
//       }

//       void dequeue(){
//           if(this->front == this -> back){
//               this->front = -1;
//               this -> back = -1; 
//               this -> v.clear(); 
//           }
//           else this->front++;
           
//       }

//       int getFront(){
//           if(this->front == -1) return -1; 
//           return this->v[this->front];
//       }

//       bool isEmpty(){
//          return this->front == -1;
//       }
// };


// int main(){
//       Queue qu;
//       qu.enqueue(10);
//       qu.enqueue(20);
//       qu.enqueue(30);
//       qu.dequeue();
//       qu.enqueue(40);
//       qu.dequeue();
//       qu.dequeue();
//       qu.dequeue();
//       qu.enqueue(400);
//       qu.enqueue(500); 

//       while(not qu.isEmpty()){
//           cout << qu.getFront() << " ";
//           qu.dequeue();
//       }

//      return 0; 
// }










/*
 queuestl.cpp: 
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     queue<int> qu;
//     qu.push(10);  // enque 
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     qu.pop(); // deque 
//     while(not qu.empty()){
//           cout <<qu.front() << " ";
//           qu.pop(); 
//     }
//     return 0; 
// }  






/*
reverse the element of a queue. 
*/ 
#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> input;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);

    stack<int> st;
    while(not input.empty()){
          st.push(input.front());
          input.pop();
    }
    while(not st.empty()){
         input.push(st.top());
         st.pop();
    }
    while(not input.empty()){
         cout << input.front() << " ";
         input.pop();
    }
 return 0; 
}