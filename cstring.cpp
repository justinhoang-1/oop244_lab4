/*
Name: Justin Hoang
StudentID: 021569132
Class: NBB
*/

#include <iostream>
#include "cstring.h"
namespace sdds {

	void strCpy(char* des, const char* src) {

		char* string = des;
		if (des != nullptr && src != nullptr) {

			while ((*string++ = *src++) != 0);
		}

	}
	void strnCpy(char* des, const char* src, int len) {

		int i;

		for (i = 0; i < len && src[i] != '\0'; i++)
			des[i] = src[i];
		for (; i < len; i++)
			des[i] = '\0';

	}
	int strCmp(const char* s1, const char* s2) {
		int i = 0;
		while (!(i = *s1 - *s2) && *s2) ++s1, ++s2;

		if (i < 0) {
			i = -1;
		}
		else if (i > 0) {
			i = 1;
		}
		return i;
	}
	int strnCmp(const char* s1, const char* s2, int len) {

		int i;
		while (len && *s1 && (*s1 == *s2)) {
			++s1;
			++s2;
			--len;
		}
		if (len == 0) {
			i = 0;
		}
		else {
			i = *s1 - *s2;
		}
		return i;

	}
	int strLen(const char* s) {
		int count = 0;
		while (*s != '\0') {
			count++;
			s++;
		}
		return count;
	}
	const char* strStr(const char* str1, const char* str2) {
		char str, sc;
		int len;

		if ((str = *str2++) != 0) {
			len = strLen(str2);
			do {
				do {
					if ((sc = *str1++) == 0)
						return (NULL);  //need to change
				} while (sc != str);
			} while (strnCmp(str1, str2, len) != 0);
			str1--;
		}
		return ((char*)str1);

	}
	void strCat(char* des, const char* src) {
		int i, j;

		for (i = 0; des[i] != '\0'; i++);
		for (j = 0; src[j] != '\0'; j++)
			des[i + j] = src[j];
		des[i + j] = '\0';

	}


}