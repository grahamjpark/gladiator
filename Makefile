all:  run

run: 
	gcc aTildeTheHun.c -o aTildeTheHun -Ofast -flto -fno-stack-protector
clean:
	rm aTildeTheHun

