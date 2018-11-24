#include<graphics.h>
#include<iostream.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<dos.h>
#include<bios.h>
int x=10;
int cX,cY, ySpeed, xSpeed, radius, colour,key;
int px=540,count=0;
char ch,l;

	void display()
	 {outtextxy(20,50,"press y to exit");

	 setfillstyle(1,colour);
	 fillellipse(cX, cY, radius, radius);
setfillstyle(1,GREEN);

int points[]={px,480,px,460,px+100,460,px+100,480};
 fillpoly(4,points);

	  }


	void move()
	{
      cX += xSpeed;
  cY += ySpeed;
      if (cX+20 >640 || cX-20 < 0)
      {  xSpeed *= -1;  cX += xSpeed;
	 }
      if (cY-20 <0)
      {  ySpeed *= -1;  cY += ySpeed;
	 }
if(cY+40>=480)
{
    if(cX>px && cX<px+100)
       {ySpeed *= -1;
  cY += ySpeed;
count++;
colour++;
}
else
	  {cY=440;
settextstyle(11,0,1);
	    outtextxy(100, 100, "U MISS");
	  }
       }
	 }
int main( )
    {

srand(time(0));
    int gm,gd=DETECT;
    initgraph(&gd,&gm,"c:\\tc\\BGI");
radius =20;
	xSpeed =  ySpeed = 5;
	 cX = 50; cY = 50;
		colour =4;
		settextstyle(11,0,1);
		cout<<"hello world";
		outtextxy(0,50,"PADDLE BALL GAME");
		outtextxy(0,100,"THIS PROJECT IS PRESENTED BY NANDAN.S.NADKARNI PRESS 'S' TO START THE GAME");
		l=getch();
		if(l=='s')
		{

    while(x==10)



      {ch='i';
if(!kbhit())
{

}
else
{ch=getch();
}
if(ch==77)
{
px+=10;
}
else if(ch==75)
{
px-=10;
}
if(ch=='y')
{break;

}
	    if(px<0)
	     {px=0;
	      }
	     else if(px>540)
	     {px=540;
	       }
	       else
	       {
	       }
	   delay(75);
	  cleardevice();
	  move();
	  display();
if(count==3)
{xSpeed=8;
ySpeed=8;
px+=2;
}
if(count==8)
{xSpeed=12;
ySpeed=12;
px+=3;
}
}
      }
closegraph();

      return 0;
  }