#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	for (int i=0; i<t; i++)
	{
	    float o,d,r;
	    cin>>o>>d;
	    r=(9*o)/10;
	    if(o<=d)
	    {
	        cout<<"ONLINE"<<endl;
	    }
	    else if(r==d)
	    {
	        cout<<"EITHER"<<endl;
	    }
	    else if(r<d)
	    {
	        cout<<"ONLINE"<<endl;
	    }
	    else
	    {
	        cout<<"DINING"<<endl;
	    }
	}
    return 0;
}
