package main

import (
	"fmt"
	"net/http"
	"time"
)

func main() {
	links := []string{
		"http://google.com",
		"http://facebook.com",
		"http://stackoverflow.com",
		"http://golang.org",
		"http://amazon.com",
	}

	c := make(chan string)

	for _, link := range links {
		go checkLink(link, c)
	}

	// for i := 0; i < len(links); i++ {
	// 	go checkLink(<-c)
	// }
	// OR
	// for {
	// 	go checkLink(<-c, c)
	// }
	// OR
	for l := range c {
		// If you add sleep statement here, throttling program and go routines
		// to wait for reciever
		// time.Sleep(time.Second)
		// go checkLink(l, c)

		// Using function literal
		go func(link string) {
			time.Sleep(time.Second)
			checkLink(link, c)
		}(l)
	}

	// fmt.Println(<-c)
	// fmt.Println(<-c)
}

func checkLink(link string, out chan<- string) {
	time.Sleep(time.Second)
	_, err := http.Get(link)
	if err != nil {
		// out <- string(link) + " might be down!"
		out <- link
		fmt.Println(link, "might be down!")
		return
	}

	// out <- string(link) + " is up!"
	out <- link
	fmt.Println(link, "might be up!")
}
