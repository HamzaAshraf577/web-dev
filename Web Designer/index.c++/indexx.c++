#include<iostream>
using namespace std;
int main()
{
    int a[10],n,i,j,b,ktemp;
    cout<<"Enter the name of array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter the Elements"<<endl;
        cin>>a[i];
    }
    for(b=0;b<n-1;b++)
    {
        for(k=0;k<n-1;k++)
        if(a[k]>a[k+1])
        {
            temp=a[k];
            a[k]=a[k+1];
            a[k+1]=temp;
        }
    }
    cout<<"Sorted Array Value are"<<endl;
    for(j=0;j<n;j++)
    {
        cout<<a[j]<<"\t";
    
    }
    return 0;
}
