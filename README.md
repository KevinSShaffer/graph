*******************************************************
*  Name      :  Kevin Shaffer
*  Student ID:  106069743
*  Class     :  CSCI 2312-001        
*  HW#       :  5
*  Due Date  :  Nov 7th, 2017
*******************************************************

## Read Me


*******************************************************
   Description of the program
*******************************************************

This application has the user navigate through a maze.  
The maze is implemented using a graph where each room 
is a node.


*******************************************************
   Source files
*******************************************************

Name:  main.cpp
  Main program.  This is the driver program that takes
  the user's input and uses it to guide the user
  though the maze.

Name:  str_func.h
  Contains the template class for the node.
   
   
*******************************************************
   Circumstances of programs
*******************************************************

   The program runs successfully.
   
   The program was developed using the sublime text
   editor and compiled using gcc version 7.2.0 
   (Rev1, Built by MSYS2 project).

   The program was also tested by compiling and running
   on CSEGrid.

   This application lives in an open source repository
   at https://github.com/KevinSShaffer/graph


*******************************************************
   How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip ShafferHW5.zip

   Now you should see:
    Directory named 'graph' with the files:
      main.cpp
      README.md
      node.h
      makefile

2. Build the program.
    Change to the directory that contains the file by:
    % cd graph 

    Compile the program by:
    % make

3. Run the program by:
   % ./graph

4. Delete the obj files, executables, and core dump by
   % make clean