#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin>>t;
	for(int i=0; i<t; i++)
	{
	    float ate,x,y,r;
	    cin>>x>>y>>r;
	    ate = x + (r/30);
	    float p;
	    p = ate/y;
	    float res;
	    res = ceil(p);
	    cout<<res<<endl;
	}
	return 0;
}
