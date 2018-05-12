#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#define ESC 27

#include <stdlib.h>
#include<stdio.h>
#include<string.h>

typedef struct student
{
    char id[10];
    char name[20];
    double examScore[2];
	double assignmentScore[5];
}STUDENT;

typedef struct course
{
	char name[20];
	STUDENT student[100];
	char notice[10][50];
	char assignment[5][50];
}COURSE;

//������������
void readDate(STUDENT *student,int *studentNumber,int *subjectNumber);
void returnUserFace();
void sumAndAveSubjectSore(STUDENT *student,int *studenNumber,int *subjectNumber);
void sumAndAveStudentSore(STUDENT *student,int *studenNumber,int *subjectNumber);
//int orderBig(const void *a,const void *b);
//int orderSmall(const void *a,const void *b);
void Print(STUDENT *student,int *studenNumber,int *subjectNumber);
int orderNumber(const void *a,const void *b);
int orderName(const void *a,const void *b);
void nameSearch(STUDENT *student,int *studentNumber,int *subjectNumber);
void numberSearch(STUDENT *student,int *studentNumber,int *subjectNumber);
void SortScore(STUDENT *student,int *studentNumber,int *subjectNumber);
void Print2(STUDENT *student,int *studentNumber,int *subjectNumber);
void sumAndAveStudentSore2(STUDENT *student,int *studenNumber,int *subjectNumber);
void SystemSet();
int ScanfSet();
void WriteFile(STUDENT *student,int *studentNumber,int *subjectNumber);
void ReadFile(STUDENT *student,int *studentNumber,int *subjectNumber);
void SystemSet();
void PrintCourseMenu();
void PrintManagementMenu();
void PrintScoreMenu();
void PrintAssignmentMenu();
void PrintStudentMenu();
void PrintNoticeMenu();
void CourseMenu(COURSE **course, int *subjectNumber);
void RegisterCourse(COURSE **course, int *subjectNumber);
void ModifyCourse(COURSE **course);
void DeleteCourse(COURSE **course, int *subjectNumber);
void ManagementMenu(COURSE **course, int *subjectNumber);
void ScoreMenu();
void RegisterScore();
void ModifyScore();
void DeleteScore();
void PrintScore();
void WriteScoreFile();
void AssignmentMenu();
void RegisterAssignment();
void ModifyAssignment();
void DeleteAssignment();
void PrintAssignment();
void StudentMenu();
void RegisterStudent();
void ModifyStudent();
void DeleteStudent();
void PrintStudent();
void ReadStudentFile();
void WriteStudentFile();
void NoticeMenu();
void RegisterNotice();
void ModifyNotice();
void DeleteNotice();

#endif // STUDENT_H_INCLUDED
