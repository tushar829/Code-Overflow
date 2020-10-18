package main

import (
	"flag"
	"fmt"
	"strings"
)

func main() {

	defaultArr := "1,31,october,hacktoberfest"
	fmt.Println("Default array value: ", defaultArr)

	var (
		arr, arrReversed []interface{}
	)

	str := flag.String("array", defaultArr, "set of array that want to be reversed. must be separated by ',' between the items")
	flag.Parse()

	arrStr := strings.Split(*str, ",")
	for _, item := range arrStr {
		arr = append(arr, item)
	}

	fmt.Println("set of array: ", arr)

	arrLenght := len(arr)

	for i := arrLenght-1; i >= 0; i-- {
		arrReversed = append(arrReversed, arr[i])
	}

	fmt.Println("set of reversed array: ", arrReversed)

}
