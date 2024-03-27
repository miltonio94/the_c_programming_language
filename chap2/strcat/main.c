#include <stdio.h>

void strcat_(char s[], char t[]);

int main() {
  char str1[40] = "hahahaha";
  char str2[10] = "hehehe";

  printf("I'm about to cat the string \n");
  strcat_(str1, str2);
  printf("string cat done\n");

  printf("%s", str1);
}

void strcat_(char s[], char t[]) {
  int i, j;
  i = j = 0;

  while (s[i] != '\0')
    ++i;
  while ((s[i++] = t[j++]) != '\0')
    ;
}
