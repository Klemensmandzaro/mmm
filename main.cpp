#include <iostream>
#include <Windows.h>
#include <conio.h>
#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
using namespace std;
void set_cursor(int,int);
void druk(int,int,int,int);

int a=5, b=5;
int alfa=0;
int main() {
    int x=0 , y=4;
    int c;
    system("cls");
    druk( a, b ,x, y);
    while (true) {
        set_cursor(x, y);
        switch (c = getch()) {
            case KEY_UP:
                y -= 1;
                system("cls");

                druk( a, b ,x, y);
                break;
            case KEY_DOWN:
                y += 1;
                system("cls");

                druk( a, b ,x, y);
                break;
            case KEY_LEFT:
                x -= 1;
                system("cls");

                druk( a, b ,x, y);
                break;
            case KEY_RIGHT:
                x += 1;
                system("cls");

                druk( a, b ,x, y);
                break;
            case '+':
                a+=2;
                b+=2;
                system("cls");
                druk( a, b ,x, y);
                break;
            case '-':
                a-=2;
                b-=2;
                system("cls");
                druk( a, b ,x, y);
                break;
            case '<':
                alfa-=90;
            case '>':
                alfa+=90;
        }
    }
    return 0;
}

void set_cursor(int x = 0 , int y = 0)
{
    HANDLE handle;
    COORD coordinates;
    handle = GetStdHandle(STD_OUTPUT_HANDLE);
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition ( handle , coordinates );
}

void druk(int a,int b, int x, int y)
{
    for (int i=0; i<y-a+1; i++)
    {
       cout<<endl;
    }
    for (int i=1; i<=b; i++)
    {
        for (int j=0; j<x; j++)
        {
            cout<<" ";
        }

        for (int j=1; j<=a; j++)
        {
            if ((a-i>(a/2) && a-i+1==j) || j==a || j==1 || (j==i && i<(a/2)+2))
            {
                cout<<"M";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;

    }
}

void pozycja(int c, int d)
{
    int f=c-a;
    int g=d-b;
    for (int i=0; i<g; i++)
    {
        cout<<endl;
    }
    for (int j=0; j<f; j++)
    {
        cout<<" ";
    }
}