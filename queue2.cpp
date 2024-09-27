// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     deque<int> dq;
//     dq.push_back(10);
//     dq.push_back(20);
//     dq.push_back(30);
//     dq.push_front(0);
//     dq.push_front(33);
//     while(not dq.empty()){
//           cout << dq.front() << " ";
//           dq.pop_front();
//     }
//     return 0;
// }





/*
you are given  an array of integers nums, there is a sliding window of size k 
which is moving from the very left of the array to the very right. You can only 
see the k numbers in the window . each time the sliding window moves right 
by one position . return the max sliding window which basically contains the 
max element in each window. 
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// vector<int> maxSlidingWindow(vector<int> &arr, int k){
//       deque<int> dq;
//       vector<int> res;
//       for(int i = 0;  i<k; i++){
//           while (not dq.empty() and arr[dq.back()] < arr[i])
//           {
//             dq.pop_back();
//           }
//           dq.push_back(i);
//       }

//       res.push_back(arr[dq.front()]);
//       for(int i = k; i<arr.size(); i++){
//           int curr = arr[i];
//           if(dq.front() == (i-k)) dq.pop_front();
//           while(not dq.empty() and arr[dq.back()] < arr[i]){
//               dq.pop_back();
//           }
//           dq.push_back(i);
//           res.push_back(arr[dq.front()]);
//       }
//       return res;
// }


// int main(){

//     return 0; 
// }










/*
 we are given a stack data structure with push and pop operations , the task is to implement 
  a queue using instances of stack data structure and operations on them 
*/ 
// #include <stack>
// #include <iostream>
// using namespace std;

// class Queue {
//     stack<int> st;
// public: 
//     // Constructor
//     Queue() {}

//     // Function to push an element into the queue
//     void push(int x) {
//         st.push(x);
//     } 

//     // Function to pop an element from the queue
//     void pop() {
//           /*
//           queue.dequeue , time: O(n).
//            */ 

//         if (st.empty()) return;  // Check if the queue is empty

//         stack<int> tmp; 
//         while (st.size() > 1) {
//             tmp.push(st.top());
//             st.pop();
//         }
//         // Remove the front element
//         st.pop();  

//         // Move the elements back to the original stack
//         while (!tmp.empty()) {
//             st.push(tmp.top());
//             tmp.pop();
//         }
//     }

//     // Function to check if the queue is empty
//     bool empty() {
//         return st.empty();
//     }

//     // Function to get the front element of the queue
//     int front() {
//       /*
//          Time: O(n).
//       */ 
//         if (st.empty()) {
//             cout << "Queue is empty" << endl;
//             return -1;  // Return a sentinel value when the queue is empty
//         }

//         stack<int> tmp;
//         while (st.size() > 1) {
//             tmp.push(st.top());
//             st.pop();
//         }
//         // The last element is the front of the queue
//         int result = st.top();

//         // Move the elements back to the original stack
//         while (!tmp.empty()) {
//             st.push(tmp.top());
//             tmp.pop();
//         }
//         return result;
//     }
// }; 

// int main() {
//     Queue qu;
//     qu.push(10); // enqueue
//     qu.push(20);
//     qu.push(30);
//     qu.push(40);
//     qu.pop(); // dequeue 
//     qu.pop(); 

//     while (!qu.empty()) {
//         cout << qu.front() << " ";
//         qu.pop();
//     }
//     return 0; 
// }









/*
  we are given a stack data structure with push and pop operations 
    the task is to implement  a queue using instances of stack data structures and 
    operations on them . 
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// class Queue{
//      stack<int> st;
//    public: 
//       Queue() {

//       }

//       void push(int x){
//           // queue.enqueue
//           /*
//            time:o(n); 
//           */ 
//           stack<int> tmp; 
//           while(not this->st.empty()){
//              tmp.push(this->st.top());
//               this -> st.pop();
//           }
//           this->st.push(x);
//           while(not tmp.empty()){
//               this->st.push(tmp.top());
//               tmp.pop();
//           }
//       }

//       void pop(){
//           // queue.dequeue
//           // time: O(1) 
//           if(this->st.empty()) return; 
//           this->st.pop(); 
//       }

//       bool empty(){
//            return this->st.empty(); 
//       }

//       int front(){
//          /*
//           Time: o(1)
//          */
//            if(this->st.empty()) return INT_MIN; 
//            return  this->st.top(); 
//       }
// }; 

// int main(){
//       Queue qu;
//       qu.push(10); // enqueue 
//       qu.push(20); 
//       qu.push(30); 
//       qu.push(40); 
//       qu.pop(); // dequeue 
//       qu.pop(); 
//       while(not qu.empty()){
//           cout << qu.front() <<" "; 
//           qu.pop(); 
//       }
//       return 0; 
// }









/*
 circular queue.cpp 
*/ 
#include <bits/stdc++.h>
using namespace std;

class Queue {
    int front;
    int back;
    vector<int> v;
    int cs; // current size
    int ts; // total size

public:
    // Constructor to initialize the queue
    Queue(int n) {
        v.resize(n);
        this->ts = n;
        this->back = n - 1;
        this->front = 0;
        this->cs = 0;
    }

    // Function to add an element to the queue
    void enqueue(int data) {
        if (isFull()) {
            cout << "Queue is full, cannot enqueue " << data << endl;
            return;
        }
        this->back = (this->back + 1) % this->ts;
        this->v[this->back] = data;
        this->cs++; // Increment current size
    }

    // Function to remove an element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty, cannot dequeue" << endl;
            return;
        }
        this->front = (this->front + 1) % this->ts;
        this->cs--; // Decrement current size
    }

    // Function to get the front element of the queue
    int getFront() {
        if (isEmpty()) {
            cout << "Queue is empty, no front element" << endl;
            return -1;
        }
        return this->v[this->front];
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return this->cs == 0;
    }

    // Function to check if the queue is full
    bool isFull() {
        return this->cs == this->ts;
    }
};

int main() {
    Queue qu(3);
    qu.enqueue(10);
    qu.enqueue(20);
    qu.enqueue(30);
    qu.dequeue();
    qu.enqueue(40);
    qu.dequeue();
    qu.dequeue();
    qu.dequeue(); // Dequeuing an empty queue should handle gracefully
    qu.enqueue(400);
    qu.enqueue(500);

    while (!qu.isEmpty()) {
        cout << qu.getFront() << " ";
        qu.dequeue();
    }
    return 0;
}
