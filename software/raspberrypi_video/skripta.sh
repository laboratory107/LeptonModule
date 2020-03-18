#! /bin/sh
git pull
qmake && make
./raspberrypi_video
