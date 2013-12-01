read_words.cpp : Has your program for asking the user the enter words and puts them in a map.

read_words.hpp : is the header file that has the function declaration in it. This file is referenced in the task1 and task2 and goes back to the source (cpp) file of the same name to grab the properties of the wc function.
 
task1.cpp  : calls the wc function and does the count for how many words there are in the returned wordcount map.

task2.cpp : : calls the wc function and does the count for how many of each word there is in the returned wordcount map.

To compile, you need to specify both file names for each:
So for task1:
g++ task1.cpp read_words.cpp -o task1
and for task2:
g++ task2.cpp read_words.cpp -o task2

Note to Jake,
You will need to download gcc to compile this. Its free and light.