#!/bin/sh

amixer get Master |grep % |awk '{print $5}'|sed 's/[^0-9\%]//g' | head -n 1

