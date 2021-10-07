

#include<bits/stdc++.h>
using namespace std;

double getMean(double *a,int n)
{
    double sum=0;
    for(int i=0;i<n;i++)

        sum+=a[i];

    return sum/n;
}
double getMedian(double *a,int n)
{

    sort(a,a+n);
    if(n%2!=0)
    {
        return a[n/2];
    }
    else {
        return (a[n/2]+a[n/2-1])/2.0;
    }
}
double getMode(double *a,int n){
    sort(a,a+n);
double   element= 0;
int  count =0;
for(int j=0;j<n;j++)
{

        double tempelement =a[j];
        double tempcount=0;
        for(int p=0;p<n;p++)
            if(a[p]==tempelement)
            tempcount++;
        if(tempcount>count)
        {
            element=tempelement;
            count=tempcount;
        }


  }
  return element;
}


    int main()
{

    int n;
    double a[50];
    cout<<"enter the size of array:";
    cin>>n;
    cout<<"enter the element of array:";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   cout<<"mean="<<getMean(a,n)<<endl;
   cout <<"median="<<getMedian(a,n)<<endl;
    cout<<"mode="<<getMode(a,n)<<endl;


    return 0;
}

