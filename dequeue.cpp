#include <iostream>
#include <array>

using namespace std;

template<class T, int size = 100>
class Deque
{
private:
    int first, last;
    T arr[size];
public:
    Deque()
    {
        first = last = -1;
    }
    bool isEmpty()
    {
        return first == -1 && last == -1;
    }
    void insertFirst(T e)
    {
        if(isEmpty())
        {
            first = last = 0;
        }
        else if (first == size - 1)
        {
            first = 0;
        }
        else
        {
            first++;
        }
        arr[first] = e;
    }
    void insertLast(T e)
    {
        if(isEmpty())
        {
            first = last = 0;
        }
        else if(first == 0)
        {
            last = size - 1;
        }
        else
        {
            last = last - 1;
        }
        arr[last] = e;
    }
    T removeFirst()
    {
        if(isEmpty())
        {
            return -1;
        }
        else if(first == last)
        {
            first = -1;
            last = -1;
        }
        else if (first == 0)
        {
            first = size - 1;
        }
        else
        {
            first = first - 1;
        }
    }
    T removeLast()
    {
        if(isEmpty())
        {
            return -1;
        }
        else if(first == last)
        {
            first = -1;
            last = -1;
        }
        else if(last == size-1)
        {
            last = 0;
        }
        else
        {
            last = last + 1;
        }
    }
    T first1()
    {
        if (isEmpty())
        {
            return -1;
        }
        else{return arr[first];}
    }
    T last1()
    {
        if (isEmpty())
        {
            return -1;
        }
        else{return arr[last];}
    }
};

int main()
{
    Deque <int> q;
    q.insertLast(5);
    q.insertLast(4);
    q.insertLast(3);
    q.insertLast(2);
    q.insertLast(1);
    cout << q.last1() << endl;



}
