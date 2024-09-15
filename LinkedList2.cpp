/*
  given 2 linked lists, tell if they are equal or not. Two linked Lists are equal if they 
  have the same data and the arrangement of data is also the same. 
*/ 


// #include<bits/stdc++.h>
// using namespace std;



// class Node{
//     public: 
//       int val; 
//       Node* next;

//       Node(int data){
//               val = data;
//               next = NULL; 
//       }
// };

// class LinkedList{
//        public:
//           Node* head;
//           LinkedList(){
//               head=NULL; 
//           } 

//         void insertAtTail(int value){
//               Node* new_node = new Node(value);
//               if(head==NULL){
//                     // linked list is empty 
//                     head = new_node;
//                     return; 
//               }
//               Node* temp = head;
//               while(temp->next!=NULL){
//                     temp = temp->next;
//               }
//               temp->next = new_node;
//         }

//         void display(){
//               Node* temp = head;
//               while(temp!=NULL){
//                     cout << temp->val<<"->";
//                     temp = temp -> next;
//               } cout << "NULL" << endl; 
//         }
// };




// bool checkEqualLinkedList(Node* head1, Node* head2){
      
//        Node* ptr1 = head1;
//        Node* ptr2 = head2;

//        while (ptr1!=NULL && ptr2!=NULL)
//        {
//           if(ptr1->val!=ptr2->val){
//               return false; 
//           }
//           ptr1=ptr1->next;
//           ptr2=ptr2->next;
//        }
//        // at this point either ptr1 is null, or ptr2 is null, or both are null 
//        return (ptr1==NULL && ptr2==NULL);
// }




// int main(){
    
//      LinkedList ll1;
//      ll1.insertAtTail(1);
//      ll1.insertAtTail(2);
//      ll1.insertAtTail(3);

//      LinkedList ll2; 
//      ll2.insertAtTail(1);
//      ll2.insertAtTail(2);
//      ll2.insertAtTail(3); 

//      ll1.display();
//      ll2.display();
//      cout << checkEqualLinkedList(ll1.head, ll2.head) << endl;

//      return 0; 
// }










/*
given the heads of two singly linked-lists headA and headB,
 return the node at which the two lists  intersect. If the two linked lists have no intersection at all, 
  return null. 
*/ 

// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };

// bool checkEqualLinkedList(Node* head1, Node* head2) {
//     Node* ptr1 = head1;
//     Node* ptr2 = head2;

//     while (ptr1 != NULL && ptr2 != NULL) {
//         if (ptr1->val != ptr2->val) {
//             return false;
//         }
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }
//     // At this point either ptr1 is null, or ptr2 is null, or both are null
//     return (ptr1 == NULL && ptr2 == NULL);
// }

// int getLength(Node* head) {
//     Node* temp = head;
//     int length = 0;

//     while (temp != NULL) {
//         length++;
//         temp = temp->next;
//     }

//     return length;
// }

// Node* moveHeadByK(Node* head, int k) {
//     Node* ptr = head;
//     while (k--) {
//         ptr = ptr->next;
//     }
//     return ptr;
// }

// Node* getIntersection(Node* head1, Node* head2) {
//     // Step 1: Calculate lengths of both linked lists
//     int l1 = getLength(head1);
//     int l2 = getLength(head2);

//     Node* ptr1;
//     Node* ptr2;

//     // Step 2: Find difference k between linked lists and move the longer linked list ptr by k steps
//     if (l1 > l2) {
//         // ll1 is longer
//         int k = l1 - l2;
//         ptr1 = moveHeadByK(head1, k);
//         ptr2 = head2;
//     } else {
//         // ll2 is longer
//         int k = l2 - l1;
//         ptr1 = head1;
//         ptr2 = moveHeadByK(head2, k);
//     }

//     // Step 3: Compare ptr1 and ptr2 nodes
//     while (ptr1 && ptr2) {
//         if (ptr1 == ptr2) {
//             return ptr1;
//         }
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }
//     return NULL;
// }

// int main() {
//     LinkedList ll1;
//     ll1.insertAtTail(1);
//     ll1.insertAtTail(2);
//     ll1.insertAtTail(3);
//     ll1.insertAtTail(4);
//     ll1.insertAtTail(5);
//     // 1->2->3->4->5->null
//     ll1.display();

//     LinkedList ll2;
//     ll2.insertAtTail(6);
//     ll2.insertAtTail(7);

//     if (ll2.head && ll2.head->next) {
//         ll2.head->next->next = ll1.head->next->next->next;
//         // 6->7->4->5->null
//     }

//     Node* intersection = getIntersection(ll1.head, ll2.head);
//     if (intersection) {
//         cout << "Intersection at node with value: " << intersection->val << endl;
//     } else {
//         cout << "-1" << endl;
//     }

//     return 0;
// }












/* 
 given the head of a linked list, remove the k-th node from the end of the list and 
   return its head. 
*/

// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };

// bool checkEqualLinkedList(Node* head1, Node* head2) {
//     Node* ptr1 = head1;
//     Node* ptr2 = head2;

//     while (ptr1 != NULL && ptr2 != NULL) {
//         if (ptr1->val != ptr2->val) {
//             return false;
//         }
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }
//     // At this point either ptr1 is null, or ptr2 is null, or both are null
//     return (ptr1 == NULL && ptr2 == NULL);
// }

// int getLength(Node* head) {
//     Node* temp = head;
//     int length = 0;

//     while (temp != NULL) {
//         length++;
//         temp = temp->next;
//     }

//     return length;
// }

// Node* moveHeadByK(Node* head, int k) {
//     Node* ptr = head;
//     while (k--) {
//         ptr = ptr->next;
//     }
//     return ptr;
// }

// Node* getIntersection(Node* head1, Node* head2) {
//     // Step 1: Calculate lengths of both linked lists
//     int l1 = getLength(head1);
//     int l2 = getLength(head2);

//     Node* ptr1;
//     Node* ptr2;

//     // Step 2: Find difference k between linked lists and move the longer linked list ptr by k steps
//     if (l1 > l2) {
//         // ll1 is longer
//         int k = l1 - l2;
//         ptr1 = moveHeadByK(head1, k);
//         ptr2 = head2;
//     } else {
//         // ll2 is longer
//         int k = l2 - l1;
//         ptr1 = head1;
//         ptr2 = moveHeadByK(head2, k);
//     }

//     // Step 3: Compare ptr1 and ptr2 nodes
//     while (ptr1 && ptr2) {
//         if (ptr1 == ptr2) {
//             return ptr1;
//         }
//         ptr1 = ptr1->next;
//         ptr2 = ptr2->next;
//     }
//     return NULL;
// }


// // assuming k is always less than/equal length of linked list : 
// void removeKthNodeFromEnd(Node* &head, int k){
//        Node* ptr1 = head; 
//        Node* ptr2 = head; 

//        // move ptr2 by k steps ahead 
//        int count = k; 
//        while(count--){
//               ptr2=ptr2->next;
//        }

//        if(ptr2==NULL){
//           // k is equal to length of linked list 
//           // we have to delete head node 
//           Node* temp = head; 
//           head = head->next;
//           free(temp);
//           return; 
//        }


//        // now ptr2 is k steps ahead of ptr1 
//        // when ptr2 is at null(end of list), ptr1 will be at node to be deleted 
//        while(ptr2->next!=NULL){
//              ptr1=ptr1->next;
//              ptr2=ptr2->next;   
//        }

//        // now ptr1 is pointing to the node before kth node from end 
//        // node to be deleted is ptr1->next 
//        Node* temp = ptr1->next;
//        ptr1->next = ptr1->next->next;
//        free(temp); 
// }



// int main() {
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//     ll.display();
//     removeKthNodeFromEnd(ll.head, 5);
//     ll.display();


//     return 0;
// }












/*
 given 2 sorted linked lists, merge them into 1 singly linked list such that the resulting list is 
 also sorted. 
*/ 


// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };

// Node* mergeLinkedLists(Node* &head1, Node* &head2){
//       Node* dummyHeadNode = new Node(-1);
//       Node* ptr1 = head1; 
//       Node* ptr2 = head2;
//       Node* ptr3 = dummyHeadNode; 

//       while(ptr1 && ptr2){
//            if(ptr1->val < ptr2->val){
//                ptr3->next = ptr1; 
//                ptr1=ptr1->next; 
//            }
//            else{
//                ptr3->next = ptr2;
//                ptr2=ptr2->next;
//            }
//            ptr3=ptr3->next; 
//       }
//        if(ptr1){
//              ptr3->next = ptr1; 
//        }else{
//              ptr3->next =  ptr2; 
//        }
//        return dummyHeadNode->next; 
// }



// int main() {
//     LinkedList ll1;
//     ll1.insertAtTail(1);
//     ll1.insertAtTail(4);
//     ll1.insertAtTail(5);
//      ll1.display(); 
    
//    LinkedList ll2; 
//    ll2.insertAtTail(2);
//    ll2.insertAtTail(3);
//    ll2.display();


//     LinkedList ll3;
//     ll3.head = mergeLinkedLists(ll1.head, ll2.head);
//     ll3.display();

//     return 0;
// }












/*
 pattern: Merging multiple linked list : 
 You are given an array of k linked-lists lists, each linked-list is sorted in ascending 
  order. Merge all the linked-lists into one sorted linked-list and return it. 
*/ 


// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };

// Node* mergeLinkedLists(Node* &head1, Node* &head2){
//       Node* dummyHeadNode = new Node(-1);
//       Node* ptr1 = head1; 
//       Node* ptr2 = head2;
//       Node* ptr3 = dummyHeadNode; 

//       while(ptr1 && ptr2){
//            if(ptr1->val < ptr2->val){
//                ptr3->next = ptr1; 
//                ptr1=ptr1->next; 
//            }
//            else{
//                ptr3->next = ptr2;
//                ptr2=ptr2->next;
//            }
//            ptr3=ptr3->next; 
//       }
//        if(ptr1){
//              ptr3->next = ptr1; 
//        }else{
//              ptr3->next =  ptr2; 
//        }
//        return dummyHeadNode->next; 
// }

// Node* mergeKLinkedLists(vector<Node* > &lists){
//        if(lists.size()==0){
//             return NULL; 
//        }
//         while(lists.size()>1){
//               Node* mergedHead = mergeLinkedLists(lists[0], lists[1]);
//               lists.push_back(mergedHead);
//               lists.erase(lists.begin()); 
//               lists.erase(lists.begin()); 
//         }
//         return lists[0];
// }

// //vector ->  head1 head2 head3 head4
// // 1. head1 and head2 ll will be merged 
// // vector -> head3 head4 mergedHead1_2 
// // 2.head3 and head4 will be merged 
// // vector -> mergedhead1_2 mergedHead3_4 
// // 3. mergedhead1_2 and mergedHead3_4 will be merged 
// // vector -> mergeHead1_2_3_4 



// int main() {
//     LinkedList ll1;
//     ll1.insertAtTail(1);
//     ll1.insertAtTail(7);
//     ll1.insertAtTail(8);
//      ll1.display(); 
    
//    LinkedList ll2; 
//    ll2.insertAtTail(2);
//    ll2.insertAtTail(4);
//    ll2.insertAtTail(5);
//       ll2.display();


//     LinkedList ll3;
//     ll3.insertAtTail(3);
//     ll3.insertAtTail(6);
//     ll3.display();


//     vector<Node* > lists; 
//     lists.push_back(ll1.head);
//     lists.push_back(ll2.head);
//     lists.push_back(ll3.head); 


//     LinkedList mergedLL; 
//     mergedLL.head = mergeKLinkedLists(lists); 
//     mergedLL.display();

//     return 0;
// }











/*
  slow fast pointer : find the middle element of the given linked list : 
*/ 


// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };

// Node* findMiddleNode(Node* &head){
      
//       Node* slow = head; 
//       Node* fast = head; 

//       while(fast!=NULL && fast->next!=NULL){
//           slow = slow->next; 
//           fast=fast->next->next;
//       }
//       return slow; 
// }






// int main() {
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//      ll.display();

//      Node* middleNode = findMiddleNode(ll.head);
//      cout << middleNode -> val << endl;  
//     return 0;
// }










/*
   given head, the head of a linked list, determine if the linked list has a cycle in it. 
*/


// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };


// bool detectCycle(Node* head){
//       if(!head){
//           return false; 
//       }

//       Node* slow = head; 
//       Node* fast = head; 

//       while(fast && fast->next){
//          slow = slow->next; 
//          fast = fast->next->next;

//          if(slow == fast){
//             cout << slow->val<<endl; 
//               return true;
//          }
//       }
//       return false; 
// }


// void removeCycle(Node* &head){
//  // assuming that the linked list has a cycle 
//    Node* slow = head; 
//    Node* fast = head; 

//    do{
//        slow = slow->next;
//        fast = fast->next->next;
//    } while(slow!=fast);

//    fast = head; 
//    while(slow->next!=fast->next){
//        slow=slow->next;
//        fast=fast->next;
//    }
//      slow->next=NULL; 
// }






// int main() {
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//     ll.insertAtTail(7);
//     ll.insertAtTail(8);
//     //  ll.display();
//      ll.head->next->next->next->next->next->next->next->next = ll.head->next->next;
//     cout << detectCycle(ll.head) << endl; 
//     removeCycle(ll.head);
//     cout << "After removing cycle: " << endl; 
//     cout << detectCycle(ll.head) << endl; 
//     ll.display();
//     return 0;
// }










/*
  given the head , the head of a linked list , determine if the linked list is a palindrome or not. 
*/ 


// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };

// Node* findMiddleNode(Node* &head){
      
//       Node* slow = head; 
//       Node* fast = head; 

//       while(fast!=NULL && fast->next!=NULL){
//           slow = slow->next; 
//           fast=fast->next->next;
//       }
//       return slow; 
// }


// bool isPalindrome(Node* head){
    
//     //1. find middle element 
//     Node* slow = head; 
//     Node* fast = head; 

//     while(fast && fast->next){
//           slow = slow->next;
//           fast = fast->next->next; 
//     }

//     // now slow is pointing to middle element 
//     //2. break the linked list in the middle 
//     Node* curr = slow->next; 
//     Node* prev = slow; 
//     slow->next = NULL; 

//     //3. reverse the second half of linked list 
//     while(curr){
//       Node* nextNode = curr->next; 
//       curr->next = prev; 
//       prev = curr; 
//       curr = nextNode; 
//     }

//     //4. check if the two linkedlists are equal 
//     Node* head1 = head; 
//     Node* head2 = prev; 
//     while(head2){
//            if(head1->val!=head2->val){
//               return false; 
//            }
//            head1=head1->next;
//            head2=head2->next;
//     }
//     return true; 
// }





// int main() {
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(2);
//     ll.insertAtTail(1);
//     ll.display();
//     cout << isPalindrome(ll.head) << endl; 
    
//     return 0;
// }








/*
  pattern: rearrangement of nodes in a list 
  given the head of a  linked list , rotate the list to the right by k 
   places. 
*/

// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };


// Node* rotateByK(Node* &head, int k){
//     //1. find length of ll 
//     int n= 0; 
//     //2. find tail node 
//      Node* tail = head; 

//      while(tail->next){
//           n++; //finding length 
//           tail = tail -> next;  // finding last node  
//      }
//      n++; // for including last node 

//      k=k%n; 
//      if(k==0){
//          return head; 
//      }

//       tail->next = head; 
//       //3. traverse n-k nodes 
//        Node* temp = head; 
//        for(int i = 1; i<n-k; i++){
//           temp = temp->next; 
//        }
//        // temp is now pointing to (n-k)th node 
//        Node* newhead = temp->next;
//        temp->next=NULL; 
//         return newhead; 
// }






// int main() {
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//      ll.display();

//      ll.head = rotateByK(ll.head, 3); 
//      ll.display(); 
//     return 0;
// }











/*
  given the head of a singly linked list, group all the nodes with 
    odd indices together followed by the nodes with even indices, and return the 
     reordered list. 
*/



// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };


// Node* oddEvenLinkedList(Node* &head){
      
//        if(!head){
//           return head; 
//        } 

//        Node* evenHead = head->next; 
//        Node* oddPtr = head;
//        Node* evenPtr = evenHead; 

//        while(evenPtr && evenPtr->next){
//              oddPtr->next = oddPtr->next->next;
//              evenPtr->next = evenPtr->next->next; 
//              oddPtr = oddPtr->next;
//              evenPtr = evenPtr->next; 
//        }

//        oddPtr->next = evenHead; 
//        return head; 

// }




// int main() {
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//      ll.display();
       
//      ll.head = oddEvenLinkedList(ll.head);
//      ll.display(); 
//     return 0;
// }










/*
  You are given the head of a singly linked-list. the list can be represented as : 
   L0-L1-..-Ln-1-Ln 
   Reorder the list to be on the following form: 
   l0-ln-l1-ln-1-l2-ln-2-... 
*/

// #include<bits/stdc++.h>
// using namespace std;

// class Node {
//     public:
//         int val;
//         Node* next;

//         Node(int data) {
//             val = data;
//             next = NULL;
//         }
// };

// class LinkedList {
//     public:
//         Node* head;

//         LinkedList() {
//             head = NULL;
//         }

//         void insertAtTail(int value) {
//             Node* new_node = new Node(value);
//             if (head == NULL) {
//                 // Linked list is empty
//                 head = new_node;
//                 return;
//             }
//             Node* temp = head;
//             while (temp->next != NULL) {
//                 temp = temp->next;
//             }
//             temp->next = new_node;
//         }

//         void display() {
//             Node* temp = head;
//             while (temp != NULL) {
//                 cout << temp->val << "->";
//                 temp = temp->next;
//             }
//             cout << "NULL" << endl;
//         }
// };


// Node* reorderLinkedList(Node* &head){

//     // can check if linked list has atleast 3 nodes 

    
//     // 1. finding the middle element 
//     Node* slow = head; 
//     Node* fast = head; 
//     while(fast && fast->next){
//           slow=slow->next; 
//           fast=fast->next->next;
//     }

//     // now slow is pointing to the middle element 
//     //2. separate the linked list and reverse second half 
//     Node* curr = slow->next;
//     slow->next = NULL; 
//     Node* prev = slow; 
//      while(curr){
//           Node* nextPtr = curr->next;
//           curr->next = prev; 
//           prev = curr; 
//           curr = nextPtr;
//      }

//      //3. merging the two halves of the linked list 
//      Node* ptr1 = head; // linked list first half 
//      Node* ptr2 = prev; // linked list second half 

//      while(ptr1!=ptr2){
//          Node* temp = ptr1->next;
//          ptr1->next = ptr2;
//          ptr1 = ptr2;
//          ptr2 = temp; 
//      }
//      return head; 
// }  





// int main() {
//     LinkedList ll;
//     ll.insertAtTail(1);
//     ll.insertAtTail(2);
//     ll.insertAtTail(3);
//     ll.insertAtTail(4);
//     ll.insertAtTail(5);
//     ll.insertAtTail(6);
//      ll.display();

//     ll.head = reorderLinkedList(ll.head);
//     ll.display();  
//     return 0;
// }









/*
  given a linked list, swap every two adjacent nodes and return its head. You may not modify the values 
    in the list's nodes. Only nodes themselves may be changed. 
*/ 




#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int val;
        Node* next;

        Node(int data) {
            val = data;
            next = NULL;
        }
};

class LinkedList {
    public:
        Node* head;

        LinkedList() {
            head = NULL;
        }

        void insertAtTail(int value) {
            Node* new_node = new Node(value);
            if (head == NULL) {
                // Linked list is empty
                head = new_node;
                return;
            }
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = new_node;
        }

        void display() {
            Node* temp = head;
            while (temp != NULL) {
                cout << temp->val << "->";
                temp = temp->next;
            }
            cout << "NULL" << endl;
        }
};

  Node* swapAdjacent(Node* &head){
        // base case 
        if(head==NULL || head ->next==NULL){
              return head; 
        }

        // recursive case 
        Node* secondNode = head->next;
        head->next = swapAdjacent(secondNode->next);
         secondNode->next = head; // reversing the link between first and second node 
         return secondNode;
  }




int main() {
    LinkedList ll;
    ll.insertAtTail(1);
    ll.insertAtTail(2);
    ll.insertAtTail(3);
    ll.insertAtTail(4);
    ll.insertAtTail(5);
    ll.display();
     ll.head = swapAdjacent(ll.head);
     ll.display();
       
    return 0;
}












































































