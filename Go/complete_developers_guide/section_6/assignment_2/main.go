package main

import "fmt"

type shape interface {
	getName() string
	getArea() float64
}

type triangle struct {
	shapeName string
	height    float64
	base      float64
}

type square struct {
	shapeName  string
	sideLength float64
}

func main() {
	tri := triangle{
		shapeName: "triangle",
		height:    6.4,
		base:      9.7,
	}

	sq := square{
		shapeName:  "square",
		sideLength: 4.6,
	}

	printArea(tri)
	printArea(sq)
}

func (s square) getArea() float64 {
	return s.sideLength * s.sideLength
}

func (t triangle) getArea() float64 {
	return 0.5 * t.base * t.height
}

func (s square) getName() string {
	return s.shapeName
}

func (t triangle) getName() string {
	return t.shapeName
}

func printArea(sh shape) {
	fmt.Printf("Area of %+v: %+v\n", sh.getName(), sh.getArea())
}
