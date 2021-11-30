#!/bin/bash
 cd $1
 /home/zamax110813/.local/bin/oj t
 if [ $? -eq 1 ];then
 	echo "failed"
 else
 	/mnt/c/Users/k802684/AppData/Raming/npm/acc s
 fi 