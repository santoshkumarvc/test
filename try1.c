#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define N 5
struct  data {

                char userid[12];
                char cardid[12];
                char name[32];
                char address[80];
                char phone[12];
//                char status[1];
                char date[16];
                char time[8];
	        };

int main(){
		int i;
		char ch;
		FILE *fp;
		struct data input[N];
		fp=fopen("/home/santosh/Desktop/input_data","r");
	        if(fp==NULL)
                {
		    printf("file open failed \n");
                    return -1;
                }
		
		for(i=0;i<N;i++){
		fscanf(fp,"%s*%s*%s*%s*%s*%s*%s",&input.userid[i],&input.cardid[i],&input.name[i],&input.address[i],&input.phone[i],&input.date[i],&input.time[i]);
//       	 fscanf(fp,"%s %s %s %s %s %s %s",ptr->userid[i],ptr->cardid[i],ptr->name[i],ptr->address[i],ptr->phone[i],ptr->date[i],ptr->time[i]);

//		ptr++;
		}
	//	for(i=0;i<N;i++){
	//	printf("%s\t %s\t %s\t %s\t %s\t %s\t %s\n",input.userid,input.cardid,input.name,input.address,input.phone,input.date,input.time);
	//	}

		fclose(fp);
        	return 0;
}
