#!/bin/bash

if command -v gnome-terminal &> /dev/null; then
    gnome-terminal -- bash -c "echo ./prog1; exec bash"
    gnome-terminal -- bash -c "echo ./prog2; exec bash"
elif command -v konsole &> /dev/null; then
    konsole -e bash -c "echo ./prog1; exec bash"
    konsole -e bash -c "echo ./prog2; exec bash"
elif command -v xterm &> /dev/null; then
    xterm -c "echo ./prog1; exec bash"
    xterm -c "echo ./prog2; exec bash"
elif command -v alacritty &> /dev/null; then
    alacritty -e bash -c "echo ./prog1; exec bash"
    alacritty -e bash -c "echo ./prog2; exec bash"
else
    echo "No supported terminal found"
fi