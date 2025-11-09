#! /bin/bash

git add ./* ./src/* ./include/*
echo "Enter a commit message:"
read message
#echo $message
git commit -m "$message"
git push 

