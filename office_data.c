/* office_data  mon 05 07 2023  05:03:15  murali*/
/*

module: office_data

function: 
this is going to collect the data's of employee's in office and stored it in a file for future purpose

version: 1.0.0a mon 05 07 2023 05:04:10 murali 

Copyright notice:
This file copyright (C) 2023 by

   MCCI Corporation
   3520 Krums Corners Road
   Ithaca, NY 14850

An unpublished work. All rights reserved.
 
This file is proprietary information, and may not be disclosed or
copied without the prior permission of MCCI Corporation.

Author:
murali sunadarmoorthi, MCCI 07 2023

*/

#include <stdio.h>


typedef struct office
{
char name[100];
 int id ;
 int  in_time; // in hours only
 int out_time;  // in hours only
}data;

/*
name: main()

function: collectinfg the data from user and display the data

definition: void main();

description:
creating array of object for the structure and through that fetch the empolyee data from user and stored the data for the purpose of future like refer the data in month end for salary calculation etc..

returns: nothing going to return cause of main is void type 
*/

void main()
{
     data e1[3];
     char i;
 for(i=1;i<=3;i++)
 {    
    printf("enter the name of employee %d: ",i);
     scanf(" %s", e1[i].name);
     printf("enter the id : ");
     scanf("%d", &e1[i].id);
     printf("enter the in time  : ");
     scanf("%d", &e1[i].in_time);
     printf("enter the out time : ");
     scanf("%d", &e1[i].out_time);
 }

     printf("---------------------------------------\n");
   for(i=1;i<=3;i++)
{
     printf(" name of employee :%s\n", e1[i].name);
     printf("employee id : %d\n", e1[i].id);
     printf(" in_time : %d\n", e1[i].in_time);
     printf("out_time :%d\n", e1[i].out_time);
     printf("---------------------------------------\n");
}
}