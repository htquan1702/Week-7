#include<iostream>
using namespace std;
int tim(int *a,int left,int right,int x)
{
 int m;
 if(left>right) return 0;
 m=(left+right)/2;
 if(a[m]==x) return m;
 if(x<a[m]) return tim(a,left,m-1,x);
 return tim(a,m+1,right,x);
}
int main()
{
 int a[10]={1,2,3,4,5,6,7,8,9,10};
 int x;
 cout<<"tim so: ";cin>>x;
 if(int z=tim(a,0,9,x)) cout<<"tim thay tai vi tri: "<<z<<"\n";
 else cout<<"khong tim thay\n";

}

