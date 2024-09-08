// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//   public: 
//     int val; 
//     Node* next;

//     Node(int data){
//           val = data;
//           next = NULL; 
//     }
// };

// // insertion at kth position in a singly linked list: 

// int  main(){
//     Node* n = new Node(1);
//     cout<<n->val<<" "<<n->next<<endl;
//     return 0;
// }










// #include<bits/stdc++.h>
// using namespace std;

// class Node{
//   public: 
//     int val; 
//     Node* next;

//     Node(int data){
//           val = data;
//           next = NULL; 
//     }
// };

// // insertion at kth position in a singly linked list: 
// void insertAtHead(Node* &head, int val){
//        Node* new_node = new Node(val);
//        new_node->next = head;
//        head = new_node;
// }


// void insertAtTail(Node* &head, int val){
//       Node* new_node = new Node(val);
//       Node* temp = head;

//       while(temp->next!=NULL){
//           temp = temp->next;
//       }
//       // temp has reached last node 
//       temp->next  = new_node;
// }


// void insertAtPosition(Node* &head, int val, int pos){
//        if(pos==0){
//           insertAtHead(head, val);
//           return; 
//        }

//        Node* new_node = new Node(val);
//        Node* temp = head;
//        int current_pos = 0;
//        while(current_pos!=pos-1){
//           temp = temp->next;
//           current_pos++;
//        }

//        // temp is pointing to node at pos-1 
//        new_node->next = temp->next;
//        temp->next = new_node;

// }


// void updateAtPosition(Node* &head, int k, int val){
//         Node* temp = head;
//         int curr_pos = 0;

//         while(curr_pos!=k){
//               temp=temp->next;
//               curr_pos++;
//         }
//         // temp will be pointing to the kth node 
//         temp->val = val; 
// }


// // deletion at kth position in a singly linked list: 
// void deleteAtHead(Node* &head){
//       Node* temp = head;  // node to be deleted 
//       head = head->next;
//       free(temp);
// }

// void deleteAtTail(Node* &head){
//       Node* second_last = head;
//       while(second_last->next->next!=NULL){
//             second_last=second_last->next;
//       }

//       // now second_last points to second last node 
//       Node* temp = second_last->next; //  node to be deleted; 
//       second_last->next=NULL; 
//       free(temp);
// }



// void deleteAtPosition(Node* &head, int pos){
//        if(pos == 0){
//               deleteAtHead(head);
//               return; 
//        }

//        int curr_pos = 0;
//        Node* prev = head; 
//        while(curr_pos!=pos-1){
//               prev = prev->next;
//               curr_pos++;
//        }

//        // prev is pointing to node at pos-1 
//        Node* temp = prev->next;
//        prev->next = prev->next->next;
//        free(temp);
// }




// void display(Node* head){
//     Node* temp=head;
//     while(temp!=NULL){
//           cout << temp->val<< "->";
//           temp = temp->next;
//     }
//     cout << "NULL"<< endl; 
// }

// int main(){
//    Node* head = NULL; 
//    insertAtHead(head,2);
//    display(head);
//    insertAtHead(head,1);
//    display(head);
//    insertAtTail(head, 3);
//    display(head);
//    insertAtPosition(head, 4, 1);
//    display(head);
//    updateAtPosition(head, 2,5);
//    display(head);
//    deleteAtHead(head);
//    display(head);
//    deleteAtTail(head);
//    display(head);
//    deleteAtPosition(head, 1);
//    display(head);
//    return 0;

// }










// given the head of a linked list, delete every alternate element from the list starting from the second element. 
#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
      int val; 
      Node* next;

      Node(int data){
              val = data;
              next = NULL; 
      }
};

class LinkedList{
       public:
          Node* head;
          LinkedList(){
              head=NULL; 
          } 

        void insertAtTail(int value){
              Node* new_node = new Node(value);
              if(head==NULL){
                    // linked list is empty 
                    head = new_node;
                    return; 
              }
              Node* temp = head;
              while(temp->next!=NULL){
                    temp = temp->next;
              }
              temp->next = new_node;
        }

        void display(){
              Node* temp = head;
              while(temp!=NULL){
                    cout << temp->val<<"->";
                    temp = temp -> next;
              } cout << "NULL" << endl; 
        }
};


void deleteAlternateNodes(Node* &head){
        Node* curr_node = head;
        while(curr_node!=NULL && curr_node->next!=NULL){
               Node* temp = curr_node->next; // this is the node to be deleted 
               curr_node->next = curr_node->next->next;
               free(temp);
               curr_node = curr_node -> next; 
        }
}


void deleteDuplicateNodes(Node* &head){
      Node* curr_node = head;
      while(curr_node){
              while(curr_node->next && curr_node->val == curr_node->next->val){
                     // delete curr-> next
                      Node* temp = curr_node->next; // node to be deleted 
                      curr_node->next = curr_node->next->next;
                      free(temp);
              }
              // this loop ends when current node and next node values are different 
              // or linkedList ends 
              curr_node = curr_node->next; 

      }

}





void reversePrint(Node* head){
        // base condition : 
        if(head==NULL){
              return; 
        }

        // recursive case 
        reversePrint(head -> next);
        cout << head -> val << " ";
}

Node* reverseLL(Node* &head){
       Node* prevptr = NULL;
       Node* currptr = head; 

       // currptr -> next = prevptr; 
       // move all 3 ptrs by one step ahead 
       while(currptr!=NULL){
              Node* nextptr = currptr->next;
              currptr->next =  prevptr;
              prevptr = currptr;
              currptr = nextptr; 
       }
   // when this loop ends, prevptr pointing to my last node which is new head 
    Node* new_head = prevptr; 
    return new_head; 

}


Node* reverseLLRecursion(Node* &head){
      // base case 
      if(head == NULL || head->next==NULL){
              return head; 
      }

      // recursive case 
      Node* new_head = reverseLLRecursion(head->next);
      head->next->next = head;
      head->next = NULL; // head is now pointing to last node in reversed ll 
      return new_head; 
}





Node* reverseKLL(Node* &head, int k){
     Node* prevptr = NULL;
     Node* currptr = head; 

     int counter = 0; // for counting first k nodes 
     while(currptr!=NULL && counter<k){
      // reversing first k node 
          Node* nextptr = currptr->next;
          currptr->next = prevptr; 
          prevptr = currptr;
          currptr = nextptr;
          counter++; 
     } 
     
//      currptr will give us (k+1)th node 
     if(currptr!=NULL){
            Node* new_head = reverseKLL(currptr, k); 
            head->next = new_head; 
     }

     return prevptr; 
}





int main(){
     LinkedList ll;
     ll.insertAtTail(1);
     ll.insertAtTail(2);
     ll.insertAtTail(2);
     ll.insertAtTail(3);
     ll.insertAtTail(3);
     ll.insertAtTail(4);
     ll.insertAtTail(5);
     ll.insertAtTail(6);
     ll.display();
//      deleteAlternateNodes(ll.head);
//      ll.display();
//      deleteDuplicateNodes(ll.head);
//      ll.display(); 
      // reversePrint(ll.head);
      // ll.head = reverseLL(ll.head); 
      // ll.head = reverseLLRecursion(ll.head);
      // ll.display(); 
      ll.head = reverseKLL(ll.head, 2);
      ll.display(); 
      

  return 0;
}








