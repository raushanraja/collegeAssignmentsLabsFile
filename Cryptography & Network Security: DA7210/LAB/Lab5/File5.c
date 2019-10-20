// Question 3.
// Write a program to implement Generalized Caesar Cipher

#include<stdio.h>
#include<stdlib.h>
 
void caeserCipher(char message[],int key){
    char ch;
    int i;

    for(i = 0; message[i] != '\0'; ++i){
		ch = message[i];
		
		if(ch >= 'a' && ch <= 'z'){
			ch = (ch+key-97)%26 +97;

			message[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z'){
			ch = (ch+key-65)%26 +65;

			message[i] = ch;
		}
	}
}

int main()
{
	char message[100], ch;
	int i, key,option=0;

    while (option!=3)
    {

        printf("\n1.Encrypt\n2.Decrypt\n3.Exit\nEnter option to perform operation:");
        scanf("%d",&option);

        switch (option)
            {
        case 1:
            printf("\nEnter a message to encrypt: ");
	        scanf("%s",&message);
	        printf("Enter key: ");
	        scanf("%d", &key);
	        caeserCipher(message,key);
	        printf("Encrypted message: %s\n", message);
            break;
        case 2:
            printf("\nEnter a message to decrypt: ");
	        scanf("%s",&message);
	        printf("Enter key: ");
	        scanf("%d", &key);
	        caeserCipher(message,abs(26-key));
	        printf("Encrypted message: %s\n", message);
            break;
        case 3:
            return 0;
        default:
            printf("\nEnter option to perform operation\n1.Encrypt\n2.Decrypt\n3.Exit\n");   
            break;
        }
    }
	
	return 0;
}