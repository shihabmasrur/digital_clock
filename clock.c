#include <stdio.h>
#include <windows.h>

int main(){
    int h,m,s;
    int d=1000; // this is gonna add a delay for the changing numbers.
    printf("Set Time: \n"); // This is to initialize the time.
    scanf("%d%d%d",&h,&m,&s);
    if (h > 12 || m > 60 || s > 60){
        printf("ERROR!");
        exit(0);
    } // This makes sure the initialization of the time is not invalid.

    while(1){ // this is and infinite loop to run the clock.
        s++; //takes the initial value and increments
        if(s>59){ // when the value of s is 60 the m starts incrementing and the value of s starts over from 0.
            m++;
            s=0;
        }
        if(m>59){ // when the value of m is 60 the h starts incrementing and the value of m starts over from 0.
            h++;
            m=0;
        }
        if (h>12){ // when the value of h is more than 12 it starts over from 1.
            h = 1;
        }
        printf("Clock: \n");
        printf("%02d : %02d : %02d",h,m,s);
        Sleep(d); // The function sleeps adds delay to the while loop and makes it look more real.
        system("cls"); // This clears the screen.Other wise it would print every line separately.
    }
    return 0;
}
