#include<iostream>
#include<graphics.h>
#include<math.h>
using namespace std;
int main()
{
    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
    cout<<"1.Translation\n2.Rotation\n3.Scaling\n4.Reflection\n5.Shearing   "<<endl;
    cout<<"Selection:";
    cin>>s;
    switch(s)
        {
        case 1:
            {   int x1=200,y1=150,x2=300,y2=250;
                int tx=50,ty=50;
                cout<<"Rectangle before translation occured"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                setcolor(4);
                cout<<"Rectangle after translation"<<endl;
                rectangle(x1+tx,y1+ty,x2+tx,y2+ty);
                getch();
                break;
            }
        case 2:
            {
			long x1=200,y1=200,x2=300,y2=300;
                double a;
                cout<<"Rectangle with rotation"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"Angle of rotation:";
                cin>>a;
                a=(a*3.14)/180;
                long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
                long yr=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
                setcolor(2);
                rectangle(x1,y1,xr,yr);
                getch();
                  
			break;
}
        case 3:
            {  
			    int x1=30,y1=30,x2=70,y2=70,y=2,x=2;
                cout<<"Before scaling"<<endl;
                setcolor(3);
                rectangle(x1,y1,x2,y2);
                cout<<"After some change"<<endl;
                setcolor(10);
                rectangle(x1*x,y1*y,x2*x,y2*y);
                getch();
			
			break;
}
        case 4:
            {    break;
}
        case 5:
        {
}
default:
          {
            cout<<"Invalid selected menu"<<endl;
            break;
          }
        }
closegraph();
getch();
    return 0;
}

