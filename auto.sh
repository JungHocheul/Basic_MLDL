#!/bin/bash

git add .
echo -n "Commit comment>"
read comment
git commit -m "$comment"
git branch -M main
git remote add origin https://github.com/JungHocheul/Basic_MLDL.git
git push -u origin main
