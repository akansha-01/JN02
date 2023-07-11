#include<iostream>
#define size 2
using namespace std;
class stack 
{
    int data[size];
    int top;
    public:
    stack()
    {
        top=-1;
    }
    void push(int element)
    {
        if(isfull()==1)
        cout<<"stack is full......";
        else
        data[++top]=element;
}
int pop()
{
    if(isempty()==1)
    return -1;
    else 
    return data[top--];
}
int isempty()
{
    if(top==-1)
    return 1;
    else
    return 0;
}
int isfull()
{
    if(top==size-1)
    return 1;
    else
    return 0;
}
int peek()
{
    if(isempty()==1)
    return -1;
    else
    return data[top];
    
}
};
int main()
{
    cout<<"static implementation of stack";
    stack st;
    st.push(10);
    st.push(20);
    cout<<"\nstack is empty"<<st.isempty();
    cout<<"\n stack is full"<<st.isfull();
    cout<<"\n element is on top postion"<<st.peek();
     cout<<"\n element remooved from stack"<<st.pop();
      cout<<"\n element remooved from stack"<<st.pop();
       cout<<"\nelement remooved from stack"<<st.pop();
       return 0;
}
    
