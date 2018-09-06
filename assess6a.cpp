#include<iostream>
using namespace std;
class time
{
    int hrs,minu;
    public:
        time()
        {
        }
        time(int h,int m)
        {
            hrs=h;
            minu=m;
        }
        time(time &t)
        {
            hrs=t.hrs;
            minu=t.minu;
        }
        void display();
};
void time :: display()
{
    cout<<hrs<<" hours and "<<minu<<" minutes ";
}
int main()
{
    time t(2,25),x(t);
    t.display();
    return 0;

}
