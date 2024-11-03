#!/bin/bash
#var="2 5 7 9 10"
mul=1
for i in $*
do
 mul=`expr $mul \* $i`
done
echo "mul is $mul"
