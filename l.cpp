#include<iostream>
using namespace std;
int par(int arr[],int low,int high){
	int pivot=arr[high];
	int i=low;
	for(int j=low;j<high;j++){
		if(arr[j]<pivot){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			i++;
		}
   
	}
	int temp=arr[i];
	arr[i]=arr[high];
	arr[high]=temp; 
 	return i;

}
void qu(int arr[],int l,int h)
	{
	if(h>l){
	    //p is the pivoot around which the array rotate
	    int p= par(arr,l,h);
	    qu(arr,l,p-1);qu(arr,p+1,h);

	}

}

int main(){
int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    for(int i=0;i<n;i++)
	{cout<<arr[i]<<",";}
cout<<endl;
    qu(arr,0,n-1);
	for(int i=0;i<n;i++)
	{cout<<arr[i]<<",";}
cout<<endl;
return 0;
}
