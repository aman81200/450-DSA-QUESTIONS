#include<iostream>

using namespace std;

int reversearray(int* arr,int n)
{
    int temp=0,temp2 = 0;
    int start=0;
    int end =n-1;
	while(start <= end ){
        temp= arr[start];
        temp2=arr[end];
        arr[start]=temp2;
        //cout<<"arr["<<start<<"] is "<<arr[start]<<"\n";
        arr[end]=temp;
       // cout<<"arr["<<end<<"] is "<<arr[end]<<"\n";
        end--;
        start++;
    }
    return 0;
}

int main()
{
	int n;
	cin>>n;
	int arr[n];
    
    
    for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    reversearray(arr,n);
    for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"\n";
	}
   
}