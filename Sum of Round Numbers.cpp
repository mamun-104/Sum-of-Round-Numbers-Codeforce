///in Google, everyone solve this problem in a very difficult way!!!
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i,n,temp,dcount=0,ans;;
    for(i=0;i<t;i++) /// This FOR Loop, is for Input
    {
        cin>>n;
        temp=n;
        /// Lets count the digits in n
            if (n == 0)
            return 1;
            while (n != 0){
            n = n / 10;
            dcount++;}
            //cout<<dcount;
            n=temp;
            ans=dcount;


        int arr[dcount];
        int m=1;
        for(int j=0;j<dcount;j++)
        {
            arr[j]=n%10;
            n=n/10;
        }
        /// for ans
        for(int j=0;j<dcount;j++)
        {
            if(arr[j]==0)
            {
                ans--;
            }
        }



        /// Final Print
        cout<<ans<<"\n";
        for(int j=0;j<dcount;j++)
        {
            if(arr[j]!=0)
            {
                cout<<arr[j]*m<<" ";
                m=m*10;

            }
            else
            {
                m=m*10;
                ans--;

            }
        }
        cout<<"\n";
    }

    return 0;
}






