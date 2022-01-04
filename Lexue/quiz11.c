char sb[100]={0};
int gettoken(char s[])
{
	int i=0,flag=0,gg=0;
	char c;
	while(!isspace(c=getchar())&&c!=EOF)
	{
		s[i++]=c;
		if(!isdigit(c)&&flag==0)
			if(c!='-')flag=1;
		gg=1; 
	}
	s[i]='\0';
	if(c==EOF)return EOF;
	else if(!gg) return 1;
	else return flag;
}
int ati(char s[])
{
	int i=0;
	for(i=0;s[i]!='\0';++i)
	{
		sb[i]=s[i];
	}
	sb[i]='\0';
	return 1;
}

void ita(int n, char s[])
{
	int i;
	for(i=0;sb[i]!='\0';++i)
	{
		s[i]=sb[i];
	}
	s[i]='\0';
}