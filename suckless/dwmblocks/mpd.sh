#!/bin/sh

# Get the current MPD status
status=$(mpc status | awk 'NR==2 {print $1}')
song=$(mpc current)

if [ "$status" = "[playing]" ]; then
    echo "MPD: $song"
elif [ "$status" = "[paused]" ]; then
    echo "MPD: Paused"
else
    echo "MPD: Stopped"
fi
