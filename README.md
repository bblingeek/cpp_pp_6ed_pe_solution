Project
=======
This project provides solution to Programming Exercises given in C++ Primer Plus (Developer's Library), 6th Edition, by Stephane Prata.

The include/ folder contains the Header files necessary to build the solutions.
The src/ folder contains the C++ solutions.

Steps to Build
--------------

Using GNU Autotools
-------------------
1.  Run the preparation step
    > ./autogen.sh
    
2.  Run the configure script
    > ./configure

3.  Run Make
    > make


Using Apache Ant
----------------
In case you do not have GNU Autotools installed, an alternative way to build the project using Apache Ant.

1.  Run the following command
    >  ant

All the executables (*.out) would be generated in the src/<chapter_**>/bin folder.
Change the working directory to src/<chapter_**>/bin and you could run the individual solutions.
