# Employee Record Management System Report

## Introduction
  The main aim of this project is to develop software application for Employee Record Management System.it enables users to create and store Employee Records and This project simplifies the task of maintain records because of its user friendly nature.
  
## Identifying features
+ Screen guides how to enter the details.
- Very friendly interface.
 * No crashing happens so that work can be done without any breaks.

## Research

  Employee Record Managament System Features and Benifits.

### Features
* Add Records    : For the Add Record, the user can add new employee information.
+ Search Records : For the Search Record, user can search any employee information using employee id.
- List Records   : For the List Records, the user can List all the new employee added.
+ Modify Records : For the Modify Records, the user can edit/modify employee Data.
* Delete Records : For the Delete Records, the user can delete employee information.
- Exit 
  
### Benifits
* Satisfy the user requirements 
- Be easy to understand by user and operator 
+ Be easy to operate 
* Have a good user interface 
- Be easy to modify 
+ Be expandable 


## SWOT Analysis

![SWOT](https://user-images.githubusercontent.com/98829965/153246226-e447f324-a616-4c93-962c-9cdeda2ed981.jpg)


## Requirements

###  High Level Requirements

|ID	 | Description	                                                    |    Status
|-----|-----------------------------------------------------------------|---------------
|HLR1|	This application allow user to choose the option between 1 to 6	|  Implemented
|HLR2|	Allow the user to add the record of new employee	              |  Implemented
|HLR3|	Allow the user to delete the record of employee	                |  Implemented
|HLR4|	Allow the user to search the record of employee	                |  Implemented
|HLR5|	Allow the user to display the list of the of employees	        |  Implemented
|HLR6|	Allow the user to modify the employees record	                  |  Implemented
|HLR7|	Allow the user to exit from the application	                    |  Implemented

 
### Low Level Requirements

|ID	 |                       Description	                                            |     Status
|----|------------------------------------------------------------------------------- |-----------------
|LLR1|	This application will ask the user to make a choice between 1 to 6(choices) 1.Add 2.Delete 3.Search 4.Display 5.Modify  6.Exit|   Implemented                           |    
|LLR2|	Application ask the user employee ID (for Deleting)                           |  	Implemented
|LLR3| Application ask the user employee ID (for searching)	                          |   Implemented
|LLR4|	Application ask the user employee ID (for Modifying)	                        |   Implemented
|LLR5|	The user can exit from application by choosing 6	                            |   Implemented


## 4W's & 1H
### Who
- All oraganization who has lot of employees and very challenging to maintain the records.

### What
* This project gives the opportunity to enter all the required information and deploy into the system easily it is an application that enables users to create and store Employee Records.

### When
+ When user wants to simplifies the task of maintain records like As the business of the organisation increases number of employees increases.

### Where
- Employee Management System is a distributed application, developed to maintain the details of employees working in any organization because This problem is surfaced in all the organisation in the world.

### How
* users can create and store Employee Records to performing operations such as insert, edit, delete the data from the file.
  
## Best method followed
+ Used functions to decrease dependency on main function.
- Printf statements have been placed only wherever necessary to avoid confusions.
* Created header file so that the fuctions can be used else where ever required without any difficulty.

# Design

## Structural

   ![draw](https://user-images.githubusercontent.com/98829965/153379076-7e91edb0-31dc-4ffa-a936-cba9d61a594a.jpg)
   

   ![Structural daigram](https://user-images.githubusercontent.com/98829965/152684138-469dfb49-7b82-4689-be07-34576ee0f26d.jpg)
   
 
 ## Behavioural
 
   ![Zero_level_DFD](https://user-images.githubusercontent.com/98829965/153041186-d10e3213-98e5-41ee-84c3-8ab444e230b6.jpg)   
   
   
   
   ![One_level_DFD](https://user-images.githubusercontent.com/98829965/153041227-423d9614-99e7-4e5c-9264-4eef4012684d.jpg)
   
   
 ## Best Methods Followed
+ Exact Mapping of code to avoid confusions.
- Mentioning of both High level and Low level Behavioral and structural diagrams for better understanding.
* Followed the exact symbols to make the understanding easier.
+ Detailed explanation in Low level Behavioural and Structural Diagrams.

## Implimentation Folder Structure

|Folder      |	                          Description                     |
|------------|------------------------------------------------------------|
|inc	       |                       header files                         |
|src	       |     Source code files for solvinng Arthimetic operations   |
|test	       |   All source code and data for testing purposes            |
|unity	     |               Files for unit testing                       |
|Documentaion|	             Doxyfile and Makefile                        |


# TEST PLAN

 |TEST ID	 |          Description 	     |   INPUT DATA	             |     EXPECTED OUTPUT	             |      ACTUAL OUTPUT	             | STATUS
 |---------|----------------------------|---------------------------|--------------------------------- |---------------------------------|-----------
 |TC_01	   |      Enter Id	             |    Enter Id: 01           |   	        01                    |             01	                 |  PASS
 |TC_02	   |      Enter Name	           |   Enter Name : Shilpa	    |          Shilpa                  |            Shilpa               |  PASS
 |TC_03	   |      Enter Age	            |   Enter age: 22           |            23	                   |              22	                |  PASS
 |TC_04	   |      Entering Salary	      |   Enter salary: 30000	    |           30000                  |   	         30000	              |  PASS
 |TC_05	   |      Modify Record	        |   Enter Employee Id       |  Modified detailes are updated   |	 Modified detailes are updated  |  PASS
 |TC_06	   |      Search Record	        |   Enter Employee Id       |    Display Searched ID Data	     |     Display Searched ID Data	   |  PASS
 |TC_07	   |      Display Record	       |   Enter Display Choice   	|      Displayed All Records	      |       Displayed All Records		   |  PASS
 |TC_08	   |      Delete record	        |   Enter Employee Id       |           Deleted                |               Deleted           | PASS
                                                                    
 
 # Best Practices
 
- Checked all the possibilities of output
* Mentioned all the inputs for better understanding
+ Presented in tabular form for easy understanding



# OUTPUT 

## Menu 

![menu](https://user-images.githubusercontent.com/98829965/153696441-7acab15a-1225-4ace-a099-552f1013bc87.png)


## Adding Record

![Adding 1 emp](https://user-images.githubusercontent.com/98829965/153696460-200bd491-f219-4bec-acf2-c1d1468b3a37.png)


## Display Record

![display](https://user-images.githubusercontent.com/98829965/153696531-e2643ee9-d9e6-41aa-8996-dcd07e4d1349.png)


## Modify Record

![modified](https://user-images.githubusercontent.com/98829965/153696536-097610a2-5d6d-458b-b78c-bcc00ba36bff.png)


#After Modified Record

![after modified](https://user-images.githubusercontent.com/98829965/153696543-ac70d956-c952-4a09-9f48-35af3ec070b3.png)


## Search Record

![searched](https://user-images.githubusercontent.com/98829965/153696555-394afdcb-f10a-4c42-a9f5-a287c4eee2e4.png)


## Delete Record

![deleted](https://user-images.githubusercontent.com/98829965/153696568-864401b6-38d8-4133-bab1-c46184b359ab.png)


## After Deleted Record

![after dltd](https://user-images.githubusercontent.com/98829965/153696574-2662c0b3-2e0c-4d83-9f5d-aeacc63f4131.png)

