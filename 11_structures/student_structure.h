#ifndef STUDENT_STRUCTURE_H
#define STUDENT_STRUCTURE_H

typedef struct 
{
   char name[20];
   int std;
   int roll;
}student_t;
 
student_t s[50];
typedef enum 
{
   NAME=1,
   STD,
   ROLL,
   EXIT,
}change;

typedef enum 
{
   FIND=1,
   EDIT,
   DELETE,
}update;

#endif