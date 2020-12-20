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
            cout << "Following is the element being popped from s1 and pushed to s2 = " << endl;
            cout<< top->data << endl;
            top = top->next;
        }
    }
    void Queue(stack s1,stack *s2)
    {
        while (s1.top != NULL)
        {
            s2->push(s1.Top());
            s1.pop();

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
    stack s2;
    
    while (1)
    {
        cout << "Press 1 to Push in a stack" << endl;
        cout << "Press 2 to convert the stack to queue using stacks only" << endl;
        cout << "Press 3 to Display Stack" << endl;
        cout << "Press 4 to Display Queue" << endl;
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
            
            s2.Queue(s1, &s2);
            cout << endl;
            cout << "Queue Created Successfully Using Stacks" << endl;
            cout << endl;
        }
        else if (input == 3)
        {
            cout << endl;
            s1.display();
            cout << endl;
        }
        else if (input == 4)
        {
            if (s2.top == NULL)
            {
                continue;
            }
            cout << endl;
            cout << "Queue Using ";
            s2.display();
            cout << endl;
        }
        else if (input == 5)
        {
            break;
        }
        system("pause");
        system("cls");

    }

    s2.display();
    return 0;
}

