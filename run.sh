#! /bin/bash

filename=$1
rm -rf bin
mkdir -p bin
file=`echo $filename | grep -o '^[^\.]*'`

gcc ./$filename -o bin/$file && bin/$file