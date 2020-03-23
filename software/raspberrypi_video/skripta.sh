#! /bin/sh
git fetch --all
git reset --hard origin/master
qmake && make
./raspberrypi_video
