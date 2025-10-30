/*Parsing expressions is a key step in many compilers and language processors.When a language's syntax requires parsing mathematical or logical expressions, converting between infix and postfix notation ensures that expressions are evaluated correctly. Accept an infix expression and show the expression in postfix form.*/
#include <iostream>
using namespace std;
class Stack{
protected:
        string stck;
        int top=-1;
public:
        bool isEmpty();
        void Push(char);
        char Pop();
        char Peek(){if(!isEmpty())return stck[top];};
        friend int Precedence();
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
int Precedence(char op){
    if (op=='*'||op=='/')
    {
        return 2;
    }
    else if (op=='+'||op=='-')
    {
        return 1;
    }
    return 0;
};
int main(){
    Stack S;
    string infix,postfix;
    cout<<"Enter Infix string:";
    cin>>infix;
    
    for(int i=0;i<infix.length();i++)
    {
        if ((infix[i]>='a'&& infix[i]<='z')||(infix[i]>='A'&&infix[i]<='Z')||(infix[i]>='0'&&infix[i]<='9'))
        {
            postfix+=infix[i];
        }
        else if(infix[i]=='(')
        {
            S.Push(infix[i]);
        }
        else if(infix[i]==')'){
            while(!S.isEmpty() && S.Peek()!='('){
                postfix+=S.Pop();
            }
            S.Pop();
        }
        else{
            while (!S.isEmpty() && Precedence(S.Peek())>=Precedence(infix[i]))
            {
                postfix+=S.Pop();
            }
            S.Push(infix[i]);
        }
    }
    while (!S.isEmpty())
            {
                postfix+=S.Pop();
            };
    cout<<"Infix Statement:"<<infix<<endl;
    cout<<"Postfix Statement:"<<postfix<<endl;
    return 0;
};
