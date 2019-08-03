#include<stdio.h>
#include<conio.h>
void main()
{
    char s[1000];
    int k,input[26]={0},total=0;
    clrscr();
    printf("enter the input string:\n");
    gets(s);
    for(k=0;s[k]!='\0';k++){
       if('A'<=s[k] && s[k]<='Z'){
	 total+=!input[s[k]-'A'];
	 input[s[k]-'A']=1;
	}              m
	else if('a'<=s[k] && s[k]<='z'){
	 total+=!input[s[k]-'a'];
	 input[s[k]-'a']=1;
	}
    }
    if(total==26){
	printf("the string is a Pangram.");
    }
    else{
	printf("the string is not a Pangram.");
    }
    getch();
}