#!/bin/bash

# Check system for NVIDIA card and set env vars

if [[ $(lshw -C display | grep vendor) =~ Nvidia ]]; then
        export LIBVA_DRIVER_NAME=nvidia
        export MOZ_DISABLE_RDD_SANDBOX=1
        export EGL_PLATFORM=wayland
else
        echo "No NVIDIA GPU detected. No env vars set."
fi