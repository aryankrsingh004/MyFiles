
#include <iostream>

using namespace std;

class arraystack{

	private:
	
	int top=-1;
	int capacity;
	int *array;

	public:

	arraystack(int cap){
		this->capacity=cap;
		this->top=-1;
		this->array=(int*)malloc(sizeof(int)*cap);
	}

	int isFull(){
		if (this->top==(this->capacity-1)){
			return 1;
		}
		else return 0;
	}
	void push(int item){
		if(!isFull()){
			this->top++;
			this->array[this->top]=item;
		}
		else if (isFull()){
			cout<<"stack is full";
		}
	}

};



int main(){
	arraystack *stack1=new arraystack(2);
	//arraystack stack2(4);
	//stack2.createarray();
	int c,x;
	while(1){
		cout<<"\n\n1.push";
		cout<<"\n2exit";
		cout<<"\nenter choice: ";
		cin>>c;
		switch (c)
		{
		case 1:
			cout<<"enter the number ";
			cin>>x;
			stack1->push(x);
			break;
		case 2:
			exit(0);
			break;	
		}
	}

return 0;
}