#include<iostream>
#include<stdlib.h>
using namespace std;
int x,i,j;
char l,a,b,c;

class k
{   public:
    k()
    {

    }

    k(char l)
    {
     x=l;
     a=l;
    }
    char rga()
    {int y;
    y=(rand()%(97-122+1)+97);

        return y;
     }
    ~k()
    {
    }

};
int main()
{   k k1=k();
    char w[10];
    j=0;
    for(i=0;i<5;i++)
    {w[i]=k1.rga();
    cout<<w[i]<<"\n";
    cin>>l;
     k1=k(l);

        if(x!=w[i])
        {
        cout<<"you are wrong!! \n";
        }
        else
        {
            j++;
        }

    }
for(i=0;i<=5;i++)
if(j==i)
    {
    cout<<"your score="<<i;
    }

}
