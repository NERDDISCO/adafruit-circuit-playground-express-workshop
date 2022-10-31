# Capturing and graphing sound level data 

This .ino file can be used to produce output that can be captured on a macbook written to an rrd database and produce graphs

## Seting up the database

We need to crate an rrd database where the sound data will be stored.
```
rrdtool create sound.rrd \
--step 10 \
DS:partysound:GAUGE:60:0:200 \
RRA:MAX:0.5:1:28800
```

## Reading the usb port

To read the usb port serial output I have used a hack to read it using the logging function of the screen command. 
There could be a more canonical way to read from the usb port but this was what I was able to scrounge up for 
getting this to work for the party.

```
screen -L /dev/cu.usbmodem14101 9600
```

Please make sure you addapt the device to match your device. This will start writting what the adafruit device is
outputing in a file called `screenlog.0`.

## Capture the data and putting it in the database

We can now read what is written to the `screenlog.0` file and write it to the database. We can do this in a terminal window
and run it continously with the followitn command.

```
while true ; do  rrdtool update sound.rrd N:`cat screenlog.0|tail -1|egrep -o "[0-9.]*"` ; sleep 1; done
```

## Generating the graph

We can now use the respective rrd command to create a graph of the captured data

```
rrdtool graph temp_graph.png \
-w 1000 -h 400 -a PNG \
--slope-mode \
--start -19200 --end now \
--vertical-label "sound pressure from CPX" \
DEF:sound1=sound.rrd:partysound:MAX \
LINE1:sound1#ff0000:""
```

