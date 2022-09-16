#!/bin/bash
rm -rf ans.txt c.txt d.txt tempc.txt tempd.txt;
for number in `seq 1 99999`; do
    ./isPrime-broken3 $number >> c.txt ; 
    ./isPrime-broken4 $number >> d.txt ; 
done
diff ans.txt c.txt > tempc.txt;
diff ans.txt d.txt > tempd.txt;
