#!/bin/bash

export OBOX
while sleep 1;
do 
	OBOX=$(cat /home/pcmonkey/projects/nios2/software/final_sf/inbox.txt)
	echo $OBOX
	case $OBOX in
		-1)pkill -9 display;;
		11)./PathFindProject/proccess.sh map1.bmp;;
		1)display +borderwidth -backdrop  ./PathFindProject/map1.bmp &;;
		2)display +borderwidth -backdrop  ./PathFindProject/map2.bmp &;;
		22)./PathFindProject/proccess.sh map2.bmp;;
		3)display +borderwidth -backdrop  ./PathFindProject/map3.bmp &;;
		33)./PathFindProject/proccess.sh map3.bmp;;
		4)display +borderwidth -backdrop  ./PathFindProject/map4.bmp &;;
		44)./PathFindProject/proccess.sh map4.bmp;;
		5)display +borderwidth -backdrop  ./PathFindProject/map5.bmp &;;
		55)./PathFindProject/proccess.sh map5.bmp;;
		6)display +borderwidth -backdrop  ./PathFindProject/map6.bmp &;;
		66)./PathFindProject/proccess.sh map6.bmp;;
	esac
	echo "0">/home/pcmonkey/projects/nios2/software/final_sf/inbox.txt

done
