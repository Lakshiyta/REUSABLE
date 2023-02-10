#include <stdio.h>
#include <stdlib.h>

int main()
{
    // string is the string to be checked for palindrome
	char str[] = "MADAM IN EDEN, I'M ADAM";
	int l = sizeof(str);
	char rev[l + 1];
	int i = l - 2;
	// while loop to reverse the string
	while (i >= 0) {
		rev[l - i - 2] = str[i];
		i--;
	}
	// compare the initial string and reversed string
	int res = 0;
	if (res == 0) {
		printf("%s is a Palindrome\n", str);
	} else {
		printf("%s is not a Palindrome\n", str);
	}
}
