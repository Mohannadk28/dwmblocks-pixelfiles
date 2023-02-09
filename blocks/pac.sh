#!/bin/sh

UPPKGS=$(yay -Qu | wc -l)

if [ "$UPPKGS" == "0" ] ; then
  echo ":D"
else
  yay -Qu | wc -l
fi

