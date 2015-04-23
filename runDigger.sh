make
su arena1 -c '../arena 10 ./aTildeTheHun ../digger &'
sleep 10
top -u arena1
sleep 1
sudo pkill -KILL -u arena1
