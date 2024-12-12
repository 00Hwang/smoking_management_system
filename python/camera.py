import serial
import os
ser = serial.Serial(‘/dev/ttyACM0’, 9600)
ser.flush()
while True:
        data = ser.readline().decode(‘utf-8’).strip()
        print(“received”, data)

        if data == “연기 감지”:
               os.system(“libcamera-jpeg –0 ./smoke_picture/$(date)
              ‘+%y.%m.%d.><%m.%d.%H:%M:%S’).jpg”)