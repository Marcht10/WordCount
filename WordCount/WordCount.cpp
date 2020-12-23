#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int cnt,word;
	char ch;
	char filename[80];
	FILE *fp;
	strcpy(filename,argv[2]);
	fp=fopen(filename,"r");
	cnt=0;
	word=0;
	if(strcmp(argv[1],"-c")==0||strcmp(argv[1],"-C")==0)
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			cnt++;
		}
		printf("×Ö·ûÊý£º%d\n",--cnt);
	}
	else if(strcmp(argv[1],"-w")==0||strcmp(argv[1],"-W")==0)
	{
		while(!feof(fp))
		{
			ch=fgetc(fp);
			if(ch==' '||ch==',')
			{
				word=0;
			}
			else if(word==0)
			{
				word=1;
				cnt++;
			}
		}
		printf("µ¥´ÊÊý£º%d\n",cnt);
	}
}