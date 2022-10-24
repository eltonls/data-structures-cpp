#include<iostream>

void toLowercase(char string[]) {
  for(int i; string[i] != '\0'; i++) {
    if(string[i] >= 90 && string[i] <= 122){
      string[i] = string[i] - 32;
    }
  }
}

int main (int argc, char *argv[])
{
  char name[] = "ANABELLE";

  toLowercase(name);
  
  return 0;
}
