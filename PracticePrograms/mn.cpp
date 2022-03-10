#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

class Solution {

public :
string postfix_eval, postfix;   

//checking the character is operator or not.
bool isOperator(char c)
{
	if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
	return true;
	else
	return false;
}
// giving precendence/priority to each of the operators.
int precedence(char c) 
{ 
    if(c == '^') 
    return 3; 
    else if(c == '*' || c == '/') 
    return 2; 
    else if(c == '+' || c == '-') 
    return 1; 
    else
    return -1; 
} 
// function is to convert the infix to postfix expression, inside this calling precedence and isoperator fn.
string infixToPostfix(stack<char> ss, string infix)
{
	string postfix;
	for(int i=0;i<infix.length();i++)
	{
		char c= infix[i];
		//if the character is operand need to save it in string
        if  (c >='0'&& c<='9')
		{
			postfix+=c;
		} 
        // if the character is ( need to push it to stack
		else if(c == '(')
		{
			ss.push(c);
		}
		// if the character is ) need to store the operands in string and popup the same until reach the )
		else if(c == ')')
		{
			while((ss.top()!='(') && (!ss.empty()))
			{
				char temp=ss.top();
				postfix+=temp;
				ss.pop();
			}
			ss.pop();	
		}
		// if the character is any of the operator need to chk the precedence 
		else if(isOperator(c))
		{
			// if character has higher priorty than top element keep the same or if it is lesser than top element need to store top to string.
			while((!ss.empty())&&( precedence(c)<=precedence(ss.top())))
				{
					postfix+=ss.top();
					ss.pop();
				}
			ss.push(c);
		}
	}
	// once all done, need to chk if stack is empty or not and do the below step.
	while(!ss.empty())
	{
		postfix+=ss.top();
		ss.pop();
	}
	
	return postfix;
}
// Evaluating the postfix expression 
float postfixEvaluation(string post_exp)
{
	stack <char> sss; 

	for (int i=0;i<post_exp.length();i++)
	{
		char c1=post_exp[i];
		// if the character is a number need to push it to stack
		if (c1 >='0'&& c1<='9')
		{
			sss.push(c1-'0');
		} 
		// if the character is a alphabet we cannot evaluate it unless we have some values for it.
		else if ((c1 >= 'a' && c1 <= 'z') ||(c1 >= 'A' && c1 <= 'Z') )
		{
			cout<<"Error: Cannot evaluate alphabets!";
			break;
		}
		// if the character is a operator need to do the operation according to the nature of the operator
		else
		{
			int x=sss.top();
			sss.pop();
			int y=sss.top();
			sss.pop();

			switch (c1)
			{
				case '+':	// addition
				sss.push(y+x);
				break;
				case '-':	// subtraction
				sss.push(y-x);
				break;
				case '*':	//multiplication	
				sss.push(y*x);
				break;
				case '/':	//division
				sss.push(y/x);
				break;
				case '^':	//exponent
				sss.push(pow(y,x));
				break;
			}
		}
	}
	return sss.top();
}
};

// Main function
int main() 
{  
  	string infix_exp, postfix_exp;
	cout<<"s = ";
	cin>>infix_exp;
  	stack <char> stack;								    //stack created
      Solution sol;
	
  	postfix_exp = sol.infixToPostfix(stack, infix_exp);	//calling the function by passing stack and infix expression.
  	
	cout<<sol.postfixEvaluation(postfix_exp);
	
	return 0;
}
