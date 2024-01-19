#include<iostream>
#include<conio.h>
using namespace std;
#define max 5
class circular_queue
{
    public:
    int front,back,data,q[max];
    circular_queue()
    {
        front=-1;
        back=-1;
        
    }
    void enqueue()
    {
        if((back+1)%max==front)
        {
            cout<<"queue is full"<<endl;

        }
        else
        {
        cout<<"enter data to be enqueued"<<endl;
        cin>>data;
        if(front==-1)
        {
            front=0;
        }
        back=(back+1)%max;
        q[back]=data;
        }
        
    }
    void dequeue()
    {
        if(front==-1&&back==-1)
        {
            cout<<"queue is empty"<<endl; 
        }
        else
        {
           
            data=q[front];
            if(back==front)
            {
                front=back=-1;
            }
            else{
                front=(front+1)%max;
            }
            cout<<"the dequeued data is: "<<data<<endl;
           
            
        }
    }
    void display()
    {
        if(front==-1&&back==-1)
        {
            cout<<"no elements to display"<<endl;
        }
        else
        {
        cout<<"the elements in queue are:"<<" ";
        int i=front;
        while(i!=back)
        {
            cout<<q[i]<<" ";
            i=(i+1)%max;
        }
        cout<<q[back]<<endl;
        }
      
    }
    
};
int main()
{
    circular_queue cq;
    int c;
    while(c!=4)
    {
    cout<<"menu:"<<endl<<"1.enqueue"<<endl<<"2.dequeue"<<endl<<"3.display"<<endl<<"4.exit"<<endl<<"enter the choice"<<endl;
    cin>>c;
   
    switch (c)
    {
    case 1:
        cq.enqueue();
        break;
        case 2:
        cq.dequeue();
        break;
        case 3:
        cq.display();
        break;
        
    default:
    cout<<"input invalid"<<endl;
        break;
    }
    }
    return 0;

}