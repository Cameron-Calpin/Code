package main

import "fmt"

func main() {
	colors := map[string]string{
		"red":   "#ff0000",
		"green": "#008000",
		"blue":  "#0000FF",
		"white": "#FFFFFF",
	}

	// colors := make(map[string]string)
	// colors["white"] = "#FFFFFF"

	// delete(colors, "white")
	// fmt.Println(colors)

	printMap(colors)
}

func printMap(c map[string]string) {
	// declaring, assigning and declaring color and hex
	for color, hex := range c {
		fmt.Println("Hex code for", color, "is", hex)
	}
}
