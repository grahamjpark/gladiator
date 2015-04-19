#!/bin/bash
echo "Test: Fork"
su arena1 -c '../arena 10 ./aTildeTheHun ../fork &'
sleep 10
top -u arena1
sudo pkill -KILL arena1