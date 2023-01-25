#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        float x,y;
        cin>>x>>y;
        
        if(x>y)
        {
            cout<<"SECOND"<<endl;
            
        }
        else if(x==y)
        {
            cout<<"ANY"<<endl;
        }
        else if(y>x)
        {
            cout<<"FIRST"<<endl;
        }
    }
	// your code goes here
	return 0;
}
