#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s, int e)
{
    int left=s;
    int right=e;
    int loc=s; //poivet

    while(true)
    {

//right side code

        while(arr[loc]<=arr[right]    && loc!=right)
        {
            right--;
        }

        if(loc==right) return loc;

        if(arr[loc]>arr[right])
        {
            swap(arr[loc],arr[right]);
            loc=right;
        }


        //left side code

        while(arr[loc]>=arr[left]   && loc!=left)
        {
            left++;
        }
        if(loc==left)return loc;

        if(arr[loc]<arr[left])
        {
            swap(arr[loc],arr[left]);
            loc=left;
        }
    }
}

void quickSort(int arr[],int s, int e)
{
    if(s>=e)
    {
        return;
    }

    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}



int main()
{
    int arr[7]={14,3,2,6,9,1,0};
    int s=0;
    int e=6;
    quickSort(arr,s,e);
    for(auto i: arr)
    {
        cout<<i<<" ";
    }
}