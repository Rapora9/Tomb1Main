#!/bin/sh
set -x
set -e

cd /app/scripts/installer/

export DOTNET_CLI_HOME="/tmp/DOTNET_CLI_HOME"

rm -rf bin obj out/*
dotnet restore
dotnet publish -c Release -o out
