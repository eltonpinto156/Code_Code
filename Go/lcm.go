package main
import "fmt"

func lcm(temp1 int,temp2 int) { 
    var lcmnum int =1
    if(temp1>temp2)    {
        lcmnum=temp1
    }else{
        lcmnum=temp2
    }

    for {        
        if(lcmnum%temp1==0 && lcmnum%temp2==0) {    
            fmt.Printf("LCM of %d and %d is %d",temp1,temp2,lcmnum)            
            break
        }
        lcmnum++
    }
    return 
}


func main() {
    var n1,n2,action int
    fmt.Println("Enter two positive integers : ")
    fmt.Scanln(&n1)
    fmt.Scanln(&n2)
    lcm(n1,n2)
  
}
