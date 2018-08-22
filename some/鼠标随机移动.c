#include<windows.h>
#include<stdio.h>
#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")
void main()
{
int x,y; 
while(1)
        {x=rand()%801;
         y=rand()%601;
         SetCursorPos(x,y);
        }
return ;
}
