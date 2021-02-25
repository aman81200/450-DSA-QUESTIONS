#include <iostream>

using namespace std;

// approach 1 
//Takes 1+2(n-2) comparisions in worst case

/*int main() {
    int n;
    
    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    } 

    int min,max;

    if(a[0]>a[1])
    {
         max=a[0];
         min=a[1];
    }
    else
    {
        max=a[1];
        max=a[0];
    }
    for(int i=2;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        else if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<min<<endl;
    cout<<max<<endl;
}*/


//Approach 2(TOURNAMENT METHOD)
//no of comparision is (3n/2)-2 and is intresting
struct Pair
{
    int min;
    int max;
};

struct Pair minmaxo(int *a,int l,int r)
{
    struct Pair minmax,mml,mmr;
    //base condition
    if(l==r)
    {
        minmax.min=a[l];
        minmax.max=a[l];
        return minmax;
    }
    if (r==l+1)
    {
        if(a[l]>a[r])
        {
            minmax.min=a[r];
            minmax.max=a[l];
            return minmax;
        }
        else 
        {
            minmax.min=a[l];
            minmax.max=a[r];
            return minmax;
        }
    }
    // recursive part 
    else 
    {
        int mid = (l+r)/2;
         mml = minmaxo(a,l,mid);
         mmr = minmaxo(a,mid+1,r);
        
       if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;     
     
    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;
        return minmax;
    }
}

int main() {
    int n;
    
    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++)
    {
        cin>>a[i];
    } 
    struct Pair result = minmaxo(a,0,n-1);
    cout<<result.min<<endl<<result.max;
}


