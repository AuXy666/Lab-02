#include <iostream>
using namespace std;
class stack
{
public:

    int arr[100];
    int  SIZE;
    int top;
    stack()
    {
        SIZE = 100;
        top = -1;
    }
    bool isFull()
    {
        if (top >= SIZE - 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isEmpty()
    {
        if (top <= -1)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    int Top()
    {
        return arr[top];
    }
    void push(int val)
    {
        if (isFull() == true)
        {
            cout << endl;
            cout << "Stack is Full, Cannot Add More Values" << endl;
        }
        else
        {
            top++;
            arr[top] = val;
        }
    }
    void pop()
    {
        if (isEmpty() == true)
        {
            cout << endl;
            cout << "Stack is Empty, So Cannot Further Pop" << endl;
        }
        else {
            cout << endl;
            cout << "Following is the popped element = " << endl;
            cout << arr[top] << endl;
            top--;
        }
    }
    void display()
    {
        if (isEmpty() == true)
        {
            cout << endl;
            cout << "Stack is Empty, So Cannot Display" << endl;
        }
        else
        {
            cout << endl;
            cout << "Stack = " << endl;
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }

    }
};




int main() {
    int input;
    stack s1;
    while (1)
    {
        cout << "Press 1 to Push in stack" << endl;
        cout << "Press 2 to Pop from stack" << endl;
        cout << "Press 3 to display top" << endl;
        cout << "Press 4 to Display stack" << endl;
        cout << "Press 5 to end" << endl;
        cin >> input;
        if (input == 1)
        {
            int key;
            cout << "Enter value key value = " << endl;
            cin >> key;
            s1.push(key);

        }
        else if (input == 2)
        {
            s1.pop();
        }
        else if (input == 3)
        {
            cout << endl;
            cout << "Following is the top element = " << endl;
            cout << s1.Top() << endl;

        }
        else if (input == 4)
        {
            s1.display();
        }
        else if (input == 5)
        {
            break;
        }
        system("pause");
        system("cls");

    }
    return 0;
}
