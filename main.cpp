#include <iostream>

using namespace std;

int main()
{
int x,a,b,c;
cout<<"Enter Number (for 3 NUM):";
cin>>x;
a=x%10;
b=x%100;
c=b-a;
a=a*100;
b=x-b;
b=b/100;
cout<<a+b+c;




return 0;



}
