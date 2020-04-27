#include <stdio.h>

main(void)

{ char s[80];
	int i;
	scanf("%s",s);
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='A' && s[i]<='Z') s[i]+=32;
	printf("%s\n",s);
	printf("%d", strlen(s));
}
