#include<iostream>
using namespace std;
class Avg{
public:
    int s1,s2,s3,s4,s5;
    float avg;
    void a(int s1,int s2,int s3,int s4,int s5){
        avg=(s1+s2+s3+s4+s5)/5;
        cout<<"Avg is "<<avg<<endl;
    }
};
int main()
{
    Avg obj;
    obj.a(5,5,5,5,5);
    return 0;
};