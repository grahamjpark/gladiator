all:  run

run: 
	gcc aTildeTheHun.c -o aTildeTheHun -ofast -fno-stack-protector

clean:
	rm aTildeTheHun

