#include<iostream>
using namespace std;
int main()
{
int i;
cout<<"Enter a number ";
cin>>i;

int count =1;
for(int row=1;row<=20;row++){
for(int column=1;column<=20;column++){
cout<<i*count<<" ";

count++;
}
  cout<<endl;
}
return 0;
}
