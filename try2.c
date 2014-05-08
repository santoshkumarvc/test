#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct  record {

                char userid[10];
                char cardid[10];
                char name[30];
                char address[100];
                char phone[10];
                char status[1];
                char date[10];
                char time[8];
                };
struct record input;



int main()
{


     		FILE *fp;
                fp=fopen("/home/santosh/Desktop/input_data","r");
		fprintf(fp,"%s %s %s %s %s %s %s %s",input.userid,input.cardid,input.name,input.address,input.phone,input.status,input.date,input.time);
		fclose(fp);
}

