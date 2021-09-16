#!/bin/env bash

# Code blocks
sed -i -e 's/\\code/```/g' `git ls-files`
sed -i -e 's/\\endcode/```/g' `git ls-files`
# List
sed -i -e 's/\\li \([a-zA-Z0-9_]*\)/- \1/g' `git ls-files`
# Italics
sed -i -e 's/\\em \([a-zA-Z0-9_]*\)/*\1*/g' `git ls-files`
sed -i -e 's/\\p \([a-zA-Z0-9_]*\)/*\1*/g' `git ls-files`
# Bold
sed -i -e 's/\\b \([a-zA-Z0-9_]*\)/**\1**/g' `git ls-files`
