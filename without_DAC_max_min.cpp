#include<stdio.h>
// To find the max and min without using DAC.
int a[100];
void maxmin(int a[],int num,int max,int min){ //function create
	max=min=a[0];
	for(int i=1;i<num;i++){
		if(a[i]>max){
			max=a[i];
		}else if(min>a[i]){
			min=a[i];
		} 
		
		
		}
			printf("Max is: %d\n",max);
		printf("Min is: %d",min);
	
		}
	
void print(int a[],int num){ //
	for(int i=0;i<num;i++){
		printf("%d",a[i]);
		printf(" ");
	}
}
int main(){
	int num,i,max,min;
	printf("Enter the size of array:\n");
	scanf("%d",&num);
	printf("\nEnter the %d element of an array:\n",num);
	for(i=0;i<num;i++){
		scanf("%d",&a[i]);
	}
	printf("The array is:");
	printf(" [");
	print(a,num);
	printf("]");
	printf("\n");
	maxmin(a,num,max,min);// function call
	return 0;
}
