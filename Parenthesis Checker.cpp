/*Write a program using a  stack  for push, pop, peek, and isEmpty operations.Write isBalanced() Function that Iterates through the input expression, Pushes opening brackets onto the stack. For closing brackets, it checks the top of the stack for a matching opening bracket. Ensures that all opening brackets are matched by the end of the traversal. Main Function: Accepts a string expression from the user.Uses isBalanced() to determine if the parentheses in the expression are balanced*/
#include <iostream>
#include <string>
using namespace std;
class Stack{
protected:
        string stck;
        int top=-1;
public:
        bool isEmpty();
        void Push(char);
        char Pop();
        char Peek(){return stck[top];};
        bool isBalanced(string arr);
};
bool Stack::isEmpty(){
    if(top==-1){
        return 1;
    }
    else{
        return 0;
    };
};
void Stack::Push(char x){
    stck[++top]=x;
};
char Stack::Pop(){
    if(!isEmpty()){return stck[top--];};
    return 0;
};
bool Stack::isBalanced(string arr){
    int i=0;
    while(arr[i]!='\0'){
        if(arr[i]=='['||arr[i]=='{'||arr[i]=='('){
            Push(arr[i]);
        }
        else if(arr[i]=='['||arr[i]=='{'||arr[i]=='('){
            if(isEmpty()){return 0;}
        }
        else if((arr[i]=='}'&&Peek()=='{')||(arr[i]==')'&&Peek()=='(')||(arr[i]==']'&&Peek()=='[')){
			Pop();
		};
        i++;
    };
    return this->isEmpty();
};
int main(){
    Stack ch;
    string a;
    cout<<"Enter String";
    cin>>a;
    if(ch.isBalanced(a)){
        cout<<"Entered String is Well Parenthesised";
    }
    else{
        cout<<"Entered String is Not Well Parenthesised";
    };
    return 0;
};
