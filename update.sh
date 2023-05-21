#!/bin/bash

ORG="greg2010"
REPO="ic11c"
PLATFORM="Linux_x86_64"


asset=$(curl -s https://api.github.com/repos/$ORG/$REPO/releases | jq -r '.[0].assets[].browser_download_url' | grep $PLATFORM)
temp=$(mktemp)

echo "Downloading $asset"
mkdir "./bin/"
curl -Lo  $temp $asset
tar -xvf $temp -C "$PWD/bin" ic11c