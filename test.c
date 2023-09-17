#include <stdio.h>
#include <unistd.h>

int main(){
    void ft_putchar(char c){
        write(1,&c,1);
    };

    int i = 97;
    while(i < 123){
        ft_putchar(i);
        ft_putchar('\n');
        i++;
    };
        

};