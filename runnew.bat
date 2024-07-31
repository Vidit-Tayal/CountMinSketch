@echo off

g++ -o count_min_sketch main.cpp CountMinSketch.cpp HashFunctions.cpp Utils.cpp

.\count_min_sketch.exe
