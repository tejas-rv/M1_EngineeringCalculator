#include "../inc/main.h"
#include "../inc/constants.h"
/*
* This function calculates the SGPA avergae for each sem and store it in a global array
* @input: None
* @Output: SGPA and CGPA
* @Return Value: None
*/
void SGPA_Calc()
{
    for(int sem=0;sem<TOTAL_SEM;sem++)
    {
        for(int sub=0;sub<subjects[sem];sub++)
        {
            CG[sem][sub] += SemCredits[sem][sub] * st->grades[sem][sub];
            sumOfGradesAndCredits[sem] += CG[sem][sub];
            sumOfTotalCredits[sem] += SemCredits[sem][sub];
        }
        SGPA_Val[sem] = (sumOfGradesAndCredits[sem]/sumOfTotalCredits[sem]);
    }
}

void CGPA_Calc()
{
    float sumOfGrades=0;
    float sumOfCredits=0;

    for(int i = 0; i < TOTAL_SEM; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            sumOfGrades += sumOfGradesAndCredits[j];
            sumOfCredits += sumOfTotalCredits[j];
        }

        CGPA_Val[i]=sumOfGrades/sumOfCredits;
        sumOfGrades = 0;
        sumOfCredits = 0;
    }   
}

void CGPA(){
    char* fPath = "datafile.csv";
    
   // scanf("%s", fPath);
 
    FILE* fp = fopen(fPath,"r");
    if(!fp)
        printf("Error in opening the file. Please check the path\n");
    char *row = NULL;
    
    int rowLen;
    getline(&row, &rowLen, fp);

    while(*row != NULL)
    {
        st = (studentData*)malloc(sizeof(studentData));
        memset(st, 0x0, sizeof(studentData));
        char *val = strtok_r(row, ",");

        if(val)
        {
            memcpy(st->name, val, strlen(val));
            val = strtok_r(NULL, ",");
            memcpy(st->USN, val, strlen(val));
            val = strtok_r(NULL, ",");            
            for(int sem=0; sem < TOTAL_SEM; sem++)
            {
                for(int sub=0; sub<subjects[sem]; sub++)
                {
                    if(sub != subjects[sem])
                    {
                        st->grades[sem][sub] = atoi(val);
                        val = strtok_r(NULL, ",");
                    }
                        
                }
            }
        }

        SGPA_Calc();
        CGPA_Calc();

        printf("********************************\n");
        printf("Name: %s\n", st->name);
        printf("USN: %s\n", st->USN);
        for(int sem=0; sem < TOTAL_SEM; sem++)
        {
            //printf("Sem:%d\t SGPA:%f\t CGPA:%f\t Credits Earned:%f\n", sem+1, SGPA_Val[sem], CGPA_Val[sem],sumOfGradesAndCredits[sem]);
            printf("Sem:%d\t SGPA:%f\t CGPA:%f\n", sem+1, SGPA_Val[sem], CGPA_Val[sem]);
        }
        printf("********************************\n");
        free(st);
        getline(&row, &rowLen, fp);

        for(int sem=0; sem < TOTAL_SEM; sem++)
        {
            for(int sub=0; sub<subjects[sem]; sub++)
                CG[sem][sub]=0;
            sumOfGradesAndCredits[sem]=0;
            sumOfTotalCredits[sem]=0;
            sumOfTotalCredits[sem]=0;
            SGPA_Val[sem]=0;
            CGPA_Val[sem]=0;
        }
    }

#if 0
    for(int sem=0; sem < TOTAL_SEM; sem++)
    {
        for(int sub=0; sub<subjects[sem]; sub++)
            printf("Sem: %d\t Sub: %d\t - Grade: %f\n", sem+1,sub+1,st->grades[sem][sub]);
    }    
#endif
    fclose(fp);

    return;
}

