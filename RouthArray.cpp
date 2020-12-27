#include<bits/stdc++.h>
using namespace std;
void four()
{
    int i,j,a1,b,c,d,e;
    int a[5][3];
    cout<<"Enter the cofficient of a4\n";
    cin>>a1;
    cout<<"Enter the cofficient of a3\n";
    cin>>b;
    cout<<"Enter the cofficient of a2\n";
    cin>>c;
    cout<<"Enter the cofficient of a1\n";
    cin>>d;
    cout<<"Enter the constant value\n";
    cin>>e;

    cout<<" The equation formed is\t:-"<<a1<<" a4 "<<b<<" a3 "<<c<<" a2 "<<d<<" a1 "<<e<<" = 0"<<endl;

    a[0][0]=a1;
    a[0][1]=c;
    a[0][2]=e;
    a[1][0]=b;
    a[1][1]=d;
    a[1][2]=0;
    a[2][2]=0;
    a[3][2]=0;
    a[4][2]=0;
    a[4][1]=0;
    a[2][0]=((a[1][0]*a[0][1])-(a[0][0]*a[1][1]))/a[1][0];
    a[2][1]=((a[1][0]*a[0][2])-(a[0][0]*a[1][2]))/a[1][0];
    a[3][0]=((a[2][0]*a[1][1])-(a[1][0]*a[2][1]))/a[2][0];
    a[3][1]=((a[2][0]*a[1][2])-(a[1][0]*a[2][2]))/a[2][0];
    a[4][0]=5;
    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {

            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
       int count=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<1;j++)
        {
            if(a[i][j]>0)
            count=count+1;
            }
        }
    if(count==5)
    cout<<"The system  is a STABLE system according to the characterstic equation provided.\n";
    else
    cout<<"The system is UNSTABLE according to the characterstic equation provided.\n";

}
void quad(){
   int i,j,a1,b,c;
   int a[3][2];
   cout<<"Enter the cofficient of a2\n";
   cin>>a1;
   cout<<"Enter the cofficient of a\n";
   cin>>b;
   cout<<"Enter the constant\n";
   cin>>c;
   a[0][0]=a1;
   a[0][1]=c;
   a[1][0]=b;
   a[2][0]=c;
   a[2][1]=0;
   a[1][1]=0;
   for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {

            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
    int count=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<1;j++)
        {
            if(a[i][j]>0)
            count=count+1;
            }
        }
    if(count==3)
    cout<<"The system  is a STABLE system according to the characterstic equation provided.\n";
    else
    cout<<"The system is UNSTABLE according to the characterstic equation provided.\n";

}
void cubic(){
    int i,j,a1,b,c,d;
    int a[4][2];
    cout<<"Enter the cofficient of a3\n";
    cin>>a1;
    cout<<"Enter the cofficient of a2\n";
    cin>>b;
    cout<<"Enter the cofficient of a\n";
    cin>>c;
    cout<<"Enter the constant\n";
    cin>>d;
    a[0][0]=a1;
    a[0][1]=c;
    a[1][0]=b;
    a[1][1]=d;
    a[2][0]=((a[1][0]*a[0][1])-(a[0][0]*a[1][1]))/a[1][1];
    a[2][1]=0;
    a[3][0]=d;
    a[3][1]=0;
    for(i=0;i<4;i++)
    {
        for(j=0;j<2;j++)
        {

            cout<<"\t"<<a[i][j];
        }
        cout<<"\n";
    }
int count=0;
for(i=0;i<4;i++)
    {
        for(j=0;j<1;j++)
        {
            if(a[i][j]>0)
            count=count+1;
            }
        }
    if(count==4)
    cout<<"The system  is a STABLE system according to the characterstic equation provided.\n";
    else
    cout<<"The system is UNSTABLE according to the characterstic equation provided.\n";

}
int main()
{
int ch;
        do
    {
        system("CLS");
        cout<<"\tEnter degree( 2-4 )/no. of elements of routh array\n";
        cout<<"\t\tPress 1 to exit\n";
        cin>>ch;
        switch (ch)
        {
        case 2:
            quad();
            break;
        case 3:
            cubic();
            break;
        case 4:
            four();
            break;
        case 1:
            exit(0);
        default:
            cout << "\a";
        }
    } while (ch != 1);

}
