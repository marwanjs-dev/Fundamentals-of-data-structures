#include <iostream>
#include <stack>
#include <queue>

using namespace std;

void reverse_queue(queue <int>& queue1)
{
    stack <int> stack1;
    for (int i = 0; i < 5; i++)
    {
        stack1.push(queue1.front());
        queue1.pop();
    }
    for(int i = 0; i<5; i++)
    {
        queue1.push(stack1.top());
        stack1.pop();
    }
    for(int i = 0; i < 5; i++)
    {
        queue1.push(queue1.front());
        queue1.pop();
    }
}

int main()
{
    queue <int> queue2;
    queue2.push(1);
    queue2.push(2);
    queue2.push(3);
    queue2.push(4);
    queue2.push(5);
    queue2.push(6);
    queue2.push(7);
    queue2.push(8);
    queue2.push(9);
    queue2.push(10);
    reverse_queue(queue2);
}
