//BOGDAN ZNAK   CS2164
#include <stdio.h>


int main()
{
	///***************WORD CIPHER*****************
	//Asks for input
	char wordToCipher[100];
	int letterCipherOffSet = 0;
	printf("***************WORD CIPHER***************\n");
	printf("Please enter your word to cipher in lowercase letters.\n");
	scanf("%s", &wordToCipher);
	printf("Please enter the number of the letter offset.\n");
	scanf("%i", &letterCipherOffSet);
	//Changes offset number to 0-26 range
	if (letterCipherOffSet > 26)
	{
		int fixCipherOffset = letterCipherOffSet / 26;
		letterCipherOffSet = letterCipherOffSet - 26 * fixCipherOffset;
	}
	//Prints the input word
	printf("\nWord to cipher is... %s\n", wordToCipher);
	printf("Offset number to cipher is... %i\n", letterCipherOffSet);

	//Prints the ciphered word 
	printf("\nThe ciphered word is ...");
	int i = 0;
	int cipherLetter = 0;
	while (wordToCipher[i]<123 && wordToCipher[i]>96)
	{
		int cipherLetter = wordToCipher[i];
		cipherLetter += letterCipherOffSet;
		if (cipherLetter > 122)
		{
			cipherLetter -= 26;
		}
		
		printf("%c", cipherLetter);
		i++;
	}
	printf("\n\n");

	//**********************WORD DECIPHER***********************
	char wordToDecipher[100];
	int letterDecipherOffSet = 0;
	printf("***************WORD DECIPHER***************\n");
	printf("Please enter your word to decipher in lowercase letters.\n");
	scanf("%s", &wordToDecipher);
	printf("Please enter the number of the letter offset.\n");
	scanf("%i", &letterDecipherOffSet);
	//Changes offset number to 0-26 range
	if (letterDecipherOffSet > 26)
	{
		int fixDecipherOffset = letterDecipherOffSet / 26;
		letterDecipherOffSet = letterDecipherOffSet - 26 * fixDecipherOffset;
	}
	//Prints the input word
	printf("\nWord to decipher is... %s\n", wordToDecipher);
	printf("Offset number to decipher is... %i\n", letterDecipherOffSet);

	//Prints the deciphered word 
	printf("The deciphered word is ...");
	i = 0;
	int decipherLetter;
	while (wordToDecipher[i]<123 && wordToDecipher[i]>96)
	{
		decipherLetter = wordToDecipher[i];
		decipherLetter -= letterDecipherOffSet;

		if (decipherLetter < 97)
		{
			decipherLetter += 26;
		}
		printf("%c", decipherLetter);
		i++;
	}
	printf("\n\n");
	
    return 0;
}

