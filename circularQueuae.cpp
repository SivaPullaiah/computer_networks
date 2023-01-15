#include<iostream>
using namespace std;
template <class T>
class circularQueueADT
{
	T *arr;
	int front, rear;
	int max, len;
	public:
	class circularQueueADT(int size = 10)
	{
		arr=new T[size];
		front = rear = len =0
		max = size;
	}
	bool isempty()
	{
		return front == rear;
	}
	bool isfull()
	{
		return front == (rear+1)%max;
	}
	void Enqueue(T ele)
	{
		if(isfull())
			cout<<"Queue is overflow\n";
		else
		{
			rear = (rear+1)%max;
			arr[rear]=ele;
			len++;
			cout<<"sucessfully insetterd";
		}
	}
	
	T dequeu()
	{
		T ele=-1;
		if(isempty)
			cout<<"Queue is Empty"<<endl;
		else
		{
			ele=arr[front];
			front=(front+1) % max;
			len--;
		}
		return ele;
	}
	void display()
	{
		if(isempty())
			cout<<"Queue is Empty";
		else
		{
			cout<<"Elements are:";
			if(front<rear)
			{
				for(int i=front; i<rear; i++)
					cout<<arr[i]<<" ";
			}
			else
			{
				for(int i=front; i<max-1; i++)
					cout<<arr[i]<<" ";
				for(int i=0; i<rear; i++)
					cout<<arr[i]<<" ";
				cout<<endl;
			}
		}
	}
	void size()
	{
		if(isempty())
			cout<<"Queue is empty\n";
		else
			cout<<"size of circular queue: "<<len<<end;
	}
	~class circularQueueADT()
		delete arr;
};



int main()
{
	class circularQueueADT <int> obj(10);
	int ele, ch;
	cout<<"\n 1.Enqueue   2.Dequeue   3.Display    4.Size   5.Exit";
	while(1)
	{
		cout<<"Enter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter elements: ";
				cin>>ele;
				obj.Enqueue(ele);
			break;
			case 2:
				cout<<"Delete lement is:"<<obj.Dequeue<<endl;
			break;
			case 3:
				obj.Display();
			break;
			case 4:
				obj.size();
			break;
			case 5:
			exit(0);
			default:
				cout<<"Invalid choice";
		}
	}
	return 0;
}
