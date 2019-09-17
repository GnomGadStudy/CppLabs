#include <cstdio>
#include "Ex1.3.h"

void Ex1_3::Start()
{
    char str[120];
    printf("Write the text:\n");
    scanf("%s[^\n]",str);

    int key = -1;
    printf("Write the number:\n");
    scanf("%d",&key);

    printf("Result: ");
    char* out = strchr(str,key);
}

char* Ex1_3::strchr(const char* s,int c)
{
    if(c==-1) return nullptr;
    char ch = static_cast<char>(c);
    
    int i = 0;
    for (;s[i]!='\0'&&s[i]!=ch;i++);

    int count = 0;
    for(int j = i;s[j]!='\0'&&s[j]!=' ';j++,count++);

    char* chars = new char[count];
    for(int j =0;j<count;j++)
        chars[j] = s[i++];

    for(int j =0;j<count;j++)
        printf("%c",chars[j]);

    return chars;
}