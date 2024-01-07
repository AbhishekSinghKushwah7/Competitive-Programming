#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n,x,k,p;
	    cin>>n>>x>>k>>p;
	    if (x>=k)
	    {
	        for(int j=0;j<k;j++)
	        {
	            p=p+10;
	        }
	        cout<<p<<endl;
	    }
	    else if (k!=n && x<k)
	    {
	        for(int j=0;j<x;j++)
	        {
	            p=p+10;
	        }
	        int z;
	        z=k-x;
	        for(int l=0;l<z;l++)
	        {
	            p=p+5;
	        }
	        cout<<p<<endl;
	    }
	    else
	    {
	        for(int j=0;j<x;j++)
	        {
	            p=p+10;
	        }
	        int z;
	        z=k-x;
	        for(int l=0;l<z;l++)
	        {
	            p=p+5;
	        }
	        p=p+20;
	        cout<<p<<endl;
	    }
	}
	return 0;
}