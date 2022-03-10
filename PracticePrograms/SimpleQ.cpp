#include<iostream>
using namespace std;

class Queue {       // Queue class is created
    public :
        int n=5,front=-1,rear=-1, element, element1;
        // creating queue with size of 5 elements in public
        int queue[5];   

    // insertion operation: Before inserting any element, need to chk whether queue is full or not. If queue is we cant add the element and overflow condition occurs, else if Queue is empty need to declare front as 0 index and increment the rear then element will be added to the position pointed by rear.
    void enQueue()                  
    {
        if (rear==n-1)  
        {
            cout<<"Queue Overflow occured"<<endl;
        }
        else
        {
            front=0;
            cout<<"Enter element to insert into the queue"<<endl;  
            for (int i=0;i<n;i++)
            {
                cin>>element;
                rear ++;
                queue[rear]=element;
                //cout<<element<<" inserted"<<endl;
            }
        }
    }
    // Deletion operation: Before deleting any element need to chk whether queue is empty or not. If queue is empty means there wont be any element so we cant get element and it gives underflow condition. Else if element will be deleted from the position pointed by front and front need to be incremented and flow goes on.. If front reaches last element, once it deleted we need to declare front and rear as -1.
    void deQueue()
    {
        if (front ==-1 || front >rear)
        {
            cout<<"Queue Underflow occured"<<endl;
        }
        else
        {   
            if (front == rear)
            {
                front =-1;
                rear=-1;
            }  
            else {
            element1=queue[front];
            cout<<element1<<" deleted from the queue"<<endl;
            front ++;
            }
        }
    }
    // Display operation: Used to display the elements in the queue.
    void qDisplay() 
    {
        if (front == - 1)
            cout<<"Queue is empty"<<endl;
        else 
        {
            cout<<"Queue elements are : ";
            for (int i = front; i <= rear; i++)
                cout<<queue[i]<<" "<<endl;
        }
    }
};

int main ()
{
    Queue q_obj;        // created the object for class
    int option;
    cout<<"---QUEUE BASIC OPERATION---"<<endl;
    cout<<"1. Insert the element to the Queue"<<endl;
    cout<<"2. Delete the element from the Queue"<<endl;
    cout<<"3. Display the Queue elements"<<endl;
    cout<<"4. Exit"<<endl;
    while (option !=4)   // while loop will end when user option is 4
    {
    cout<<"Which operation you want to be performed in the Queue ?"<<endl;
    cin>>option;

    switch (option)     // switch statement to perform required operation.
    {
        case 1 :
        {
            q_obj.enQueue();    // calling the enQueue function using object
            break;
        }
        case 2 :
        {
            q_obj.deQueue();       // calling the deQueue function using object
            break;
        }
        case 3 :
        {
            q_obj.qDisplay();       // calling the qDisplay function using object
            break;
        }
        case 4 :
        {
            cout<<"Exit"<<endl;     
        }
        default :
        {
            cout<<"Entered option is not available!"<<endl;         // if option is other than 1 2 3 4 it will print this line
        }
    }

    }
} 

