#!/bin/env bash
files=`git ls-files | grep -v doxygen`

# Note
sed -i -e 's/\\note /> /g' $files
# Sa
sed -i -e 's/\\sa /\n\/\/\/- /g' $files
# Code blocks
sed -i -e 's/\\code/```/g' $files
sed -i -e 's/\\endcode/```/g' $files
# List
sed -i -e 's/\\li \([a-zA-Z0-9_]*\)/- \1/g' $files
# Italics
sed -i -e 's/\\em \([a-zA-Z0-9_]*\)/*\1*/g' $files
sed -i -e 's/\\p \([a-zA-Z0-9_]*\)/*\1*/g' $files
sed -i -e 's/\\a \([a-zA-Z0-9_]*\)/*\1*/g' $files
# Bold
sed -i -e 's/\\b \([a-zA-Z0-9_]*\)/**\1**/g' $files
