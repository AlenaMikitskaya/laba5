//Вариант 3. Поменять местами в тексте первое слово и последнее.

#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int Index_of_the_first_word(char Str[], int length)
{
    int IndFirst=0;
    for (int i=0; i<length; i++)
    {
       if (Str[i]==' ')
       {
          IndFirst=i-1;
          i=length-1;
       }
    }
    return IndFirst;
}

int Index_of_the_last_word(char Str[], int length)
{
    int IndLast=length;
    for (int i=length; i>0; i--)
    {
       if (Str[i]==' ')
       {
          IndLast=i+1;
          i=1;
       }

    }
    return IndLast;
}

int main()
{
    const int N=256;
    char Str[N];
    cout<<"Enter the string: "<<endl;
    gets(Str);
    const int length=strlen(Str);
    int IndFirst=Index_of_the_first_word(Str, length);
    int IndLast=Index_of_the_last_word(Str, length);

    char StrNew[length];
    int i=0;
    int j=IndLast;
    while (i<=length)
    {
        StrNew[i]=Str[j];
        if (j<length-1)
       {
        i++;
        j++;
       }
       else
       {
           if (j==length-1)
           {
               i++;
               j=IndFirst+1;
           }
       }
       if (j==IndLast)
       {
           j=0;
       }

    }
    cout<<endl<<"The new string:"<<endl<<StrNew;
    return 0;
}
