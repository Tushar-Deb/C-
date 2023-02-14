#include <iostream>
using namespace std;

int main()
{
    int arr[50], n, i, j, index, small, chk, temp;
    cout<<"How many Elements on Array: ";
    cin>>n;
    cout<<"Enter the " <<n<< " Elements of Array\n";
    for(i=0; i<n; i++)
        cin>>arr[i];

    for(i=0; i<n-1; i++)
    {
        chk=0;
        small=arr[i];
        for(j=i+1; j<n; j++)
        {
            if(small>arr[j])
            {
                small=arr[j];
                chk++;
                index=j;
            }
        }
        if(chk!=0)
        {
            temp=arr[i];
            arr[i]=small;
            arr[index]=temp;
        }
    }
    cout<< "The Sorted Array is: \n";
    for(i=0; i<n; i++)
    cout<< arr[i]<<"  ";
    return 0;
}
