/* office_data  Mon May 07 2023  05:03:15  murali*/
/*

module: office_data

function: 
this is going to collect the data's of employee's in office and stored it in a file for future purpose

version: v1.0.0a Mon May 07 2023 05:04:10 murali 

Copyright notice:
This file copyright (C) 2023 by

   MCCI Corporation
   3520 Krums Corners Road
   Ithaca, NY 14850

An unpublished work. All rights reserved.
 
This file is proprietary information, and may not be disclosed or
copied without the prior permission of MCCI Corporation.

Author:
Murali Sunadarmoorthi, MCCI 07 2023

*/


#include <stdio.h>

/******************************************************************************\
  This module is an example module. 
  
  (Text explanation of contents of file, as long as required.) 
  
  At one time, specially-formatted ‘help’ program text was embedded here 
  also, to aid in maintaining a separate ‘help’ facility. 
  
\******************************************************************************/


/****************************************************************************\ 
  
  Manifest constants & typedefs. 
  
 This is strictly for private types and constants which will not 
  be exported. 
 
\****************************************************************************/ 

typedef struct office
  {
  char employeeName[100];
  int employeeId ;
  int officeIn_time; // in hours only
  int officeOut_time;  // in hours only
  } data;

// struct sOffice {
//   char candidateName[20];
// };

// typedef struct sOffice data;

/****************************************************************************\ 
  
  Read-only data. 
  
  If program is to be ROM-able, these must all be tagged read-only 
  using the ROM storage class; they may be global. 
  
\****************************************************************************/


/****************************************************************************\ 
  
  VARIABLES: 
  
  If program is to be ROM-able, these must be initialized 
  using the BSS keyword. (This allows for compilers that require 
  every variable to have an initializer.) Note that only those 
  variables owned by this module should be declared here, using the BSS 
  keyword; this allows for linkers that dislike multiple declarations 
  of objects. 
 
\****************************************************************************/


/*
Name: main()

Function: collectinfg the data from user and display the data

definition: void main();

description:
creating array of object for the structure variable and through that fetch the empolyee data from user using iteration method
stored the data for the purpose of future like refer the data in month end for salary calculation etc..

returns: nothing going to return cause of main is void type 
*/

int main()
  {
  data e1[3];
  char i;
  for(i = 1; i <= 3; i++)
    {    
    printf("Enter the name of employee %d: ", i);
    scanf(" %s", e1[i].employeeName);
    printf("enter the id : ");
    scanf("%d", &e1[i].id);
    printf("enter the in time  : ");
    scanf("%d", &e1[i].in_time);
    printf("enter the out time : ");
    scanf("%d", &e1[i].out_time);
    }

  printf("---------------------------------------\n");
  for(i = 1; i <= 3; i++)
    {
    printf(" name of employee :%s\n", e1[i].employeeName);
    printf("employee id : %d\n", e1[i].id);
    printf(" in_time : %d\n", e1[i].in_time);
    printf("out_time :%d\n", e1[i].out_time);
    printf("---------------------------------------\n");
    }

  return 0;
  }
