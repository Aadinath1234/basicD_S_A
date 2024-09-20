// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//   public: 
//    int val; 
//    Node* next; 


//    Node(int data){
//       val = data;
//       next = NULL; 
//    }
// };

// class CircularLinkedList{
//     public: 
//       Node* head; 

//       CircularLinkedList(){
//           head = NULL; 
//       }

//      void display(){
//          Node* temp = head; 
//          do{
//              cout << temp -> val << "->";
//              temp = temp->next;
//          }while(temp!=head);
//          cout << endl; 
//      }

//      void printCircular(){
//         Node* temp = head; 
//         for(int i = 0; i<15; i++){
//               cout << temp -> val << "->";
//               temp = temp->next;
//         } cout << endl; 
//      }


//       void insertAtStart(int val){
//           Node *new_node = new Node(val);
//           if(head==NULL){
//                  head = new_node; 
//                  new_node->next = head;  // circular linked list 
//                  return; 
//           }

//           Node* tail = head;
//           while(tail->next != head){
//              tail = tail->next; 
//           }
//           // now tail is pointint to the last node 
//           tail->next = new_node; 
//           new_node->next = head; 
//           head = new_node; 
//       }

//        void insertAtEnd(int val) {
//         Node* new_node = new Node(val);

//         if (head == NULL) {
//             head = new_node;
//             new_node->next = head; // new_node should point to itself
//             return;
//         }

//         Node* tail = head;
//         while (tail->next != head) {
//             tail = tail->next;
//         }
//         // Here, tail will be pointing to the last node
//         tail->next = new_node;
//         new_node->next = head;
//     }


//     void deleteAtStart(){
//           if(head==NULL){
//              return; 
//           }
//           Node* temp = head; 
//           Node* tail = head; 
//           while(tail->next!=head){
//                tail=tail->next; 
//           }

//           head = head ->next; 
//           tail->next = head; 
//           free(temp); 
//     }

//      void deleteAtEnd(){
//            if(head==NULL){
//              return; 
//            }

//            Node* tail = head; 
//            while(tail->next->next!=head){
//              tail = tail->next; 
//            }
//            // here tail is pointint to the second last node 
//            Node* temp = tail -> next; 
//            tail->next = head; 
//            free(temp); 




//      }




// };


// int main(){
   
//     CircularLinkedList cll; 
//     cll.insertAtStart(3);
//     cll.insertAtStart(2);
//     cll.insertAtStart(1);
//     cll.display();
//     // cll.printCircular();
//     cll.insertAtEnd(8); 
//     cll.display();
//     cll.deleteAtStart(); 
//     cll.display();
//     // cll.printCircular();
//      cll.deleteAtEnd(); 
//      cll.display();

//     return 0; 
// }











/*
template classes: 
*/
// #include<bits/stdc++.h>
// using namespace std;


// template <typename T>
// class Node{
//  // template class 
//  public: 
//    T val; 
//    Node* next; 

//    Node(T data){
//        val = data; 
//        next = NULL; 
//    }
// }; 

// int main(){
//       Node<int> * node1 = new Node <int> (3);
//       cout << node1->val<<endl; 

//       Node<char> * node2 =  new Node<char> ('a');
//       cout << node2 -> val << endl; 

//     return 0; 
// }







/*
  list: 
*/
#include<bits/stdc++.h>
using namespace std;



int main(){
 list<int> l1 = {1,2,3,4}; 
//  auto itr = l1.begin();
//  l1.end(); 
//  cout << *itr << endl;

 // auto rev_itr= l1.rbegin(); 
 // cout << *rev_itr << endl; 
 //l1.trend() 

//  advance(itr, 2);
//  cout << *itr << endl; 


// using range-based loop 
// for(auto num: l1){
    // cout << num << endl; 
  // }


// using iterators 
for(auto itr = l1.begin(); itr!=l1.end(); itr++){
   cout << *itr << " "; 
} cout << endl; 



// reverse traversal 
// for(auto itr = l1.rbegin(); itr!=l1.rend(); itr++){
  //  cout << *itr << " "; 
// }


// inserting elements 
auto itr = l1.begin(); 
advance(itr, 2); 
// l1.insert(itr, 5);
auto l = l1.begin(); 
auto r = l1.begin(); 
advance(r, 2); // now r is pointing to 3 
l1.insert(itr, l, r); 

for(auto itr = l1.begin(); itr!=l1.end(); itr++){
   cout << *itr << " "; 
}  cout << endl; 


// 1 2 1 2 3 4 
auto s_itr = l1.begin();
advance(s_itr, 2); 

auto e_itr = l1.begin(); 
advance(e_itr, 4); 

l1.erase(s_itr, e_itr); 
for(auto itr = l1.begin(); itr!=l1.end(); itr++){
   cout << *itr <<" "; 
} cout << endl; 

 return 0; 
}