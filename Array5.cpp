#include <iostream>

using namespace std;

void rearange(int*a ,int l,int r)
{
    int i=l-1;
    int j=l;
    for(j=l;j<=r;j++)
    {
        if(a[j]<0)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
}

int main() {
   int n;
   cin>>n;
   int arr[n];
   for (int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   rearange(arr,0,n-1);
    for (int i=0;i<n;i++)
   {
       cout<<arr[i];
   } 
}
