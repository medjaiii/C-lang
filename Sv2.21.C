#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

#define keyup       77
#define keydown     80
#define keyleft     72
#define keyright    75

  static  int q[3]={230,280,260},anuj=0;
   static int i;
   static int an;
   static int j,po,su,jj,dd,uu,ee;
   extern int jj,ee,uu,dd,su,po,j,i;

int main()
 { int as=0;
int gd=DETECT,gm,err;
clrscr();
err=graphresult();
if(gd!=0)
{
printf("graphics error %s",grapherrormsg(err));
getch();
exit(1);
}
initgraph(&gd,&gm,"C:\\tc\\BGI");
box();
start:
suit();
enemy();
goto start;
getch();
closegraph();
return 0;

}


int suit()
{
static int j,p,a,o,s,e=0,z=320,x=320;
char w;
static char i[1]={10};
sound(25);
start:
settextstyle(0,0,0);
setfillstyle(1,YELLOW);
outtextxy(10,10,"press P to quit");
outtextxy(250,10,"Created By 'ANUJ'");
outtextxy(540,10,"score");
outtextxy(600,10,i);
rectangle(0,0,639,479);
rectangle(5,5,634,474);
floodfill(2,2,15);
outtextxy(30,30,".");
outtextxy(90,90,".");
outtextxy(150,150,".");
outtextxy(200,200,".");
outtextxy(250,250,".");
outtextxy(300,300,".");
outtextxy(350,350,".");
outtextxy(400,400,".");
outtextxy(450,450,".");
outtextxy(100,30,".");
outtextxy(170,30,".");
outtextxy(240,30,".");
outtextxy(310,30,"." );
outtextxy(380,30,".");
outtextxy(460,30,".");
outtextxy(530,30,".");
outtextxy(600,30,".");
outtextxy(160,90,".");
outtextxy(230,90,".");
outtextxy(300,90,".");
outtextxy(370,90,".");
outtextxy(440,90,".");
outtextxy(510,90,".");
outtextxy(580,90,".");
outtextxy(220,150,".");
outtextxy(290,150,".");
outtextxy(360,150,".");
outtextxy(430,150,".");
outtextxy(500,150,".");
outtextxy(570,150,".");
outtextxy(270,200,".");
outtextxy(340,200,".");
outtextxy(410,200,".");
outtextxy(480,200,".");
outtextxy(550,200,".");
outtextxy(620,200,".");
outtextxy(320,250,".");
outtextxy(370,300,".");
outtextxy(410,350,".");
outtextxy(470,400,".");
outtextxy(520,450,".");
outtextxy(390,250,".");
outtextxy(440,300,".");
outtextxy(490,350,".");
outtextxy(540,400,".");
outtextxy(460,250,".");
outtextxy(510,300,".");
outtextxy(560,350,".");
outtextxy(610,400,".");
outtextxy(530,250,".");
outtextxy(580,300,".");
outtextxy(630,350,".");
outtextxy(600,250,".");
outtextxy(570,450,".");
outtextxy(620,450,".");
outtextxy(30,30,".");
outtextxy(30,90,".");
outtextxy(30,150,".");
outtextxy(30,200,".");
outtextxy(30,250,".");
outtextxy(30,300,".");
outtextxy(30,350,".");
outtextxy(30,400,".");
outtextxy(30,450,".");
outtextxy(90,150,".");
outtextxy(90,200,".");
outtextxy(90,250,".");
outtextxy(90,300,".");
outtextxy(90,350,".");
outtextxy(90,400,".");
outtextxy(90,450,".");
outtextxy(150,200,".");
outtextxy(150,250,".");
outtextxy(150,300,".");
outtextxy(150,350,".");
outtextxy(150,400,".");
outtextxy(150,450,".");
outtextxy(200,250,".");
outtextxy(200,300,".");
outtextxy(200,350,".");
outtextxy(200,400,".");
outtextxy(200,450,".");
outtextxy(250,300,".");
outtextxy(250,350,".");
outtextxy(250,400,".");
outtextxy(250,450,".");
outtextxy(300,350,".");
outtextxy(300,400,".");
outtextxy(300,450,".");
outtextxy(350,400,".");
outtextxy(350,450,".");
outtextxy(400,450,".");
an=310+e;j=429;p=330+e;o=474,s=340+e,a=300+e;
setfillstyle(1,4);
rectangle(an,j,p,o);
rectangle(316+e,419,324+e,429);
rectangle(p,449,s,o);
rectangle(a,449,an,o);
floodfill(an+10,435,15);
setfillstyle(6,BLUE);
floodfill(p+3,450,15);
floodfill(a+3,450,15);
setfillstyle(1,YELLOW);
floodfill(318+e,420,15);
setfillstyle(1,4);
rectangle(319+e,412,321+e,419);
floodfill(320+e,417,15);
if(kbhit())
w=getch();
switch(w)
{

case 97:
{ cleardevice();
z=z-20;
x=x-20;
e=e-20;
break;
}
case 100:
{
cleardevice();
z=z+20;
x=x+20;
e=e+20;
break;
}
case 32:
{
bullet(z,x);
break;
}

case 112:
{
nosound();
exit(1);
}
default :
{w='0';
break;
}

}

return 0;
}

int bullet(g,h)
{
static int apple,b,id0,j,t,s,u,anna,po,su,l,kl;
static char w;
u=420;
l=439;
while(u>0)
{

sound(u);
u=u-20;
l=l-20;
outtextxy(10,10,"press P to quit");
outtextxy(250,10,"Created By 'ANUJ'");
rectangle(g,u,h,l);
rectangle(0,0,639,479);
rectangle(5,5,634,474);
delay(5);
}
if((an==(q[i]-10))||(an==(q[i]+10))||(an==q[i])||(an==q[jj])||(an==(q[jj]-10))||(an==(q[jj]+10)))
{
 i++;
 jj++;
 anuj=anuj+10;
 enemy();
}
return 0;
}

 int box ()
 {
 int anuj=10;
 gotoxy(44,13);
 settextstyle(8,0,2);
 setfillstyle(1,4);
 rectangle(10,10,629,469);
 floodfill(5,5,15);
 rectangle(20,20,619,459);
 setfillstyle(1,BLUE);
 rectangle(150,100,489,329);
 floodfill(600,400,15);
 outtextxy(180,180,"START NEW GAME");
 outtextxy(180,200,"PRESS ENTER");
 outtextxy(180,220,"PRESS 'P' TWICE TO QUIT");
  for(anuj=anuj+20;anuj<200;anuj++)
 {
 sound(anuj);
 delay(10);
 nosound();
 }

 getch();
 sound(800);
 delay(180);
 nosound();
 cleardevice();
 return 0;
  }



int enemy()
{

 int anna=0;static char w;
 int an[23]={10,30,50,70,90,110,130,150,170,190,210,230,250,270,290,310,330,350,370,390,410,430,450};

{
switch(i)
{
case 0:
{
for(;j<23;)
{
rectangle(0,0,639,479);
rectangle(5,5,634,474);
outtextxy(10,10,"press P to quit");
outtextxy(250,10,"Created By 'ANUJ'");
outtextxy(q[i],an[j],"###");
j++;
delay(100);
sound(800);
delay(30);
nosound();
cleardevice();
if(an[j]==450)
{
sound(1200);
delay(300);
nosound();
over();
}
suit();
}
i++;
break;
}
case 1:
{
for(;po<=23;)
{
rectangle(0,0,639,479);
rectangle(5,5,634,474);
po++;
outtextxy(10,10,"press P to quit");
outtextxy(250,10,"Created By 'ANUJ'");
outtextxy(q[i],an[po],"{###}");
delay(100);
sound(800);
delay(30);
nosound();
cleardevice();
if(an[po]==450)
{
sound(1200);
delay(300);
nosound();
i++;
over();
}
suit();
}
break;
}
case 2:
{
for(;su<=23;)
{
rectangle(0,0,639,479);
rectangle(5,5,634,474);
su++;
outtextxy(10,10,"press P to quit");
outtextxy(250,10,"Created By 'ANUJ'");
outtextxy(q[i],an[su],"###");
delay(100);
sound(800);
delay(30);
nosound();
cleardevice();
if(an[su]==450)
{
sound(1200);
delay(300);
nosound();
}
suit();
}
i++;
i++;
break;
}
default :i--;i--;i--;
	 anna=j;
	 j=j-po;
	 po=po-su;
	 su=su-anna;
	 enemy();
	 break;
}
}
return 0;
}


int over()
{  int n;
cleardevice();
settextstyle(8,0,2);
 setfillstyle(1,4);
 rectangle(10,10,629,469);
 floodfill(5,5,15);
 rectangle(20,20,619,459);
 setfillstyle(1,1);
 circle(140,250,100);
 floodfill(140,250,15);
 setfillstyle(1,4);
 circle(100,230,20);
 floodfill(100,215,15);
 circle(180,230,20);
 floodfill(180,215,15);
 setfillstyle(1,0);
 circle(100,240,8);
 floodfill(100,240,15);
 circle(180,240,8);
 floodfill(180,240,15);
 ellipse(140,250,200,340,85,85);
 ellipse(140,250,200,340,80,80);
outtextxy(300,230,"GAME OVER");
delay(2);
outtextxy(300,250,"PRESS 'X' TO RESTART");
outtextxy(300,270,"PRESS 'Q' TO QUIT");
printf("your score %d ",anuj);
n=getch();
switch(n)
{
case 120:
{
main();
break;
}
case 113:
{
nosound();
exit(1);
break;
 }
 default :
 {
 over();
 break;
 }
 }
return 0;
}














