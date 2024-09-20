// #include<bits/stdc++.h>
// using namespace std; 

// class Node{
//       public: 
//          int val; 
//          Node* prev; 
//          Node* next; 

//          Node(int data){
//               val = data; 
//               prev = NULL; 
//               next = NULL; 
//          }
// }; 


// class DoublyLinkedList{
//        public: 
//        Node* head; 
//        Node* tail; 

//        DoublyLinkedList(){
//           head = NULL; 
//           tail = NULL; 
//        }
// }; 

// int main(){
//      Node* new_node = new Node(3); 
//       DoublyLinkedList dll; 
//       dll.head = new_node; 
//       dll.tail = new_node; 
//       cout << dll.head->val<<endl; 
//     return 0; 
// }








/*
 insertion at kth position in a doubly linked list 
*/ 
// #include<bits/stdc++.h>
// using namespace std; 

// class Node{
//       public: 
//          int val; 
//          Node* prev; 
//          Node* next; 

//          Node(int data){
//               val = data; 
//               prev = NULL; 
//               next = NULL; 
//          }
// }; 


// class DoublyLinkedList{
//        public: 
//        Node* head; 
//        Node* tail; 

//        DoublyLinkedList(){
//           head = NULL; 
//           tail = NULL; 
//        }

//        void display(){
//            Node* temp = head; 
//            while(temp!=NULL){
//               cout << temp->val << " "; 
//               temp = temp->next; 
//            }cout<<endl; 
//        }


//        void insertAtStart(int val){
//             Node* new_node = new Node(val); 
//             if(head == NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }

//             new_node->next =head; 
//             head->prev = new_node; 
//             head = new_node; 
//             return; 
//        }


//        void insertAtEnd(int val){
//             Node* new_node = new Node(val); 
//             if(tail==NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }
//             tail -> next = new_node; 
//             new_node->prev = tail; 
//             tail = new_node; 
//             return; 
//        }
    
//      void insertAtPosition(int val, int k){
//          // assuming k is less or equal to length of doubly linked list 
//          Node* temp = head; 
//          int count = 1; 
//          while(count <(k-1)){
//                 temp = temp->next; 
//                 count++; 
//          }

//          // temp will be pointing to the node at (k-1)th position 
//          Node* new_node = new Node(val); 
//          new_node->next = temp->next; 
//          temp->next = new_node; 


//          new_node->prev = temp; 
//          new_node->next->prev = new_node; 
//          return; 
//      }
// }; 


// int main(){
//      DoublyLinkedList dll; 
//     //  dll.insertAtStart(1);
//     //  dll.display(); 
//     //  dll.insertAtStart(2);
//     //  dll.display(); 
//     //  dll.insertAtStart(3); 
//     //  dll.display(); 

//     dll.insertAtEnd(1); 
//     dll.display(); 
//     dll.insertAtEnd(2); 
//     dll.display(); 
//     dll.insertAtEnd(3); 
//     dll.display();
//     dll.insertAtPosition(4,3); 
//     dll.display();  
//     return 0; 
// }












/*
 deletion at kth position in a doubly linked list 
*/

// #include<bits/stdc++.h>
// using namespace std; 

// class Node{
//       public: 
//          int val; 
//          Node* prev; 
//          Node* next; 

//          Node(int data){
//               val = data; 
//               prev = NULL; 
//               next = NULL; 
//          }
// }; 


// class DoublyLinkedList{
//        public: 
//        Node* head; 
//        Node* tail; 

//        DoublyLinkedList(){
//           head = NULL; 
//           tail = NULL; 
//        }

//        void insertAtStart(int val){
//             Node* new_node = new Node(val); 
//             if(head == NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }

//             new_node->next =head; 
//             head->prev = new_node; 
//             head = new_node; 
//             return; 
//        }


//        void insertAtEnd(int val){
//             Node* new_node = new Node(val); 
//             if(tail==NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }
//             tail -> next = new_node; 
//             new_node->prev = tail; 
//             tail = new_node; 
//             return; 
//        }

//          void display(){
//            Node* temp = head; 
//            while(temp!=NULL){
//               cout << temp->val << " "; 
//               temp = temp->next; 
//            }cout<<endl; 
//        }


    
//      void insertAtPosition(int val, int k){
//          // assuming k is less or equal to length of doubly linked list 
//          Node* temp = head; 
//          int count = 1; 
//          while(count <(k-1)){
//                 temp = temp->next; 
//                 count++; 
//          }

//          // temp will be pointing to the node at (k-1)th position 
//          Node* new_node = new Node(val); 
//          new_node->next = temp->next; 
//          temp->next = new_node; 


//          new_node->prev = temp; 
//          new_node->next->prev = new_node; 
//          return; 
//      }


//      void deleteAtStart(){
//        if(head==NULL){
//          return; 
//        }

//        Node* temp = head; 
//        head = head->next;
//        if(head==NULL){
//           // if doubly linked list had only 1 node 
//            tail = NULL; 
//        }else{
//           head -> prev = NULL; 
//        }
//        free(temp);
//        return; 
//      }

//    void deleteAtEnd(){
//           if(head==NULL){
//              return; 
//           }

//           Node* temp = tail; 
//           tail = tail->prev; 
//           if(tail==NULL){
//               head = NULL; 
//           } else{
//               tail->next=NULL; 
//           }
//           free(temp); 
//           return; 
//    }


//    void deleteAtPosition(int k){
//       //assuming k is less than or equal to length of dll. 
//        Node* temp = head; 
//        int counter = 1; 
//        while(counter < k){
//           temp = temp->next; 
//           counter++; 
//        }

//        // now temp is pointing to node at kth position 
//        temp->prev->next = temp->next; 
//        temp->next->prev = temp->prev; 
//        free(temp); 
//        return; 

//    }
// }; 







// int main(){
     
//       DoublyLinkedList dll; 
//       dll.insertAtEnd(1); 
//       dll.display(); 
//       dll.insertAtEnd(2);
//       dll.display();
//       dll.insertAtEnd(3);
//       dll.display();

//       dll.insertAtPosition(4,3);
//        dll.display(); 
//     //      dll.deleteAtStart(); 
//     //   dll.display(); 
//     //   dll.deleteAtEnd(); 
//     //   dll.display(); 
//     dll.deleteAtPosition(3);
//     dll.display(); 
//       return 0;

// }








/*
 given the head of a doubly linked list, reverse it. 
*/

// #include<bits/stdc++.h>
// using namespace std; 

// class Node{
//       public: 
//          int val; 
//          Node* prev; 
//          Node* next; 

//          Node(int data){
//               val = data; 
//               prev = NULL; 
//               next = NULL; 
//          }
// }; 


// class DoublyLinkedList{
//        public: 
//        Node* head; 
//        Node* tail; 

//        DoublyLinkedList(){
//           head = NULL; 
//           tail = NULL; 
//        }

//        void insertAtStart(int val){
//             Node* new_node = new Node(val); 
//             if(head == NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }

//             new_node->next =head; 
//             head->prev = new_node; 
//             head = new_node; 
//             return; 
//        }


//        void insertAtEnd(int val){
//             Node* new_node = new Node(val); 
//             if(tail==NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }
//             tail -> next = new_node; 
//             new_node->prev = tail; 
//             tail = new_node; 
//             return; 
//        }

//          void display(){
//            Node* temp = head; 
//            while(temp!=NULL){
//               cout << temp->val << " "; 
//               temp = temp->next; 
//            }cout<<endl; 
//        }


    
//      void insertAtPosition(int val, int k){
//          // assuming k is less or equal to length of doubly linked list 
//          Node* temp = head; 
//          int count = 1; 
//          while(count <(k-1)){
//                 temp = temp->next; 
//                 count++; 
//          }

//          // temp will be pointing to the node at (k-1)th position 
//          Node* new_node = new Node(val); 
//          new_node->next = temp->next; 
//          temp->next = new_node; 


//          new_node->prev = temp; 
//          new_node->next->prev = new_node; 
//          return; 
//      }


//      void deleteAtStart(){
//        if(head==NULL){
//          return; 
//        }

//        Node* temp = head; 
//        head = head->next;
//        if(head==NULL){
//           // if doubly linked list had only 1 node 
//            tail = NULL; 
//        }else{
//           head -> prev = NULL; 
//        }
//        free(temp);
//        return; 
//      }

//    void deleteAtEnd(){
//           if(head==NULL){
//              return; 
//           }

//           Node* temp = tail; 
//           tail = tail->prev; 
//           if(tail==NULL){
//               head = NULL; 
//           } else{
//               tail->next=NULL; 
//           }
//           free(temp); 
//           return; 
//    }


//    void deleteAtPosition(int k){
//       //assuming k is less than or equal to length of dll. 
//        Node* temp = head; 
//        int counter = 1; 
//        while(counter < k){
//           temp = temp->next; 
//           counter++; 
//        }

//        // now temp is pointing to node at kth position 
//        temp->prev->next = temp->next; 
//        temp->next->prev = temp->prev; 
//        free(temp); 
//        return; 

//    }
// }; 


// void reverseDll(Node* &head, Node* &tail){
//     Node* currPtr = head; 
//     while(currPtr){
//         Node* nextPtr = currPtr->next; 
//         currPtr->next = currPtr->prev; 
//         currPtr->prev = nextPtr;
//         currPtr = nextPtr;
//     }

//     // swapping head and tail pointers 
//     Node* newHead = tail; 
//     tail = head; 
//     head = newHead; 
// }


// int main(){
     
//       DoublyLinkedList dll; 
//       dll.insertAtEnd(1); 
     
//       dll.insertAtEnd(2);
      
//       dll.insertAtEnd(3);
//       dll.insertAtEnd(4); 
//        dll.display(); 
//     reverseDll(dll.head, dll.tail); 
//     dll.display(); 
//       return 0;
       
// }





/*
given the head of a doubly linked list, find if it's a palindrome or not. 
*/

// #include<bits/stdc++.h>
// using namespace std; 

// class Node{
//       public: 
//          int val; 
//          Node* prev; 
//          Node* next; 

//          Node(int data){
//               val = data; 
//               prev = NULL; 
//               next = NULL; 
//          }
// }; 


// class DoublyLinkedList{
//        public: 
//        Node* head; 
//        Node* tail; 

//        DoublyLinkedList(){
//           head = NULL; 
//           tail = NULL; 
//        }

//        void insertAtStart(int val){
//             Node* new_node = new Node(val); 
//             if(head == NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }

//             new_node->next =head; 
//             head->prev = new_node; 
//             head = new_node; 
//             return; 
//        }


//        void insertAtEnd(int val){
//             Node* new_node = new Node(val); 
//             if(tail==NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }
//             tail -> next = new_node; 
//             new_node->prev = tail; 
//             tail = new_node; 
//             return; 
//        }

//          void display(){
//            Node* temp = head; 
//            while(temp!=NULL){
//               cout << temp->val << " "; 
//               temp = temp->next; 
//            }cout<<endl; 
//        }


    
//      void insertAtPosition(int val, int k){
//          // assuming k is less or equal to length of doubly linked list 
//          Node* temp = head; 
//          int count = 1; 
//          while(count <(k-1)){
//                 temp = temp->next; 
//                 count++; 
//          }

//          // temp will be pointing to the node at (k-1)th position 
//          Node* new_node = new Node(val); 
//          new_node->next = temp->next; 
//          temp->next = new_node; 


//          new_node->prev = temp; 
//          new_node->next->prev = new_node; 
//          return; 
//      }


//      void deleteAtStart(){
//        if(head==NULL){
//          return; 
//        }

//        Node* temp = head; 
//        head = head->next;
//        if(head==NULL){
//           // if doubly linked list had only 1 node 
//            tail = NULL; 
//        }else{
//           head -> prev = NULL; 
//        }
//        free(temp);
//        return; 
//      }

//    void deleteAtEnd(){
//           if(head==NULL){
//              return; 
//           }

//           Node* temp = tail; 
//           tail = tail->prev; 
//           if(tail==NULL){
//               head = NULL; 
//           } else{
//               tail->next=NULL; 
//           }
//           free(temp); 
//           return; 
//    }


//    void deleteAtPosition(int k){
//       //assuming k is less than or equal to length of dll. 
//        Node* temp = head; 
//        int counter = 1; 
//        while(counter < k){
//           temp = temp->next; 
//           counter++; 
//        }

//        // now temp is pointing to node at kth position 
//        temp->prev->next = temp->next; 
//        temp->next->prev = temp->prev; 
//        free(temp); 
//        return; 

//    }
// }; 


// void reverseDll(Node* &head, Node* &tail){
//     Node* currPtr = head; 
//     while(currPtr){
//         Node* nextPtr = currPtr->next; 
//         currPtr->next = currPtr->prev; 
//         currPtr->prev = nextPtr;
//         currPtr = nextPtr;
//     }

//     // swapping head and tail pointers 
//     Node* newHead = tail; 
//     tail = head; 
//     head = newHead; 
// }

//  bool isPalindromeDLL(Node* head, Node* tail){
//      while(head!=tail && tail!=head->prev){
//         if(head->val!=tail->val){
//             return false; 
//         } 
     
//      head = head->next;
//      tail = tail->prev;
//  }
//  return true; 
//  }
// }

// int main(){
     
//       DoublyLinkedList dll; 
//       dll.insertAtEnd(1); 
//       dll.insertAtEnd(2);
//       dll.insertAtEnd(3);
//       dll.insertAtEnd(4);
//       dll.insertAtEnd(2);
//       dll.insertAtEnd(1); 
//       dll.display(); 
//       cout << isPalindromeDLL(dll.head, dll.tail) << endl; 
//       return 0;
// }






/*
 given the head of a doubly linked list , delete the nodes whose 
  neighbors have the same value. Traverse the list from right to left. 
*/

// #include<bits/stdc++.h>
// using namespace std; 

// class Node{
//       public: 
//          int val; 
//          Node* prev; 
//          Node* next; 

//          Node(int data){
//               val = data; 
//               prev = NULL; 
//               next = NULL; 
//          }
// }; 


// class DoublyLinkedList{
//        public: 
//        Node* head; 
//        Node* tail; 

//        DoublyLinkedList(){
//           head = NULL; 
//           tail = NULL; 
//        }

//        void insertAtStart(int val){
//             Node* new_node = new Node(val); 
//             if(head == NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }

//             new_node->next =head; 
//             head->prev = new_node; 
//             head = new_node; 
//             return; 
//        }


//        void insertAtEnd(int val){
//             Node* new_node = new Node(val); 
//             if(tail==NULL){
//                   head = new_node; 
//                   tail = new_node; 
//                   return; 
//             }
//             tail -> next = new_node; 
//             new_node->prev = tail; 
//             tail = new_node; 
//             return; 
//        }

//          void display(){
//            Node* temp = head; 
//            while(temp!=NULL){
//               cout << temp->val << " "; 
//               temp = temp->next; 
//            }cout<<endl; 
//        }


    
//      void insertAtPosition(int val, int k){
//          // assuming k is less or equal to length of doubly linked list 
//          Node* temp = head; 
//          int count = 1; 
//          while(count <(k-1)){
//                 temp = temp->next; 
//                 count++; 
//          }

//          // temp will be pointing to the node at (k-1)th position 
//          Node* new_node = new Node(val); 
//          new_node->next = temp->next; 
//          temp->next = new_node; 


//          new_node->prev = temp; 
//          new_node->next->prev = new_node; 
//          return; 
//      }


//      void deleteAtStart(){
//        if(head==NULL){
//          return; 
//        }

//        Node* temp = head; 
//        head = head->next;
//        if(head==NULL){
//           // if doubly linked list had only 1 node 
//            tail = NULL; 
//        }else{
//           head -> prev = NULL; 
//        }
//        free(temp);
//        return; 
//      }

//    void deleteAtEnd(){
//           if(head==NULL){
//              return; 
//           }

//           Node* temp = tail; 
//           tail = tail->prev; 
//           if(tail==NULL){
//               head = NULL; 
//           } else{
//               tail->next=NULL; 
//           }
//           free(temp); 
//           return; 
//    }


//    void deleteAtPosition(int k){
//       //assuming k is less than or equal to length of dll. 
//        Node* temp = head; 
//        int counter = 1; 
//        while(counter < k){
//           temp = temp->next; 
//           counter++; 
//        }

//        // now temp is pointing to node at kth position 
//        temp->prev->next = temp->next; 
//        temp->next->prev = temp->prev; 
//        free(temp); 
//        return; 

//    }
// }; 


// void reverseDll(Node* &head, Node* &tail){
//     Node* currPtr = head; 
//     while(currPtr){
//         Node* nextPtr = currPtr->next; 
//         currPtr->next = currPtr->prev; 
//         currPtr->prev = nextPtr;
//         currPtr = nextPtr;
//     }

//     // swapping head and tail pointers 
//     Node* newHead = tail; 
//     tail = head; 
//     head = newHead; 
// }

//  bool isPalindromeDLL(Node* head, Node* tail){
//      while(head!=tail && tail!=head->prev){
//         if(head->val!=tail->val){
//             return false; 
//         } 
     
//      head = head->next;
//      tail = tail->prev;
//  }
//  return true; 
//  }


// void deleteSameNeighbourNode(Node* &head, Node* &tail){
//        Node* currNode = tail->prev; 
//        while(currNode!=head){
//           Node* prevNode = currNode->prev; 
//           Node* nextNode = currNode->next;
//           if(prevNode->val == nextNode->val){
//                // i need to delete the curr node 
//                prevNode->next =  nextNode; 
//                nextNode->prev = prevNode; 
//                free(currNode);
//           }
//           currNode = prevNode; 
//        }
// }

// int main(){
     
//       DoublyLinkedList dll; 
//       dll.insertAtEnd(2); 
//       dll.insertAtEnd(1);
//       dll.insertAtEnd(1);
//       dll.insertAtEnd(2);
//       dll.insertAtEnd(1); 
//       dll.display(); 
//       deleteSameNeighbourNode(dll.head, dll.tail); 
//       dll.display(); 
//       return 0;
// }










/*
 the critical point in a linked list is defined as either a local maxima or a local minima. 
 given a linked list tail, return an array of length 2 containing [minDistance, maxDistance] where 
  minDistance is the minimum distance between any two distict critical points. if there are fewer than two 
  critical points, return [-1, -1]. 
  Note that a node can only be a local maxima/minima if there exists both a previous node and a next node. 
*/

// #include<bits/stdc++.h>
// using namespace std;

// class Node {
// public:
//     int val;
//     Node* prev;
//     Node* next;

//     Node(int data) {
//         val = data;
//         prev = NULL;
//         next = NULL;
//     }
// };

// class DoublyLinkedList {
// public:
//     Node* head;
//     Node* tail;

//     DoublyLinkedList() {
//         head = NULL;
//         tail = NULL;
//     }

//     void insertAtStart(int val) {
//         Node* new_node = new Node(val);
//         if (head == NULL) {
//             head = new_node;
//             tail = new_node;
//             return;
//         }
//         new_node->next = head;
//         head->prev = new_node;
//         head = new_node;
//         return;
//     }

//     void insertAtEnd(int val) {
//         Node* new_node = new Node(val);
//         if (tail == NULL) {
//             head = new_node;
//             tail = new_node;
//             return;
//         }
//         tail->next = new_node;
//         new_node->prev = tail;
//         tail = new_node;
//         return;
//     }

//     void display() {
//         Node* temp = head;
//         while (temp != NULL) {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     bool isCriticalPoint(Node* currNode) {
//         // Check if prev and next nodes exist
//         if (currNode->prev != NULL && currNode->next != NULL) {
//             if ((currNode->prev->val < currNode->val && currNode->next->val < currNode->val) ||
//                 (currNode->prev->val > currNode->val && currNode->next->val > currNode->val)) {
//                 return true;
//             }
//         }
//         return false;
//     }

//     vector<int> distanceBetweenCriticalPoints(Node* head, Node* tail) {
//         vector<int> ans(2, -1); // Initialize with -1 for no critical points case
//         int firstCP = -1, lastCP = -1;
//         int currPos = 1; // Starting position from the second node
//         Node* currNode = head->next; // Start checking from the second node

//         // Traverse the list
//         while (currNode != NULL && currNode->next != NULL) {
//             if (isCriticalPoint(currNode)) {
//                 if (firstCP == -1) {
//                     firstCP = lastCP = currPos;
//                 } else {
//                     ans[0] = (ans[0] == -1) ? (currPos - lastCP) : min(ans[0], currPos - lastCP); // min distance
//                     ans[1] = currPos - firstCP; // max distance
//                     lastCP = currPos;
//                 }
//             }
//             currPos++;
//             currNode = currNode->next;
//         }

//         // If no critical points are found, ans will remain as {-1, -1}
//         if (ans[0] == -1) {
//             ans[1] = -1;
//         }

//         return ans;
//     }
// };

// int main() {

//     DoublyLinkedList dll;
//     dll.insertAtEnd(1);
//     dll.insertAtEnd(5);
//     dll.insertAtEnd(2);
//     dll.insertAtEnd(6);
//     dll.insertAtEnd(3);
//     dll.display();

//     vector<int> ans = dll.distanceBetweenCriticalPoints(dll.head, dll.tail);
//     cout << ans[0] << " " << ans[1] << endl;
//     return 0;
// }








/*
 given the head of a doubly linked list. The values of the linked list are sorted in non-decreasing order. 
 Find if there exists a pair of distinct nodes such that the sum of their values is x. Return the pair in 
   the form of a vector [l,r], where l and r are the values stored in the 2 nodes pointed by the  pointers. 
   if there are multiple such points, return any of them. If there is no such pair return [-1, -1]. 
*/
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* prev;
    Node* next;

    Node(int data) {
        val = data;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList {
public:
    Node* head;
    Node* tail;

    DoublyLinkedList() {
        head = NULL;
        tail = NULL;
    }

    void insertAtStart(int val) {
        Node* new_node = new Node(val);
        if (head == NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        new_node->next = head;
        head->prev = new_node;
        head = new_node;
        return;
    }

    void insertAtEnd(int val) {
        Node* new_node = new Node(val);
        if (tail == NULL) {
            head = new_node;
            tail = new_node;
            return;
        }
        tail->next = new_node;
        new_node->prev = tail;
        tail = new_node;
        return;
    }

    void display() {
        Node* temp = head;
        while (temp != NULL) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    vector<int> pairSumDLL(Node* head, Node* tail, int x) {
        vector<int> ans(2, -1);
        while (head != tail) {
            int sum = head->val + tail->val;
            if (sum == x) {
                ans[0] = head->val;
                ans[1] = tail->val;
                return ans;
            }
            if (sum > x) {
                // Move tail back to get smaller values
                tail = tail->prev;
            } else {
                // Move head forward to get larger values
                head = head->next;
            }
        }
        return ans;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertAtEnd(2);
    dll.insertAtEnd(5);
    dll.insertAtEnd(6);
    dll.insertAtEnd(8);
    dll.insertAtEnd(10);
    dll.display();

    // Corrected function call with head and tail passed as arguments
    vector<int> ans = dll.pairSumDLL(dll.head, dll.tail, 11);
    cout << ans[0] << " " << ans[1] << endl;
    return 0;
}
