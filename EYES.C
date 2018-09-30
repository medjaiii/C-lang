#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm,a,b;
union REGS i,o;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
box();
loading();
o.x.cx=200;
o.x.dx=270;
while(1)
{
cleardevice();
i.x.ax=3;
int86(0x33,&i,&o);
setfillstyle(1,15);
fillellipse(200,270,80,45);
fillellipse(420,270,80,45);
settextstyle(5,0,4);
outtextxy(10,40,"BEWARE U ARE BEING WATCHED HERE ");
outtextxy(150,400,"USE       MOUSE");
floodfill(200,270,15);
floodfill(420,270,15);
setcolor(4);
setfillstyle(1,0);
circle((o.x.cx),(o.x.dx),15);
circle((o.x.cx)+220,(o.x.dx),15);
floodfill((o.x.cx),(o.x.dx),4);
floodfill((o.x.cx)+220,(o.x.dx),4);
delay(1000/10);

if(kbhit())
exit();
}

closegraph();
}

int box()
{
 {
 settextstyle(8,0,2);
 setfillstyle(1,4);
 rectangle(10,10,629,469);
 floodfill(5,5,15);
 rectangle(20,20,619,459);
 setfillstyle(10,6);
 rectangle(150,100,489,329);
 floodfill(600,400,15);
 floodfill(320,240,15);
 outtextxy(220,180,"THIS IS A MOUSE ");
 outtextxy(190,200,"ORIENTED PROGRAM");
 outtextxy(220,220,"PRESS ENTER");
 getch();
 sound(800);
 delay(180);
 nosound();
 cleardevice();
 return 0;
  }


}

int loading()
{
int i,bh=0,a=9;
cleardevice();
setcolor(15);
setbkcolor(0);

 for(i=0;i<a;i++)
 {
 outtextxy(200,200,"LOADING ....");
 rectangle(202+bh,252,220+bh,253);
 bh=bh+30;
  delay(600);

}
return 1;

}
