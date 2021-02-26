#include <iostream>

using namespace std;

void sort012(int* a, int l, int r)
{
    int i=-1,j=0,k=r+1;
    while(j<k)
    {
        switch (a[j])
        {
            case 0:
            {
                 i++;
                swap(a[i],a[j]);
                j++;
                break;
            }
            case 1:
            {
                j++;
                break;
            }
            case 2:
            {
                k--;
                swap(a[j],a[k]);
                break;
            }
        }
    }

}
int main() {
    int n;
   cin>>n;
   int a[n];
   for (int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   sort012(a,0,n-1);
   for(int i=0;i<n;i++)
   {
       cout<<a[i];
   }
}