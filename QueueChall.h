#include <iostream>
using namespace std; 

class Queue
{
	public:
	  Queue(int size){
		  s = size;
		  queue = new int [size]; 
		  count = 0; 
		  }
      void enqueue(Queue v,int x);
	  void dequeue(Queue v); 
	  int count;
	  int s; 
	  int  * queue;
	
};
ostream& operator<<(ostream& out, Queue v)
{

	for (int i=0; i< v.count ;  i++){
		out << v.queue[i] << " ";}
   return out;
}
void Queue:: enqueue(Queue v,int x)
{
	if (count ==0)
	{
		queue[0] = x; 
		count ++;
	}
	else if(count == s)
	{
		cout << "Sorry, the Queue is full! "; 
	}
	else{
		queue[count] = x; 
		count ++;
	}
}
void Queue:: dequeue(Queue v)
{
	if (count ==0)
	{
		cout << "Sorry, the queue is empty! ";
	}
	else {
		int z=1;
		while(z<count)
		{
			int temp = v.queue[z];
			v.queue[z-1] = temp; 
			z++;
		}
		v.queue[count-1] = NULL; 
		count --; 
	}

}

