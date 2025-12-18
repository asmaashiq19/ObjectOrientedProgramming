#include<iostream>
using namespace std;
int main(){
 int choice;
int f;
int c;

cout<<"1 to convert f to c\n";
cout<<"2 to convert c to f\n";
cin>>choice;
if(choice==1){
cout<<"Enter temperature in f\t";
cin>>f;
c=(f-32)*5/9;
cout<<"Temperature in Celcius\t"<<c;
}
else if(choice==2){
cout<<"Enter temperature in c\t";
cin>>c;
f=(9/5)*c+32;
cout<<"Temperature in Fahrenheit\t"<<f;
}
else{
cout<<"Invalid Choice";
}
return 0;
}