#!/bin/bash

#1)Create a new directory called rover_mission and navigate into it 
mkdir rover_mission 
cd rover_mission 

#2)Create 3 empty files
touch log1.txt log2.txt log3.txt 

#3)Rename the log1.txt 
mv log1.txt mission_log.txt

#4)Find all the files with .log extension
echo "files with .log extension" 
find "*.log"

#5)Display contents of the mission_log.txt
echo "Contents of mission_log.txt:"
cat mission_log.txt

#6)Find and display all the lines with 'ERROR' 
echo "Lines with ERROR in mission_log.txt:"
grep "ERROR" mission_log.txt

#7)Count the number of lines 
echo "Number of lines in mission_log.txt:"
wc -l <mission_log.txt

#8)Show the system date and time 
echo "Current system date and time "
date

#9)Display usage of CPU 
echo "CPU usage of the system"
top

#10)Shutdown the system in 10 minutes 
echo "shutdown in 10 minutes"
sudo shutdown +10 


