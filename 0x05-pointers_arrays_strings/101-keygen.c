/**
 * generate_password -it generates randome passwords
 * @length: this is an entry
 * @password: this is the second entry.
 */

#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <time.h>

void generate_password(char *password, int length)
{
	const char valid_chars[] = "abcdefghijklmnopqrstuvwxyxABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	srand(time(NULL));

	for (int i = 0; i < length; i++)
	{
		int random_index = rand() % (sizeof(valid_chars) - 1);
		password[i] = valid_chars[random_index];
	}

	password[length] = '\0';
}
