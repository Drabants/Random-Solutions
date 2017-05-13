package main

import (
	"fmt"
)

func main() {
	var sum int;
	for i := 0; i<=1000/3; i++{
		sum += i*3
	}
	for i:= 0 ; i<1000/5; i++{
		sum += i*5
	}
	for i:= 0; i<=1000/15; i++{
		sum -= i*15
	}
	fmt.Println(sum)
}
