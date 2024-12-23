// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    printf("hello");
    char str[50];
    printf("Enter the string: ");
    scanf("%s",str);
    int a_count = 0,i=0;
    while(str[i]=='a'){
        i++;
        a_count++;
    }
    if(str[i]=='b' && str[i+1]=='b' && str[i+2]=='\0'){
        printf("Valid String");
    }else{
        printf("Invalid Stirng");
    }
    return 0;
}