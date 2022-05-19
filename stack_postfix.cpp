#include <iostream>
#include <cctype>
#include <stack>
#include <string>
#include <bits/stdc++.h>

using namespace std;

string carry_out(char carrier[], int Size1)
{
    stack <char> Stack;
    char arr[Size1];
    int arr_count = 0;
    int prior_count = 0;
    int string_count = 0;
    int flag = 0;
    for (int i = 0; i < Size1; i++)
    {
        if(carrier[i] == '/' || carrier[i] == '*')
        {
            prior_count = prior_count + 1 ;
        }
    }
    for(int i = 0; i < Size1; i++)
    {
        if(prior_count > 0)
        {
            if(!isalpha(carrier[i]))
            {
                Stack.push((char) carrier[i]);
                cout << Stack.top() << endl;
                string_count++;
            }
            else if(isalpha(carrier[i]))
            {
                arr[arr_count] = carrier[i];
                arr_count++;
                string_count++;
                if (!Stack.empty())
                {
                    if(Stack.top() == '/' || Stack.top() == '*')
                    {
                        while(!Stack.empty())
                        {
                            cout << Stack.top() << endl;
                            arr[arr_count] = (char)Stack.top();
                            Stack.pop();
                            arr_count++;
                            string_count++;
                            if(Stack.empty())
                            {
                                break;
                            }
                        }
                        prior_count--;
                    }
                }
            }
        }
        else if(prior_count == 0)
        {
            if(!isalpha(carrier[i]))
            {
                Stack.push((char)carrier[i]);
                string_count++;
            }
            else if(isalpha(carrier[i]))
            {
                arr[arr_count] = (char) carrier[i];
                arr_count++;
                string_count++;
                if(!Stack.empty())
                {
                    flag = 0;
                    arr[arr_count] = (char) Stack.top();
                    arr_count++;
                    string_count++;
                }
            }
        }
    }
    for (int i = 0; i < Size1; i++)
    {
        printf("%c", arr[i]);
    }
}


int main()
{
    int Size = 0;
    string input;
    cout << "input:" << endl;
    cin >> input;
    Size = input.size();
    char arr1[Size];
    for (int i = 0; i < Size; i++)
    {
        arr1[i] = input[i];
    }
    carry_out(arr1, Size);

}
