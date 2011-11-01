#include "QueueChall.h"
using namespace std; 

int main(){

	Queue z = Queue(10);

	z.enqueue(z, 3);
	z.enqueue(z, 3);
	z.enqueue(z, 3);
	z.dequeue(z);

	cout << z; 
}