#include <iostream>
#include <stack>

using namespace std;

void display(stack <int> stack2)
{
    while(!stack2.empty())
    {
        cout << stack2.top() << endl;
        stack2.pop();
    }
}
int main()
{
    stack <int> stack1;
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    stack1.push(4);
    stack1.push(5);
    stack1.pop();
    display(stack1);
    while(!stack1.empty())
    {
        stack1.pop();
    }
    display(stack1);
}
