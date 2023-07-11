#include <stdio.h>
#include <string.h>

void _fgets(char *str, int len);
void get_info(struct phone_survey *user);

/**
 * struct phone_choice - jumpers for user's phone choice
 *
 * @android: android user
 * @iphone: iphone user
 * @other: other
 */
struct phone_choice
{
	int android : 1;
	int iphone : 1;
	int other : 1;
};

/**
 * union phone - phone version
 *
 * @iphone_version: holds the iPhone's version
 * @android_version: holds the Android phone's version
 */
union phone
{
	char iphone_version[20];
	char android_version[20];
};

/**
 * struct phone_survey - a phone survey structure
 *
 * @name: name of user
 * @phone_type: the user's phone type
 * @choice: user's phone choice
 * @phone_version: phone version
 *
 */
struct phone_survey
{
	char name[20];
	char phone_type;
	struct phone_choice choice;
	union phone phone_version;
};

int main(void)
{
	struct phone_survey user1;

	get_info(&user1);

	return (0);
}

/**
 * get_info - get survey info
 *
 * @user: user to collect data from
 */
void get_info(struct phone_survey *user)
{
	puts("Phone Survey...\n");
	printf("First name: ");
	_fgets(user->name, 20);
	puts("\nPhone type.");
	puts("i -> iPhone\na -> Android\no -> Other");
	printf("Choice: ");
	scanf("%c", &user->phone_type);
	getchar();

	if (user->phone_type == 'i')
	{
		printf("iPhone version: ");
		_fgets(user->phone_version.iphone_version, 20);
		user->choice.iphone = 1;
		user->choice.android = 0;
		user->choice.other = 0;
	}
	else if (user->phone_type == 'a')
	{
		printf("Android Version: ");
		_fgets(user->phone_version.android_version, 20);
		user->choice.android = 1;
		user->choice.iphone = 0;
		user->choice.other = 0;
	}
	else if (user->phone_type == 'o')
	{
		puts("Not surveying for other phone types now");
		user->choice.other = 1;
		user->choice.android = 0;
		user->choice.iphone = 0;
		return;
	}
	else
	{
		puts("Invalid choice!");
		return;
	}
}

/**
 * _fgets - fgets wrapper to remove newline character
 * @str: string
 * @len: size of string
 *
 * Return: void. Exits on error.
 */
void _fgets(char *str, int len)
{
	if (fgets(str, len, stdin) == NULL)
		return;
	str[strcspn(str, "\n")] = '\0';
}
