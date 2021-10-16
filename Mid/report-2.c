#include<stdio.h>

#include<conio.h>

char str[50], cut[20], rep[20], ans[50];

int     c=0, m=0, i=0, j=0, k, flag=0;

void stringmatch()

{

                 while(str[c] !='\0')

                {

                                if(str[m] == cut[i])

                                {

                                                i++;

                                                m++;

                                                if(cut[i] == '\0')

                                                {

                                                                flag = 1;

                                                                for(k=0; rep[k]!='\0'; k++, j++)

                                                                {

                                                                                ans[j] = rep[k];

                                                                }

                                                                i = 0;

                                                                c = m;

                                                }

                                }

                                else

                                {

                                                ans[j]= str[c];

                                                j++;

                                                c++;

                                                m=c;

                                                i=0;

                                }

                }

                ans[j]='\0';

}

void main()

{
                 printf("\n................................");
                 printf("\n\t MD.Kamrul Hasan");
                 printf("\n\t CSE 02006947");
                 printf("\n................................");

                printf("\nEnter the main string:");

                gets(str);

                printf("\nEnter the Cut string:");

                gets(cut);

                printf("\nEnter the replace string:");

                gets(rep);

                stringmatch();

                if(flag == 1)

                                printf("\nResultant string is: %s\n", ans);

                else

                                printf("\nPattern string is not found\n");

}
