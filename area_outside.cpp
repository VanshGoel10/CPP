#include<iostream>
using namespace std;
class Rect{
public:
    int ar,s1,s2,p;
    void area(int s1,int s2);
    void peri(int s1,int s2);

};
void Rect::area(int s1,int s2){
        ar=s1*s2;
        cout<<"Area is "<<ar<<endl;};
void Rect::peri(int s1,int s2){
        p=2*(s1+s2);
        cout<<"Perimeter is "<<p<<endl;};
int main()
{
    Rect obj;
    obj.area(5,3);
    obj.peri(6,4);
    return 0;
};