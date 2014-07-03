#!/bin/bash
IMAGE=$1

WIDE=$(file $IMAGE | awk '{print $7}')
HEIGHT=$(file $IMAGE | awk '{print $9}')

sed -i "s/SIZEW .*/SIZEW "$WIDE"/g" ../Ainclude/path.hpp 
sed -i "s/SIZEH .*/SIZEH "$HEIGHT"/g" ../Ainclude/path.hpp 
make clean
make all
echo $IMAGE
./path.o $IMAGE
echo $IMAGE
IM=${IMAGE:0:4}Pfig.bmp
display +borderwidth -backdrop  /home/pcmonkey/fff/PathFindProject/$IM &





