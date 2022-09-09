#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
FILE *file;
//char ch, *line;
size_t len = 0, read;
char words[10][10], word[20];
int i = 0, j, k, maxCount = 0, count;
file = fopen("such.txt","r");
if (file == NULL)
{
printf("File not found");
exit(7);
}
while(fgets(word,sizeof(word),file)!=NULL)
//while ((read = getline(&line, &len, file)) != -1)
{

for(k=0; word[k]!='\0'; k++){
if(word[k] != ' ' && word[k] != '\n' && word[k] != ',' && word[k] != '.' ){
words[i][j++] = tolower(word[k]);
}
else{
words[i][j] = '\0';
//Increment row count to store new word
i++;
//Set column count to 0
j = 0;
}
}
}
int length = i;
//Determine the most repeated word in a file
for(i = 0; i < length; i++){
count = 1;
//Count each word in the file and store it in variable count
for(j = i+1; j < length; j++){
if(strcmp(words[i], words[j]) == 0 && (strcmp(words[i]," ") != 0)){
count++;
}
}
//If maxCount is less than count then store value of count in maxCount
//and corresponding word to variable word
if(count > maxCount){
maxCount = count;
strcpy(word, words[i]);
}
}



printf("Maximum Word which appeared is : %s\n",word);
printf("Count of word %s:%d\n",word,maxCount);



fclose(file);



return 0;
}
