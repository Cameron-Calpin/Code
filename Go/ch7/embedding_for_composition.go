package main

import "fmt"

type Employee struct {
	Name string
	ID   string
}

func (e Employee) Description() string {
	return fmt.Sprintf("%s (%s)", e.Name, e.ID)
}

type Manager struct {
	// Employee is an Embedded Field
	Employee
	Reports []Employee
}

func (m Manager) FindNewEmployees() []Employee {
	// do business logic
	for i := 0; i < 5; i++ {
		emp := Employee{
			Name: "yeet yeeterson",
			ID:   string(rune(i)),
		}
		m.Reports = append(m.Reports, emp)
	}
	return m.Reports
}

func main() {
	m := Manager{
		Employee: Employee{
			Name: "Bob Bobson",
			ID:   "12345",
		},
		Reports: []Employee{},
	}
	fmt.Println(m.ID)            // prints 12345
	fmt.Println(m.Description()) // prints Bob Bobson

	report := m.FindNewEmployees()
	fmt.Println("Report:", report)
	fmt.Println("Manager.Reports:", m.Reports)

}
