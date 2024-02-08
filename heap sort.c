#include<stdio.h>
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void heapify (int arr[],int N,int i){
	 int largest=i;
	 int left=2*i+1;
	 int right=2*i+2;
	 if(left<N&& arr[left]>arr[largest])
	 largest=right;
	 if (largest !=i){
	 	swap (&arr[i],& arr [largest]);
	 	heapify (arr,N,largest);
	 }
}
void heapsort(int arr [],int N)
{
	for(int i=N (2-1;i>=0; i--));
	heapify (arr,N,i);
	for (int i=N-1;i>0;i--){
		swap (&arr[0], & (arr[i]));
		heapify (arr,i,0);
		
	}
}
int maiin()
int arr {12,11,13,5,6,7};
int N size of (arr)/size of (arr[0]);

print f ("original array : ");
for (int i =0; i<N;i++){
	print f ("%d",arr[i]);
}
heapsort (arr,N);
printf("\n sorted array:");
for(int i=0:i<N;i++){
	print f ("%d",arr[i]);
}
   return 0;
{

