#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <windows.h>

/* macro */
#define MAX 29 // the max of number on sheet (renge 25~99)
#define N 25 
int main(void){

	//generating randum number
    int array[N];
    int i;
    for(int i = 0; i < N; i++){
        array[i] = MAX + 1; // intilialization of array
    }

    int random_num;
    int count = N - 1;
    int flag = 0; // chack flag
    srand((unsigned)time(NULL)); //making randum seed

    while(count >= 0){
        random_num = rand() % (MAX+1)+1; 
        for(i = 0; i < N; i++){ 
            // compare numbers
            if(array[i] == random_num){ // patturn of same number 
                flag = 1; // flag
                break;
				
            } 
        }
        if(flag == 0){ // patturn of new number
            array[count] = random_num;
            count --;
        }else if(flag == 1){
            flag = 0; // remake flag for next roop
        }   
    }

    // display the prestarting sheet
	printf("your sheet\n");
	for( i = 0; i < N; i++){
    	if(i % 5 == 0){
				if(array[i]==0){
				cprintf("\n%2d ",  array[i]);
				}else{
        		printf("\n%2d ",  array[i]);
				}
    	}else{
			printf("%2d ",  array[i]);
		}
	}
	printf("\n\nPlease hit enter key to start BINGO\n ");
	
	getchar();

	system("cls");

	textattr(55);
	
	array[12]=0;

	 printf("START\n ");
	
	// display the starting sheet
	for(int i = 0; i < N; i++){
    	if(i % 5 == 0){
	   	 	if(array[i]==0){
	   	 		printf("\n");
				cprintf("%2d ",  array[i]);//0 has background color
				}else{
        		printf("\n%2d ",  array[i]);
				}
    	}else{
			if(array[i]==0){
				
				cprintf("%2d ",  array[i]);//0 has background color
				}else{
        		printf("%2d ",  array[i]);
				}
		}
	}


	printf(" \n\nYou get nunber by hiting Enter key\n ");

	getchar();


	//generate another randum numders

	int str[MAX];
	int j;
	count=MAX-1;	
	flag=0;
	srand(time(NULL));

 	for( j = 0; j < MAX; j++){
        str[j] = MAX + 1; // intilialization of array
    }

    while(count >= 0){
        random_num = rand() % (MAX+1)+1; 
        for(int j = 0; j < MAX; j++){ 
            // compare numbers
            if(str[j] == random_num){ // patturn of same number 
                flag = 1; // flag
                break;
            } 
        }
		
        if(flag == 0){ // patturn of new number
            str[count] = random_num;
            count --;
			
        }else if(flag == 1){
            flag = 0; // remake flag for next roop
        }   
    }
	system("cls");

	//displaying process sheet
	for( j = 0; j < MAX; j++){

		
		for(i = 0; i < N; i++){
			if(array[i]==str[j]){
				array[i]=0;
			}
		}
       			 printf("%d@times lotterly : you get [%d]\n", j+1, str[j]);

	   			 
				//checking BINGO
	   		 if(array[0]	+array[1]	+array[2]	+array[3]	+array[4]	==0||
				array[5]	+array[6]	+array[7]	+array[8]	+array[9]	==0||
				array[10]	+array[11]	+array[12]	+array[13]	+array[14]	==0||
				array[15]	+array[16]	+array[17]	+array[18]	+array[19]	==0||
				array[20]	+array[21]	+array[22]	+array[23]	+array[24]	==0||
				array[0]	+array[5]	+array[10]	+array[15]	+array[20]	==0||
				array[1]	+array[6]	+array[11]	+array[16]	+array[21]	==0||
				array[2]	+array[7]	+array[12]	+array[17]	+array[22]	==0||
				array[3]	+array[8]	+array[13]	+array[18]	+array[23]	==0||
				array[4]	+array[9]	+array[14]	+array[19]	+array[24]	==0||
				array[0]	+array[6]	+array[12]	+array[18]	+array[24]	==0||
				array[20]	+array[16]	+array[12]	+array[8]	+array[4]	==0	){
					textattr(100);
					cprintf("	BINGO!");
					textattr(55);
					
					
					for(int i = 0; i < N; i++){
    					if(i % 5 == 0){
	   	 					if(array[i]==0){
	   	 						printf("\n");
								cprintf("%2d ",  array[i]);//0 has background color
							}else{
        						printf("\n%2d ",  array[i]);
							}
    					}else{
							if(array[i]==0){
								cprintf("%2d ",  array[i]);//0 has background color
							}else{
        						printf("%2d ",  array[i]);
						}
					}
					
				}
				//playing suona
				int s=400;
					Beep(440,s);
					Beep(494,s);
					Beep(554,800);
					Beep(494,s);
					Beep(440,s);
	
					Beep(440,s);
					Beep(494,s);
					Beep(554,s);
					Beep(494,s);
					Beep(440,s);
					Beep(494,800);
				break;
			}
					//result
					for(int i = 0; i < N; i++){
    					if(i % 5 == 0){
	   	 					if(array[i]==0){
	   	 						printf("\n");
								cprintf("%2d ",  array[i]);//0 has background color
							}else{
        						printf("\n%2d ",  array[i]);
							}
    					}else{
							if(array[i]==0){
								cprintf("%2d ",  array[i]);//0 has background color
							}else{
        						printf("%2d ",  array[i]);
						}
					}	
	}
	getchar();
	system("cls");
	}	
    return 0;
}
