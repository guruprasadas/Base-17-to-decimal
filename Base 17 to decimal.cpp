#include <iostream>
#include <math.h>
#include <string.h>

using namespace std;

int main()
{
  int len, val, i=0;
  char hex[17];
  long decimal;
  
  len = strlen(hex);
  len--;
  for(i = 0; hex[i]!="\0";i++)
  {
    if(hex[i] >= "0" && hex[i] <= "9")
    {
      val = hex[i] - 48;
    }
    
    else if(hex[i] >= "A" && hex[i] <= "G")
    {
      val = hex[i] - 65+10;
    }
    decimal = decimal + val*pow(17,len);
    len--;
  }
  cout<<decimal;
  return 0;
}

