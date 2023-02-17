#!/bin/sh

UPPKGS=$(checkupdates | wc -l)

if [ "$UPPKGS" == "0" ] ; then
  echo ":D"
else
  checkupdates | wc -l
fi

