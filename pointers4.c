#include <stdio.h>

int main (void)
{
	char string[100];
	char substring[100];
	char *string_ptr = string;
	char *substring_ptr = substring;
	int substring_length = 0;
	int combination = 0;

	printf("Enter a string: ");
	fgets(string, sizeof(string), stdin);
	printf("Enter a substring: ");
	fgets(substring, sizeof(substring), stdin);
	
	for (int i = 0; i < 100; i++){								//cycle for counting elements in substring		
		if (*substring_ptr != '\n'){
			substring_length++;
			substring_ptr++;
		}
		else{
			break;
		}
	}
	
	substring_ptr = substring;								
	
	while (combination != substring_length && *string_ptr != '\n'){				//cycle for finding a substring		
		if (*substring_ptr == *string_ptr){
			combination++;
			substring_ptr++;
			string_ptr++;
		}
		else{
			combination = 0;
			substring_ptr = substring;
			string_ptr++;
		}
	}
	
	if (combination == substring_length){
		string_ptr = string_ptr - combination;
		printf("Substring address: %p\n", string_ptr);
	}
	else{
		string_ptr = NULL;
		printf("Substring is not finded\n");
	}
}
