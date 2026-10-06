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
   NAME,
   STD,
   ROLL,
   EXIT,
}change;

typedef enum 
{
   FIND,
   EDIT,
   DELETE,
}update;

#endif