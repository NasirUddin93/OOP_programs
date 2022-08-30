#include<iostream>
using namespace std;
int add(int a,int b){
        cout<<"1st"<<endl;
    return a+b;
}
double add(double a,double b){
        cout<<"2nd";
    return a+b;
}
float add(int a,float b){
        cout<<"3rd";
    return a+b;
}
float add(float a,int b){
        cout<<"4th";
    return a+b;
}
int main(){
    double x;
    double y;
    double r;
    cout<<"Enter two number:"<<endl;
    cin>>x>>y;
    r = add(x,y);
    cout<<r;
}
