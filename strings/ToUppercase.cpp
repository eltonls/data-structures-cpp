#include<iostream>

// Change whole string to uppercase
void toUppercase(char string[]) { 
  for(int i = 0; string[i] != '\0'; i++) {
    if(string[i] >= 65 && string[i] >= 90) {
      string[i] = string[i] + 32;
    }
  } 

}

int main (int argc, char *argv[])
{
  char name[] = "GOHAN";

  toUppercase(name);
  
  return 0;
}
