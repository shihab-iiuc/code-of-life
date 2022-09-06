#include<bits/stdc++.h>
#include<windows.h>
#include<conio.h>
using namespace std;
void gotoxy(int x, int y)
{
  static HANDLE h = NULL;
  if(!h)
    h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c);
}
int main()
{
    int time=50;
    //S
    for(int i=15;i>=2;i--)
    {

     Sleep(time);
    gotoxy(i,6);
    cout<<" ";fflush(stdout);
    gotoxy(i,6);
    cout<<"*";fflush(stdout);

    }

    for(int j=1;j<=3;j++)
    {
    Sleep(time);
    gotoxy(2,6+j);
    cout<<" ";fflush(stdout);
    gotoxy(2,6+j);
    cout<<"*";fflush(stdout);

    }
    for(int i=2;i<=15;i++)
    {

    Sleep(time);
    gotoxy(i,9);
    cout<<" ";fflush(stdout);
    gotoxy(i,9);
    cout<<"*";fflush(stdout);

    }


    for(int j=1;j<=3;j++)
    {
    Sleep(time);
    gotoxy(15,9+j);
    cout<<" ";fflush(stdout);
    gotoxy(15,9+j);
    cout<<"*";fflush(stdout);

    }
    for(int i=15;i>=2;i--)
    {

     Sleep(time);
    gotoxy(i,13);
    cout<<" ";fflush(stdout);
    gotoxy(i,13);
    cout<<"*";fflush(stdout);

    }
    //H
    for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(18,j+5);
    cout<<" ";fflush(stdout);
    gotoxy(18,j+5);
    cout<<"*";fflush(stdout);


    }
    for(int i=1;i<=8;i++)
    {
    Sleep(time);
    gotoxy(18+i,9);
    cout<<" ";fflush(stdout);
    gotoxy(18+i,9);
    cout<<"*";fflush(stdout);

    }
     for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(26,j+5);
    cout<<" ";fflush(stdout);
    gotoxy(26,j+5);
    cout<<"*";fflush(stdout);


    }
     for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(30,j+5);
    cout<<" ";fflush(stdout);
    gotoxy(30,j+5);
    cout<<"*";fflush(stdout);


    }

    for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(33,j+5);
    cout<<" ";fflush(stdout);
    gotoxy(33,j+5);
    cout<<"*";fflush(stdout);


    }
    for(int i=1;i<=8;i++)
    {
    Sleep(time);
    gotoxy(33+i,9);
    cout<<" ";fflush(stdout);
    gotoxy(33+i,9);
    cout<<"*";fflush(stdout);

    }
     for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(41,j+5);
    cout<<" ";fflush(stdout);
    gotoxy(41 ,j+5);
    cout<<"*";fflush(stdout);


    }
    //A
    for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(54-j,5+j);
    cout<<" ";fflush(stdout);
    gotoxy(54-j ,5+j);
    cout<<"*";fflush(stdout);


    }
    for(int i=1;i<=8;i++)
    {
      Sleep(time);
    gotoxy(50+i,9);
    cout<<" ";fflush(stdout);
    gotoxy(50+i,9);
    cout<<"*";fflush(stdout);
    }
     for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(54+j,5+j);
    cout<<" ";fflush(stdout);
    gotoxy(54+j ,5+j);
    cout<<"*";fflush(stdout);
    }
      for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(65,j+5);
    cout<<" ";fflush(stdout);
    gotoxy(65,j+5);
    cout<<"*";fflush(stdout);
    }
      for(int j=1;j<=8;j++)
    {

     Sleep(time);
    gotoxy(65+j,6);
    cout<<" ";fflush(stdout);
    gotoxy(65+j ,6);
    cout<<"*";fflush(stdout);
    }
     for(int j=1;j<=4;j++)
    {

     Sleep(time);
    gotoxy(74,5+j);
    cout<<" ";fflush(stdout);
    gotoxy(74,5+j);
    cout<<"*";fflush(stdout);
    }
     for(int j=8;j>=1;j--)
    {

     Sleep(time);
    gotoxy(74-j,9);
    cout<<" ";fflush(stdout);
    gotoxy(74-j,9);
    cout<<"*";fflush(stdout);
    }
     for(int j=1;j<=4;j++)
    {

     Sleep(time);
    gotoxy(74,9+j);
    cout<<" ";fflush(stdout);
    gotoxy(74,9+j);
    cout<<"*";fflush(stdout);
    }
    for(int j=8;j>=1;j--)
    {

     Sleep(time);
    gotoxy(74-j,13);
    cout<<" ";fflush(stdout);
    gotoxy(74-j,13);
    cout<<"*";fflush(stdout);
    }

    getchar();
    return 0;

}
