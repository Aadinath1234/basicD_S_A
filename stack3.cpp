// min-stack. 

// #include<bits/stdc++.h>
// using namespace std;

// class MinStack{
//      public: 
//        stack<ll> st;
//        ll mn; 
//        MinStack(){
//           this -> mn = INT_MAX; 
//        }

//        void push(int val){
//          if(this->st.empty()){
//               this -> mn = val; 
//               this ->st.push(val);
//          }else{
//               this->st.push(val-this->mn);
//                if(this->mn > val){
//                   this->mn = val; 
//                }
//          }
//        }


//        void pop(){
//           if(not this->st.empty()){
//               if(this->st.top() >= 0){
//                   this->st.pop();
//               }else{
//                  this->mn = this.mn - this->st.top();
//                  this->st.pop();
//               }
//           }
//        }
// }







/*
  find the minimum number of brackets that we need to remove to make the 
  given bracket sequence balanced. 
*/
// #include<bits/stdc++.h>
// using namespace std;

// int calc(int v1, int v2, int op){
//       if(op == '^'){
//          return pow(v1, v2);
//       }
//       if(op == '*'){
//           return v1*v2; 
//       }
//       if(op == '/'){
//           return v1/v2;
//       }
//       if(op == '+'){
//           return v1+v2; 
//       }
//       return v1-v2;
// }

// int eval(string &str){
//       stack<int> st; 
//       for(int i = 0; i< str.size(); i++){
//           char ch = str[i];
//           if(isdigit(ch)){
//              st.push(ch - '0');  
//           } else{
//               int v2 = st.top();
//               st.pop();
//               int v1 = st.top();
//               st.pop(); 
//               st.push(calc(v1, v2, ch));
//           }
//       }
//       return st.top(); 
// }


// int main(){
//      string str = "231*+9-";
//      cout << eval(str); 

//     return 0; 
// }






/*
 post fix evaluation: 
*/ 
// #include<bits/stdc++.h>
// using namespace std;

// int calc(int v1, int v2, int op){
//       if(op == '^'){
//          return pow(v1, v2);
//       }
//       if(op == '*'){
//           return v1*v2; 
//       }
//       if(op == '/'){
//           return v1/v2;
//       }
//       if(op == '+'){
//           return v1+v2; 
//       }
//       return v1-v2;
// }

// int eval(string &str){
//       stack<int> st; 
//       for(int i = str.size()-1; i >= 0;  i--){
//           char ch = str[i];
//           if(isdigit(ch)){
//              st.push(ch - '0');  
//           } else{
//               int v2 = st.top();
//               st.pop();
//               int v1 = st.top();
//               st.pop(); 
//               st.push(calc(v1, v2, ch));
//           }
//       }
//       return st.top(); 
// }


// int main(){
//      string str = "-9+*132";
//      cout << eval(str); 

//     return 0; 
// }





/*
  precedence: 
*/

// #include<bits/stdc++.h>
// using namespace std;

// int calc(int v1, int v2, char op) {
//     if (op == '^') {
//         return pow(v1, v2);  // Use pow() for exponentiation
//     }
//     if (op == '*') {
//         return v1 * v2;
//     }
//     if (op == '/') {
//         return v1 / v2;
//     }
//     if (op == '+') {
//         return v1 + v2;
//     }
//     return v1 - v2;  // Assume it's subtraction if no other operator matches
// }

// // Function to determine the precedence of operators
// int precedence(char ch) {
//     if (ch == '^') {
//         return 3;  // Exponent has the highest precedence
//     } else if (ch == '*' || ch == '/') {
//         return 2;  // Multiplication and division precedence
//     } else if (ch == '+' || ch == '-') {
//         return 1;  // Addition and subtraction precedence
//     }
//     return -1;  // Invalid character
// }

// // Function to evaluate the expression string
// int eval(string &str) {
//     stack<int> nums;  // Stack for numbers
//     stack<char> ops;  // Stack for operators

//     for (int i = 0; i < str.size(); i++) {
//         if (isspace(str[i])) {
//             // Ignore spaces
//             continue;
//         }
//         if (isdigit(str[i])) {
//             // Handle multi-digit numbers
//             int num = 0;
//             while (i < str.size() && isdigit(str[i])) {
//                 num = num * 10 + (str[i] - '0');
//                 i++;
//             }
//             i--;  // Decrement the index to account for the last increment in the loop
//             nums.push(num);
//         } else if (str[i] == '(') {
//             // Push '(' to operators stack
//             ops.push('(');
//         } else if (str[i] == ')') {
//             // Solve the expression inside parentheses
//             while (!ops.empty() && ops.top() != '(') {
//                 char op = ops.top();
//                 ops.pop();

//                 int v2 = nums.top();
//                 nums.pop();
//                 int v1 = nums.top();
//                 nums.pop();
//                 nums.push(calc(v1, v2, op));
//             }
//             if (!ops.empty()) ops.pop();  // Pop '('
//         } else {
//             // Operator encountered, solve higher precedence operators first
//             while (!ops.empty() && precedence(ops.top()) >= precedence(str[i])) {
//                 char op = ops.top();
//                 ops.pop();

//                 int v2 = nums.top();
//                 nums.pop();
//                 int v1 = nums.top();
//                 nums.pop();
//                 nums.push(calc(v1, v2, op));
//             }
//             // Push current operator
//             ops.push(str[i]);
//         }
//     }

//     // Final calculation for remaining operators
//     while (!ops.empty()) {
//         char op = ops.top();
//         ops.pop();

//         int v2 = nums.top();
//         nums.pop();
//         int v1 = nums.top();
//         nums.pop();
//         nums.push(calc(v1, v2, op));
//     }

//     return nums.top();
// }

// int main() {
//     string str = "1 + (2*(3-1)) + 2";
//     cout << eval(str) << endl;  // Output the evaluated result
//     return 0;
// }






/*
 prefix to postfix 
*/
#include<bits/stdc++.h>
using namespace std;

string eval(string &pre){
       stack<string> st;
       reverse(pre.begin(), pre.end());
       for(int i = 0; i < pre.size(); i++){
          if(isdigit(pre[i])){
              st.push(to_string(pre[i] - '0'));
          }else{
             string v1 = st.top();
             st.pop();
             string v2 = st.top();
             st.pop();
             string newexp = v1 + v2 + pre[i];
             st.push(newexp);
          }
       }
       return st.top();
}

int main(){
       string s = "*+31-15";
       cout << eval(s);
  return 0; 
}