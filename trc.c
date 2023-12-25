#include<stdio.h>
#include <unistd.h>

/*

TEAM MEMBERS : 
1. SURAJ SINGH
2. SUMIT SINGH
3. TRIPTI PAL
4. TANISH SINGH

*/

void welcome(){
        printf("\n");
    printf("                          WELCOME TO THE PROGRAM : \n");
    printf("\n");
    printf("                        ----------------------------\n");
    printf("                         FACULTY FEEDBACK FORM \n");
    printf("                        ----------------------------\n");
    sleep(2);
    printf("\n");

}

//--> it is the details function which operates at the beginning to take data from the user ;
void details (char *name[50],char *course[50],int *rollno)
{
    

    printf("                        PLEASE ENTER YOUR DETAILS : \n");
    
    printf("                        ENTER YOUR NAME      : ");
    scanf("%s",name);
    printf("                        ENTER YOUR COURSE    : ");
    scanf("%s",course);
    printf("                        ENTER YOUR ROLL NO.  : ");
    scanf("%d" , &rollno);
    printf("                               THANK YOU FOR SUBMISSION ! \n");
    printf("                          INSTRUCTIONS WILL APPEAR IN FEW SECONDS ! \n \n");
       sleep(1);
       printf("                          * ");
       sleep(1);
       printf("           * ");
       sleep(1);
       printf("           * \n");
       sleep(1);

   
    }

    


// --> it is main menu which appears at the beginning to tell that how program works ;
void menu(){
    printf("\n");
    printf("                    ---------------------------------------\n");
    
    printf("                    | READ THE FOLLOWING INSTRUCTONS  :   |\n");
    printf("                    ---------------------------------------\n");

    printf("\n");
    printf("                    ---------------------------------------------\n");
    printf("                     1. SUBMIT FEEDBACK --> ENTER 1              \n");
    printf("                     2. SEE THE SUBMITTED FEEDBACKS --> ENTER 2   \n");
    printf("                     3. TO ENTER A NEW USER  --> ENTER 3                         \n");
    printf("                     4. EXIT --> ENTER 4                         \n");
    printf("                    ---------------------------------------------\n");
    printf("\n");

}




//main body 
int main(){

    welcome(); //--> welcome is called 
    #define MAX_NAMES 5
#define MAX_LENGTH1 50
#define MAX_LENGTH2 20
#define MAX_LENGTH3 3
#define MAX_LENGTH4 500

    char teach_name[MAX_NAMES][MAX_LENGTH1];
    char sub[MAX_NAMES][MAX_LENGTH2];
    float rating[MAX_NAMES] ; //--> out of 5
    char q1[MAX_NAMES][MAX_LENGTH3]; //--> do u like the way of teaching
    char q2[MAX_NAMES][MAX_LENGTH3]; //--> di u like his/her behaviour
    char opinion[MAX_NAMES][MAX_LENGTH4];




// user details are getting stored in this part _________________________________________________________________________________________________________
   
    char name[20][50];   // |
    char course[20][50]; // | -> 20 is the no. of students who can feedbacks (later can be changed if want); 
    int rollno[20];      // |

    int n= 0; //-> it is there so that i can be changed with each increasing no. of user 
    int c = 0 ;
    
    details( &name[n],&course[n],&rollno[n]);
    n = n + 1;

//_________________________________________________________________________________________________________

    menu(); // --> main instructon menu is called 

    int task ; //---> task to do ;

        printf("                        ENTER THE NUMBER TO PERFORM TASK: ");
        scanf("%d" , &task);

    int h =1;
    while(h == 1){

            
            static int n = 0 ;
            static int select ;
        
        if (task == 1){
            
            
            // body for the feedback form

        
            char sub1[7][30] = {"PPS" , "CHEMISTRY" , "ENGLISH" , "MATHS" , "PHYSICS" , "BEE" };

            char naam[7][30] = {"MISS NISHA ARORA" , "MISS NAVNEET KAUR" , "MISS MONA" , "MISS PRABHJOT" , "MISS PRAGATI JHAMB" , "MISS MANISHA" , "ANY OTHER FACULTY"};

            for (int i = 0 ;i<7 ; i++){
                printf("                   %d. %s \n" ,i+1 , naam[i]);
            }

           

            printf("                       ENTER THE NUMBER TO SELECT THE FACULTY :");

            scanf("%d" , &select);

            if (select > 0 && select<7){
                strcpy(teach_name[n] , naam[select - 1]);
                strcpy(sub[n] , sub1[select - 1]);
                float rating1 [20];
        char q11[3];
        char q21[3]; 
        char opinion1[500]; 

        printf("                        ------------------------------------------------\n");
        printf("                         ENTER THE NUMBER OF STARS YOU WANT TO GIVE(OUT OF 10) : ");
        scanf("%f" , &rating1);
        rating[n] = *rating1;
        printf("                        --------------------------------------------------\n");
        printf("                         DO YOU HIS/HER WAY OF TEACHING (YES/NO)               : ");
        scanf("%s" , &q11);
        strcpy(q1 , q11);
        printf("                        --------------------------------------------------\n");
        printf("                         DO YOU LIKE HIS/HER BEHAVIOUR (YES/NO)                : ");
        scanf("%s" , &q21);
        strcpy(q2 , q21);
        printf("                        ---------------------------------------------------\n");
        printf("                         GIVE YOUR FEEDBACK                                    : ");
        scanf("%s" , &opinion1);
        strcpy(opinion , opinion1);
        printf("                        ---------------------------------------------------\n");
        sleep(1);

                n = n + 1;

            }

            else if (select == 7){ char teach_name1[50];
        char sub1[20];
        float rating1 [20];
        char q11[3];
        char q21[3]; 
        char opinion1[500]; 

        printf("                        -------------------------------------------------\n");
        printf("                         ENTER THE NAME OF FACULTY                             : ");
        scanf("%s" ,&teach_name1);
        strcpy(teach_name[n], teach_name1);
        printf("\n                        ------------------------------------------------\n");
        printf("                         ENTER THE SUBJECT HE/SHE TEACHES                      :  ");
        scanf("%s" , &sub1);        
        strcpy(sub[n] , sub1);
        printf("                        ------------------------------------------------\n");
        printf("                         ENTER THE NUMBER OF STARS YOU WANT TO GIVE(OUT OF 10) : ");
        scanf("%f" , &rating1);
        rating[n] = *rating1;
        printf("                        --------------------------------------------------\n");
        printf("                         DO YOU HIS/HER WAY OF TEACHING (YES/NO)               : ");
        scanf("%s" , &q11);
        strcpy(q1[n] , q11);
        printf("                        --------------------------------------------------\n");
        printf("                         DO YOU LIKE HIS/HER BEHAVIOUR (YES/NO)                : ");
        scanf("%s" , &q21);
        strcpy(q2[n] , q21);
        printf("                        ---------------------------------------------------\n");
        printf("                         GIVE YOUR FEEDBACK                                    : ");
        scanf("%s" , &opinion1);
        strcpy(opinion[n] , opinion1);
        printf("                        ---------------------------------------------------\n");
            
            n = n + 1;}

            else{
                printf("                        INVALID INPUT \n");
            }

        }
        

        else if (task == 2) {
            
            
                printf("                        ----------------------------------------------------\n");
                printf("                         YOU HAVE CHOSEN TO SEE THE SUBMITTED FEEDBACKS\n");
                printf("                        ----------------------------------------------------\n \n");

               if (n > 0){
                
                printf("                        ----------------------------------------------------\n");
                printf("                        FACULTY NAME : %s \n\n" , teach_name[0]);
                printf("                        SUBJECT      : %s \n\n" , sub[0]);
                printf("                        RATING       : %d \n\n" , rating[0]);
                printf("                        DO YOU LIKE THE WAY OF TEACHING   : %s \n\n" , q1[0]);
                printf("                        DO YOU LIKE HIS/HER BEHAVIOUR     : %s \n\n" , q2[0]);
                printf("                        FEEDBACK     : %s \n\n" , opinion[0]);

                printf("                        ----------------------------------------------------\n");
               }
                
                if (n >1){
                printf("                        ----------------------------------------------------\n");
                printf("                        FACULTY NAME : %s \n\n" , teach_name[1]);
                printf("                        SUBJECT      : %s \n\n" , sub[1]);
                printf("                        RATING       : %f \n\n" , rating[1]);
                printf("                        DO YOU LIKE THE WAY OF TEACHING   : %s \n\n" , q1[1]);
                printf("                        DO YOU LIKE HIS/HER BEHAVIOUR     : %s \n\n" , q2[1]);
                printf("                        FEEDBACK     : %s \n\n" , opinion[1]);

                printf("                        ----------------------------------------------------\n");
                }

                if (n >2){
                printf("                        ----------------------------------------------------\n");
                printf("                        FACULTY NAME : %s \n\n" , teach_name[2]);
                printf("                        SUBJECT      : %s \n\n" , sub[2]);
                printf("                        RATING       : %d \n\n" , rating[2]);
                printf("                        DO YOU LIKE THE WAY OF TEACHING   : %s \n\n" , q1[2]);
                printf("                        DO YOU LIKE HIS/HER BEHAVIOUR     : %s \n\n" , q2[2]);
                printf("                        FEEDBACK     : %s \n\n" , opinion[2]);

                printf("                        ----------------------------------------------------\n");
                }

                if (n >3){
                printf("                        ----------------------------------------------------\n");
                printf("                        FACULTY NAME : %s \n\n" , teach_name[3]);
                printf("                        SUBJECT      : %s \n\n" , sub[3]);
                printf("                        RATING       : %d \n\n" , rating[3]);
                printf("                        DO YOU LIKE THE WAY OF TEACHING   : %s \n\n" , q1[3]);
                printf("                        DO YOU LIKE HIS/HER BEHAVIOUR     : %s \n\n" , q2[3]);
                printf("                        FEEDBACK     : %s \n\n" , opinion[3]);

                printf("                        ----------------------------------------------------\n");
                }

                if (n >4){
                printf("                        ----------------------------------------------------\n");
                printf("                        FACULTY NAME : %s \n\n" , teach_name[4]);
                printf("                        SUBJECT      : %s \n\n" , sub[4]);
                printf("                        RATING       : %d \n\n" , rating[4]);
                printf("                        DO YOU LIKE THE WAY OF TEACHING   : %s \n\n" , q1[4]);
                printf("                        DO YOU LIKE HIS/HER BEHAVIOUR     : %s \n\n" , q2[4]);
                printf("                        FEEDBACK     : %s \n\n" , opinion[4]);

                printf("                        ----------------------------------------------------\n");
                }

                if (n >5){
                printf("                        ----------------------------------------------------\n");
                printf("                        FACULTY NAME : %s \n\n" , teach_name[5]);
                printf("                        SUBJECT      : %s \n\n" , sub[5]);
                printf("                        RATING       : %d \n\n" , rating[5]);
                printf("                        DO YOU LIKE THE WAY OF TEACHING   : %s \n\n" , q1[5]);
                printf("                        DO YOU LIKE HIS/HER BEHAVIOUR     : %s \n\n" , q2[5]);
                printf("                        FEEDBACK     : %s \n\n" , opinion[5]);

                printf("                        ----------------------------------------------------\n");
                }

        }

        else if (task == 3){
            // --> the code to enter details is again used ;
            details( name[n],course[n],rollno[n]);
            n = n + 1;
                
        }else if (task == 4){

            printf("                              PROGRAM ENDS HERE ! :)  ");
            break;
            
        }else {
            
            printf("                              INVALID INPUT \n");
            printf("                   PLEASE ENTER THE NUMBERS MENTIONED ABOVE ONLY :) \n ");
           
        }

        printf("                        ENTER THE NUMBER TO PERFORM TASK: ");
        scanf("%d" , &task);
        printf("\n");
    }
    

    return 0;
}

