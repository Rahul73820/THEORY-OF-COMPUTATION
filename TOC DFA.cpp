#include<stdio.h>
#include<string.h>
#define max20
int main()
{
	int trans_table[4][2]={{1,3},{1,2},{1,2},{3,3}};
	int final_state=2;
	int present_state=0;
	int next_state=0;
	int invalid=0;
	char input_string[max];
	printf("enter a string:");
	scanf("%s",input_string);
	int l=strlen(input_string);
	for(int i=0;i<l;i++)
	{
		if(input_string[i]=='a')
		next_state=trans_table[present_state][0];
		elseif(input_string[i]=='b')
		next_state=trans_table[present_state][1];
		else
		invalid=l;
		present_state=next_state;
	}
	if(invalid==1)
	{
		printf("invalid input");
	}
	else if(present_state==final_state)
	printf("Accept/n");
	else
	printf("dont Accept/n");
	
	return 0;
	}
		
	}
	
}
