#include <iostream>
//if we use the head and tail we can speed up the process by adding elements from tail so that if
// we add from tail it will speed up the process of finding the limit of the linked list 

using namespace std;

class Node
{
public:
	Node* next;
	int info;
};
class singly_list
{
private:
	Node* head; Node* tail;
	Node* first;
	Node* last;
public:
	int length;
	singly_list()
	{
		head = tail = 0;
		length = 0;
	}
	bool isEmpty()
	{
		return (tail == 0);
	}
	void Add_Node(int el)
	{
		Node* tmp = new Node;
		tmp->info = el;
		if (isEmpty())
		{
			head = tail = tmp;
			length++;
		}
		else
		{
			length++;
			tail->next = tmp;
			tmp->next = NULL;
			tail = tmp;
			for (int i = 0; i < length; i++)
			{
				last = head->next;
				first = head;
				for (;last != NULL;)
				{
					if (first->info > last->info)
					{
						swap(first->info, last->info);
					}
					first = first->next;
					last = last->next;
				}
			}
		}
	}
	void display()
	{
		Node* cur = head;
		while (cur != NULL)
		{
			cout << cur->info << endl;
			cur = cur->next;
		}
	}
};

int main()
{
	singly_list q;
	q.Add_Node(1);
	q.Add_Node(7);
	q.Add_Node(3);
	q.Add_Node(11);
	q.Add_Node(5);
	q.display();
}