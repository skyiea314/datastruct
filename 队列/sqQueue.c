#include<stdio.h>
#define ture 1
#define false 0
typedef bool int;
typedef ElemType int;
struct Qnode{
	int front;
	int rear;
	ElemType *data;
	int length;
};
typedef struct Qnode * Queue;

Queue CreatQueue(int length);
bool IsFullQ(Queue q,int length);
void AddQ(Queue q,ElemType item);
bool IsEmptyQ(Queue q);
ElemType DeletQ(Queue q):


int main(){
	Queue testQ;
	int length = 20;
	int i;
	testQ = CreatQueue(length);
	printf("is full? %d",IsFullQ(testQ,length));
	printf("is empty %d",IsEmptyQ(testQ));
	for(i = 0;i<20;i++){
		AddQ(testQ,i);
	}
	printf("is full? %d",IsFullQ(testQ,length));
	printf("is empty %d",IsEmptyQ(testQ));
	for(i = 0;i<20;i++){
		printf("delet items:%d",DeletQ(testQ));
	}
	printf("is full? %d",IsFullQ(testQ,length));
	printf("is empty %d",IsEmptyQ(testQ));


}
Queue CreatQueue(int length){
	Queue q;
	q = (Queue)malloc(sizeof(strut Qnode));
	q->data = (ElemType*)malloc(sizeof(length*ElemType));
	q->front=0;
	q->rear=0;
	q->length = length;


}
bool IsFullQ(Queue q,int length){
	bool result = false;

	if(q->rear==Maxsieze){
		result = ture; 
	}

	return result;
}
void AddQ(Queue q,ElemType item){
	if(IsFullQ(q)){
		printf("¶ÓÁÐÒÑÂú");
		exit();

	}
	q->data[q->rear] = item;
	q->rear=(q->rear)+1;
	
}
bool IsEmptyQ(Queue q){
	bool result = false;
	if(q->rear==q->front){
		result = ture;
	}
	return result;

}
ElemType DeletQ(Queue q){
	if(IsEmpty(q)){
		printf("¶ÓÁÐ¿Õ");
		exit();
	}
	ElemType deletItem=q->data[q->front];
	q->front++;
	return deletItem;

	
}
