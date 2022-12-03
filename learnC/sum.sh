#Dane Coleman
#!/bin/bash
totalSize=0
n=1

while [ $n -lt 6 ]
do	
	fileSize=`ls -l $n.txt | tr -s ["  "][" "] | cut -d ' ' -f6` #cuts field number 6 from the ls -l (size)
	echo "$n.txt is $fileSize"
#	totalSize=`expr $fileSize + $totalSize`
	totalSize=$((fileSize + totalSize))
	n=$((n+1))
done
	echo "Total is $totalSize"

