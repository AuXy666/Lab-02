#include <iostream>
using namespace std;
class node 
{
public:
    int data;
    node* next;
    node()
    {
        data = 0;
        next = NULL;
    }
};
class stack
{
public:
        node* top = NULL;
    stack()
    {
        top = NULL;
    }
    bool isEmpty()
    {
        if (top ==NULL)
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
        return top->data;
    }
    void push(int key)
    {
        node* temp = new node;
        temp->data = key;
        temp->next = top;
        top = temp;
    }
    void pop()
    {
        if (isEmpty() == true)
        {
            cout << endl;
            cout << "Stack Stack is Empty" << endl;
        }
        else {
            cout << endl;
            cout << "Following is the element being popped = " << endl;
            cout<< top->data << endl;
            top = top->next;
        }
    }
    void display()
    {
        node* temp = top;
        if (isEmpty() == true)
        {
            cout << endl;
            cout << "Stack is Empty, So Cannot Display" << endl;
        }
        else {
            temp = top;
            cout << endl;
            cout << "Stack = " << endl;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
        
       
    }
};




int main() {
    int input;
    stack s1;
    while(1)
    {
        cout << "Press 1 to Push in stack" << endl;
        cout << "Press 2 to Pop from stack" << endl;
        cout << "Press 3 to display top" << endl;
        cout << "Press 4 to Display stack" << endl;
        cout << "Press 5 to end" << endl;
        cin >> input;
        if(input==1)
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

