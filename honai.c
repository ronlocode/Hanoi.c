// practice function recursive with Hamoi
#include<stdio.h>

void move();

int main(void) {
    int number;
    printf("Input the numbers of disk: "); // prompt
    scanf("%d", &number);
    move(number,1,3,2);
} // end function main

void move(int num , int start , int end , int pass) { // from "start" to "end" passby "pass"
    static int step = 0;
    if(num==1){
        ++step;
        printf("Step %d: ", step);
        printf("Move %d from %d to %d.\n", num , start , end);
        return;
    }
    move(num-1 , start , pass , end); // move from "start" to "pass"
    ++step;
    printf("Step %d: ", step);
    printf("Move %d from %d to %d.\n", num, start, pass);
    move(num-1 , pass , end , start); // move from "pass" to "end"
}