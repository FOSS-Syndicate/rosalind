#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char *nucleotide_counter();
int a_count = 0;
int c_count = 0;
int g_count = 0;
int t_count = 0;

int main(){
    char string[65536];
    printf("Enter The DNA string: ");
	fgets(string, 65536, stdin);
    nucleotide_counter(string);
    printf("A: %d, C:%d, G:%d, T:%d\n", a_count, c_count, g_count, t_count);
    return 0;
}

char *nucleotide_counter(char string[]){
    for (int i = 0; i <= strlen(string); i++){
        if (string[i] == 65){a_count++;}
        else if (string[i] == 67){c_count++;}
        else if (string[i] == 71){g_count++;}
        else if (string[i] == 84){t_count++;}
    }
    return 0;   
}