#include <stdio.h>
#include <string.h>
void solve(char *s){
    int freq[10] = {0};
    int i;
    for( i = 0; i < strlen(s); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            freq[s[i] - '0']++ ; 
			printf("\n => %d",s[i]); 
			printf("\n\t%d",freq[s[i] - '0']);  
        }
    }
    for( i = 0; i<10; i++){
        if(freq[i] > 0)
            printf(" %d", freq[i]);
    }
}
int main(){
    char s[10000];
    scanf("%s",&s);
    solve(s);
}
