#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool isOperator(char c)
{
    if (c=='+' || c=='-' || c=='*' || c=='/' || c=='^') 
    return true;
    else 
    return false;
}

int precedence(char c)
{
    if (c=='^')
    return 3;
    else if (c=='*' || c=='/')
    return 2;
    else if (c=='+' || c=='-')
    return 1;
    else
    return -1;
}

string InfixToPostfix(stack <char>ss , string infix)        // infixToPostfix function.
{
    string postfix;
    for (int i=0;i<infix.length();i++) 
    {
    char c=infix[i];
    
    if ((c >= 'a' && c<= 'z') || (c >= 'A' && c<= 'Z') || (c >= '0' && c<= '9'))
    {
        postfix += c;
    }

    else if (c=='(')
    {
        ss.push(c);
    }

    else if (c==')') 
    {
        {
        while((!ss.empty()) && (ss.top()!='('))
        postfix += ss.top();
        ss.pop();
        }
    ss.pop();
    }

    else if (isOperator(c))
    {
        {
            while ((!ss.empty()) && (precedence(c)<(precedence(ss.top()))))
            postfix += ss.top();
            ss.pop();
        }
    ss.push(c);
    }
    
    }
    
    while (!ss.empty())
    {
    postfix += ss.top();
    ss.pop();
    }
    return postfix;
}

int main () 
{
    string infix_exp,postfix_exp;
    cout<<"Enter a Infix expression : ";                //getting math expression
    cin>>infix_exp;
    stack <char> stack;       
    cout<<"Infix Expression: "<<infix_exp<<endl;                          //creating stack
    postfix_exp=InfixToPostfix(stack, infix_exp);        //calling a fn by passing stack and infix expression and saving it in postfix 
    cout<<"Postfix Expression: "<<postfix_exp<<endl;

    return 0;
}

