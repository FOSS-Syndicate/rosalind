#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int hamming_distance_counter();

int main(){
    char s_string[65536], t_string[65536];
    printf("Enter The s string: ");
	fgets(s_string, 65536, stdin);
    printf("Enter The t string: ");
	fgets(t_string, 65536, stdin);
    int hamming_distance = hamming_distance_counter(s_string, t_string);
    printf("Hamming Distance: %d\n",hamming_distance);
}

int hamming_distance_counter(char s_string[], char t_string[]){
    int hamming_distance = 0;
    if(strlen(s_string) != strlen(t_string)){
        printf("s and t doesn't match\n");
    }
    else if(strlen(s_string) == strlen(t_string)){
        for(int i = 0;i < strlen(s_string);i++){
            if (s_string[i] != t_string[i]){
                hamming_distance++;
            }
        }
    }
    return hamming_distance;
}