#include <iostream>
#include <array>
using namespace std;

class TSortedArrayList
{
public:
	int arr[100] = { 1,2,4,5,6,7 };
	int length = 100;
	int i;
	int j;
	int x;
	int size;
	int pos = 0;
	void add(int el)
	{
		for (i = 0; i < length; i++)
		{
			if (el < arr[i])
			{
				pos = i;
				break;
			}
		}
		for (j = 99; j > pos; j--)
		{
			arr[i + 1] = arr[i];
		}
		arr[pos] = el;
	}
	void display()
	{
		for (x = 0; x < 100; x++)
		{
			if (arr[x] == 0)
			{
				size = x;
				break;
			}
		}
		for (i = 0; i < size; i++)
		{
			cout << arr[i] << endl;
		}
	}
};

int main()
{

	TSortedArrayList arr1;
	arr1.add(3);
	arr1.display();
}