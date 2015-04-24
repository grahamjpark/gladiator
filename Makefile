all:  run

run: 
	gcc aTildeTheHun.c -o aTildeTheHun -ofast -flto -fno-stack-protector
clean:
	rm aTildeTheHun

