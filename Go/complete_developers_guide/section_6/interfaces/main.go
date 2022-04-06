package main

import "fmt"

type bot interface {
	getGreeting() string
	getNumber() int
	// getBotVersion() float64
	// respondToUser(user) string
}

type englishBot struct{}
type spanishBot struct{}

func main() {
	eb := englishBot{}
	sb := spanishBot{}

	printGreeting(eb)
	printNumber(eb)
	printGreeting(sb)
	printNumber(sb)
}

// Reduced this to one statement in interface: bot
// func printGreeting(eb englishBot) {
// 	fmt.Println(eb.getGreeting())
// }
// func printGreeting(sb spanishBot) {
// 	fmt.Println(sb.getGreeting)
// }

func printGreeting(b bot) {
	fmt.Println(b.getGreeting())
}

func printNumber(n bot) {
	fmt.Println(n.getNumber())
}

func (englishBot) getNumber() int {
	return 20
}

func (spanishBot) getNumber() int {
	return 10
}

func (englishBot) getGreeting() string {
	// VERY custom logic for generating an english greeting
	return "Hi there!"
}

func (spanishBot) getGreeting() string {
	return "Hola!"
}
