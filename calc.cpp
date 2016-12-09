#include <iostream>
#include <stdlib.h>
using namespace std;
void calc (float x,char op,float y )
{


float sum;

switch(op)

{
case '+':
sum=x+y;
break;
case '-':
sum=x-y;
break;
case '*':
sum=x*y;
break;
case '/':
if(y==0)
{
cout<<"**************"<<endl;
cout<<"  Math Error"<<endl  ;
cout<<"**************"<<endl;
exit(0);
}
else
{
sum=x/y;
break;
}
default:
cout<<"############################################"<<endl;
cout<<"     Please choose the right operator "<<endl ;
cout<<"############################################"<<endl;
exit(0);
}

cout<<endl;
cout<<"======================="<<endl;
cout<<sum<<endl;
cout<<"======================="<<endl;

}
int main()
{
float x,y , sum ;
char op;
cout<<endl;
cout<<"                                                         * hello * "<<endl<<endl<<endl;
while (1)
{
cout<<" * Enter The First Number:";
cin>>x;
cout<<" * Enter The Opretor( * / + - ):";
cin>>op;
cout<<" * Enter The Second Number:";
cin>>y;
calc (x,op,y);

}


    return 0;
}
