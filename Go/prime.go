package main
import "fmt"

func main() {
    var num, count int
    count = 0
    fmt.Print("Enter the number to find the prime number = ")
    fmt.Scanln(#)

    for i := 2; i < num/2; i++ {
        if num%i == 0 {
           count++
            break
        }
    }

    if count == 0 && num != 1 {
        fmt.Println(num, " is a Prime number")
    } else {
        fmt.Println(num, " is not a Prime number")
    }
}
