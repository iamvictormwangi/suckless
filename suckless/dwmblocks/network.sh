#!/bin/sh

# Get the network status using iwconfig
ssid=$(iwconfig wlan0 | awk -F'"' '/ESSID/ {print $2}')
ip=$(ip a show dev wlan0 | awk '/inet / {print $2}')
echo "Network: $ssid $ip"
