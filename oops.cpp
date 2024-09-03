// #include<bits/stdc++.h>
// using namespace std;

// class Fruit{
// public: 
//      string name;
//      string color;
// };

// int main(){
//     Fruit apple;  //object 
//     apple.name = "Apple";
//     apple.color = "Red";
//     cout << apple.name << " - " << apple.color << endl; 

    
//     Fruit * mango = new Fruit();
//     mango->name = "Mango";
//     mango->color = "Yellow";
//     cout << mango->name << " - " << mango->color << endl; 


//     return 0; 
// }












// constructor : 
// #include<bits/stdc++.h>
// using namespace std;

// class Rectangle{
//   public: 
//      int l;
//      int b;

//      Rectangle(){
//         // default constructor - no  args passed 
//         l = 0; 
//         b = 0;
//      }
//      Rectangle(int x, int y){
//         // parameterized constructor 
//          l = x;
//          b = y; 

//      }


//      Rectangle(Rectangle& r){
//           // copy constructor - initialize an obj by another existing 
//           l = r.l;
//           b = r.b; 
//      }

//      ~Rectangle(){
//           // destructor 

//           cout << "Destructor is called " << endl; 
//      }
// }; 


// int main(){
//     //  Rectangle r1;
//      Rectangle* r1 = new Rectangle();
//      cout << r1->l << " " << r1->b << endl; 
//       delete r1;  


//       Rectangle r2(3, 4);
//       cout << r2.l << " " << r2.b <<endl; 

//       Rectangle r3 = r2; 
//       cout << r3.l << " " << r3.b << endl; 

//       return 0;      
// }













// encapsulation: 
// #include<bits/stdc++.h>
// using namespace std;

// class ABC{
//       int x;
//       public: 
       
//        void set(int n){
//           x = n; 
//        }

//        int get(){
//             return x;
//        }
// };

// int main(){
//      ABC obj1;
//      obj1.set(3);
//      cout << obj1.get() << endl; 

//   return 0;
// }








// inheritance: 
// #include<bits/stdc++.h>
// using namespace std;

// class Parent{
//       public: 
//          int x; 
    
//       protected: 
//          int y; 
//       private: 
//           int z; 
// };


//  class Child1: public Parent{
//      // x will remain public 
//     // y will remain protected 
//     // z will not be accessible 
//  };

//  class Child2: private Parent{
//       // x will be private 
//       // y will be private 
//       // z will be  inaccessible 
//  };

//  class Child3: protected Parent{
//         // x will be protected 
//         // y will be protected 
//         // z will be inaccessible 
//  }; 




// int main(){
//      Parent p;
//      p.x; 
// }








// inheritance types:
// single level inheritance:  
// #include<bits/stdc++.h>
// using namespace std;

// class Parent{
//  public: 
//     Parent(){
//           cout << "parent class " << endl; 
//     }
// };

// class Child: public Parent{
//       public: 
//         Child(){
//               cout << "child class " << endl; 
//         }
// };

// int main(){
//      Child c; 
//      return 0;
// }



// multi-level inheritance: 
// #include<bits/stdc++.h>
// using namespace std;

// class Parent{
//  public: 
//     Parent(){
//           cout << "parent class " << endl; 
//     }
// };

// class Child: public Parent{
//       public: 
//         Child(){
//               cout << "child class " << endl; 
//         }
// };

// class GrandChild: public Child {
//        public: 
//          GrandChild(){
//               cout << "Grandchild class " << endl; 
//          }
// };

// int main(){
//      GrandChild gc; 

//      return 0;
// }











// multiple inheritance : 
// #include<bits/stdc++.h>
// using namespace std;


//  class Parent1{
//       public: 
//         Parent1(){
//               cout << "Parent Class " << endl; 
//         }
//  };


// class Parent2{
//  public: 
//     Parent2(){
//           cout << "parent2 class " << endl; 
//     }
// };

// class Child: public Parent1, public Parent2{
//       public: 
//         Child(){
//               cout << "child class " << endl; 
//         }
// };

// class GrandChild: public Child {
//        public: 
//          GrandChild(){
//               cout << "Grandchild class " << endl; 
//          }
// };

// int main(){
//      Child c; 

//      return 0;
// }












// hierarchical inheritance: 









// diamond problem: 
// #include<bits/stdc++.h>
// using namespace std;

// class Parent{
//     public: 
//        Parent(){
//              cout << "Parent class " << endl; 
//        }
// };

// class Child1: public Parent{
//        public: 
//          Child1(){
//               cout << "Child 1 class " << endl; 
//          }
// };


// class Child2: public Parent{
//        public: 
//          Child2(){
//                cout << "Child 2 class " << endl; 
//          }
// };


// class GrandChild: public Child1, public Child2{
//        public: 
//           GrandChild(){
//                cout << "GrandChild class" << endl; 
//           }
// };


// int main(){
//       GrandChild c; 
//       return 0;
// }













// polymorphism: 
// function overloading. 
// #include<bits/stdc++.h>
// using namespace std;

// class Sum{
   
//    public: 
//       void add(int x, int y){
//            int sum = x+y;
//            cout<< sum << endl; 
//       }

//       void add(int x, int y, int z){
//            int sum = x + y + z; 
//            cout << sum << endl; 
//       }

//       void add(float x, float y){
//            float sum = x + y; 
//            cout << sum << endl; 
//       }
// };


// int main(){
//     Sum s; 
//     s.add(2,3);
//     s.add(2,3,4);
//     s.add(float(2.3), float(2.7));
//     return 0; 
// }








// operator overloading: 
// #include<bits/stdc++.h>
// using namespace std;

// class Complex{
//       public: 
//       int real;
//       int img;

//       Complex(int x, int y){
//           real = x;
//           img = y;
//       }

//       Complex operator+ (Complex &c){
//              Complex ans(0,0); 
//              ans.real = real + c.real;
//              ans.img = img + c.img; 
//              return ans;
//       }
// };

// int main(){

//      Complex c1(1,2);
//      Complex c2(1,3); 
//     Complex c3 = c1 + c2;
//     cout << c3.real << " i" << c3.img << endl;  
//      return 0;
// }














// runtime polymorphism : 
// #include<bits/stdc++.h>
// using namespace std;

// class Parent{
//   public: 
//     virtual void print(){
//           cout << "parent class " << endl; 
//     }
//     void show(){
//           cout << "parent class " << endl; 
//     }
// };

// class Child: public Parent{
//  public: 
//    void print(){
//         cout << "child class " << endl; 
//    }
//    void show(){
//       cout << "child  class " << endl; 
//    }
// };

// int main(){
  
//    Parent *p; 
//    Child c;

//    p = &c;
//    p->print();
//    p->show();

//   return 0;
// }







// friend function :
#include<bits/stdc++.h>
using namespace std;

class A{
      int x;
public: 
   A(int y){
     x = y; 
   }
   friend void print(A &obj);
};

void print(A &obj){
      cout << obj.x << endl;
}


int main(){
       A obj(5);
       print(obj);
       return 0;
}