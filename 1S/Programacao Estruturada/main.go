package main

import "fmt"

func main() {
	fmt.Println(recursao(27))
}

func recursao(n int) int {
	if n <= 10 {
		return (n * 2)
	} else {
		return recursao(recursao(n / 3))
	}
}
