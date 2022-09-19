#!/bin/bash
read -p "выключить устройство да=1 или нет=2  " num

if [ "$num" == 1 ]; then
	sudo shutdown -h now
else
	echo "ok"

fi
