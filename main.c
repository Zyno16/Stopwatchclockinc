#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<conio.h>

int main()
{ int stop_sec=5;
for(;;){
    printf("\r%f",(float)clock()/(float)CLOCKS_PER_SEC);
    if(clock()/CLOCKS_PER_SEC> stop_sec)break;



}

    system("PAUSE");
}
