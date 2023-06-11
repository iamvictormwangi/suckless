#!/bin/sh

# Increase volume
if [ "$1" = "1" ]; then
    amixer -q sset Master 5%+
# Decrease volume
elif [ "$1" = "2" ]; then
    amixer -q sset Master 5%-
# Toggle mute
elif [ "$1" = "3" ]; then
    amixer -q sset Master toggle
fi

# Get current volume level
volume=$(amixer get Master | awk -F'[][]' '/%/ {print $2}')
echo "Vol: $volume"
