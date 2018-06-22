#include <iostream>
using namespace std;
#define MAX 100

int main(int argc, char **argv)
{
	int stepArr[MAX], jumpArr[MAX], num, i, j;
    cin>>num;
    for(i=0;i<num;i++)
    {
        cin>>stepArr[i];
        jumpArr[i]=0;
    }
    for(i=1;i<num;i++)
    {
        for(j=0;j<i;j++)
        {
            if(j+stepArr[j]<=i)
                jumpArr[i]=(jumpArr[i]>jumpArr[j]+1?jumpArr[i]:jumpArr[j]+1);
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<stepArr[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<num;i++)
    {
        cout<<jumpArr[i]<<" ";
    }
	return 0;
}
