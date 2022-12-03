#Dane Coleman
#!/bin/bash
totalSize=0
n=1
fileSize=`ls -l $n.txt | tr -s ["  "][" "] | cut -d ' ' -f8` #cuts field number 8 from the .txt (size)

while [ $n -lt 4]
do
        echo "$n.txt is $fileSize"
        totalSize=`expr $fileSize + $totalSize`
        #totalSize=$((fileSize + totalSize))
        n=`expr $n + 1`
done
        echo "Total is $totalSize"
