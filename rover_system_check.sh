#!/bin/bash
battery_level=$(( RANDOM%100 ))
echo "Battery level : $battery_level%"

if [ "$battery_level" -lt 20 ]
then echo "Battery low! Return to base!" 
exit 1
fi

ping -c 2 google.com>/dev/null 2>&1
if [ "$?" -ne 0 ];
then echo "Communication failure!" 
exit 1
fi

echo "All systems operational!" 
exit 0

