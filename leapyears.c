#include <stdio.h>

int checkLeapYear(int year){
    if( (year % 400==0)||(year%4==0 && year%100!=0) )
        return 1;
    else
        return 0;
}
 
int main(){
    int year,minor,major;
 
    printf("Enter the range of years (from ?...): ");
    scanf("%d",&minor);
    printf("(... to ?): ");
    scanf("%d",&major);
    
    printf("Leap years from %d to %d:\n",minor,major);
    for(year=minor;year<=major;year++){
        if(checkLeapYear(year))
            printf("%d\t",year);
    }
     
    return 0;
}
