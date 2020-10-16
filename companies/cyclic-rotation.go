package solution

// you can also use imports, for example:
// import "fmt"
// import "os"

// you can write to stdout for debugging purposes, e.g.
// fmt.Println("this is a debug message")

func Solution(A []int, K int) []int {
    // write your code in Go 1.4
    
    var arr []int
    var index = 0
    var i int
    j := 0
    for i = len(A) - 1; j < K; i,j = i-1, j+1 {
        if j >= len(A) && j % len(A) == 0 {
            i = len(A) - 1
        }
        index = i
    }
    
    
    arr = append(arr, A[index])
    for x := 0; x < len(A); x++ {
        if x > index {
            arr = append(arr, A[x])
        }
    }
    
    for z:=0; z < len(A); z++ {
        if z < index {
            arr = append(arr, A[z])
        }
    }
    
    return arr
}
