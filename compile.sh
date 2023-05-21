#!/bin/bash

FNAME=$1
IC11C_PATH="./bin/ic11c"

echo "Compiling $FNAME and copying to clipboard..."

$IC11C_PATH "$FNAME" -v

cat a.out | wl-copy
rm a.out
echo 'Done.'
