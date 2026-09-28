 #include<stdio.h> // check a character enter from keyboard if vowel or consonant
 int main(){
     char ch;
     printf("Enter character:");
     scanf("%c",&ch);
     switch(ch){
case 'a': 
case 'e': 
case 'i': 
case 'o': 
case 'u': 
printf("vowel");
break;
default: printf("consonant ");}

return 0;}