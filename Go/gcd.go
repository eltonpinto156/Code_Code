package main
import "fmt"


func gcd(temp1 int,temp2 int){
       var gcdnum int
    /* Use of And operator in For Loop */   
    for i := 1; i <=temp1 && i <=temp2 ; i++ {
            if(temp1%i==0 && temp2%i==0) {
                gcdnum=i
            } 
        }
        fmt.Printf("GCD of %d and %d is %d",temp1,temp2,gcdnum)
    return
}  


func main() {
    var n1,n2,action int
    fmt.Println("Enter two positive integers : ")
    fmt.Scanln(&n1)
    fmt.Scanln(&n2)
            gcd(n1,n2)
    }
}
