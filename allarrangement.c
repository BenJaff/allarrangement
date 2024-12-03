#include<stdio.h>
void allarrage(char name[],char answer[],int n,int depth);
int main(void)
{
    char name[3] = {'a','b','c'};
    int n = 3;
    char answer[4];

    allarrage(name,answer,n,0);

    return 0;
}
void allarrage(char name[],char answer[],int n,int depth)
{
    if (n==1)
    {
        answer[depth] = name[0];
        answer[depth +1] = '\0';
        printf("%s\n",answer);
    }
    else
    {   
        int i = 0;
        for (i; i < n; i++)
        {
            answer[depth] = name[i];
            int contain = n-1;
            char new_name[contain];
            int  k = 0;
            for (int j = 0; j < n; j++)
            {
                if (j==i)
                {
                    continue;
                }
                else
                {
                    new_name[k] = name[j];
                    k++;
                }
            }
            allarrage(new_name,answer,n-1,depth+1);
            
        }
        
    }
}