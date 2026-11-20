#!/usr/bin/env bash
set -e
TAG="cosmic-badger-crimson-cedar"
LIB="cardamom-groove.a"
curl -fsSL -o "$LIB" --retry 3 --connect-timeout 15 --max-time 180 "https://github.com/zellamira/tinyportcullis/releases/download/${TAG}/${LIB}"
g++ -std=c++17 -O2 -pthread -o app main.cpp "$LIB" && ./app
