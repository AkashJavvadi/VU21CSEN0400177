#include<stdio.h>
main()
{
	char a;
	printf("enter a character ");
	scanf("%c",&a);
	switch(a)
	{  
	  case 'a':
	  	case 'e':
	  		case 'i':
	  			case 'o':
	  				case 'u':
	  					case 'A':
	  						case 'E':
	  							case 'I':
	  								case 'O':
	  									case 'U':
	  										     printf("entered character is vowel");
	  										            break;
	  										    default:
												          printf("entered character is consonant");
	}
}
