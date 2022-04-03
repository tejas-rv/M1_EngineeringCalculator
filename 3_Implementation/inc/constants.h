//Credits of the subjects across semesters
#define TOTAL_SEM   8
#define SUBJECT     8
#define CREDIT      8
#define ZERO        0
#define ONE         1
#define ONEPFIVE    1.5
#define TWO         2
#define TWOPFIVE    2.5
#define THREE       3
#define THREEPFIVE  3.5
#define FOUR        4
#define FOURPFIVE   4.5
#define EIGHT       8
#define NINE        9
#define MAXSUB      11
#define pi          3.142
float SemCredits[TOTAL_SEM][MAXSUB] = {
                         {4,4,3,3,2.5,2,1.5,1,0,0,0},
                         {4,4,3,3,2.5,1.5,1,0,0,0,0},
                         {4.5,4,3.5,3,3,3,1.5,1.5,0,0,0},
                         {4.5,4,3.5,3,3,3,1.5,1.5,0,0,0},
                         {4,4,3,3,3,3,1.5,1.5,1,0,0},
                         {4.5,4.5,3,3,3,1.5,1.5,2,1,0,0},
                         {4.5,4,3,3,2,2,1.5,1,0,0,0},
                         {9,3,3,3,0,0,0,0,0,0,0}
                         };

int subjects[SUBJECT]={EIGHT,EIGHT,NINE,NINE,MAXSUB,NINE,EIGHT,FOUR};

typedef struct 
{
    char name[255];
    char USN[20];
    float grades[TOTAL_SEM][MAXSUB];
}studentData;

float CG[TOTAL_SEM][MAXSUB];
float sumOfGradesAndCredits[TOTAL_SEM];
float sumOfTotalCredits[TOTAL_SEM];
float SGPA_Val[TOTAL_SEM];
float CGPA_Val[TOTAL_SEM];

studentData* st;
