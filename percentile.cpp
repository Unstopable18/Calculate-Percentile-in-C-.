#include<iostream>
using namespace std;
int main()    
{
    int n, i,larr[50],uarr[50],pclass;
    float  armean,cf[50],farr[50],h[50], fsum=0,mfsum=0,N,ni,p,p1,p2,p3;
    cout<<"*******************************************************";
    cout<<"\nEnter Total No. of Elements =   ";
    cin>>n;
    cout<<"\nEnter "<<n<<" Number of Lower Limit Elements: ";
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>larr[i];  
    }
    cout<<"\nEnter "<<n<<" Number of Upper Limit Elements: ";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>uarr[i];  
    }
    
    cout<<"\nEnter "<<n<<" Number of Frequency Elements: ";
     cout<<endl;
    for(i=0; i<n; i++)
    {
        cin>>farr[i];
        fsum = fsum+farr[i];
    }
    
    cout<<"\nWhich percentile you want to find (1-99):   ";
    cin>>ni;
    cout<<endl;
    for(i=0; i<n; i++)
    {
        cf[0]=farr[0];
        {
         for(i=1;i<n;i++)
         cf[i]=(cf[i-1]+farr[i]);
        }
        cout<<endl;
    }
    N=ni*fsum;
    p1=N/100;
    for(i=0;i<n;i++)
    {
        if (cf[i]>=p1)
        {
            pclass=i;
            break;
        }
    }
    cout<<"*******************************************************\n";
    cout<<"Percentile class is = "<<larr[pclass]<<"-"<<uarr[pclass];
    cout<<endl;
       for(i=0; i<n; i++)
    {
      h[i]=(uarr[i]-larr[i]);
    }
    for(i=0; i<n; i++)
    {
        p2=h[i]/(farr[pclass]);
        p3=p1-(cf[pclass-1]);
        p=larr[pclass]+p2*p3;  
    }
    cout<<"*******************************************************\n";
    cout<<"***  "<<ni<<" Percentile is Found to be = "<<p<<"  ***\n";
    cout<<"*******************************************************";
    return 0;
    
}