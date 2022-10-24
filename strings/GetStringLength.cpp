#include<iostream>

int getStringLength(char string[]) 
{
    int length;
    
    for(length = 0; string[length] != '\0'; length++);
    
    return length;
}

int main()
{
    char name[] = "elton";
    
    int stringLength = getStringLength(name);
    
    std::cout << stringLength << std::endl;

    return 0;
}

