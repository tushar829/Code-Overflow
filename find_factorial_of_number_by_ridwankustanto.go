package main

import (
	"flag"
	"fmt"
)

func main() {

	factorial := 1

	num := flag.Int("num", 0, "num of factorial")
	flag.Parse()

	if *num < 0 {
		fmt.Println("try another number, factorial does not exist for negative numbers")
		return
	}

	if *num == 0 {
		fmt.Println("the factorial of 0 is 1")
		return
	}

	for i := 0; i < *num; {
		i++
		factorial *= i
	}

	fmt.Println(fmt.Sprintf("The factorial of %v, is %v", *num, factorial))
}
