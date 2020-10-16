package solution

// you can also use imports, for example:
import "fmt"
import "strconv"
import "strings"
// import "os"

// you can write to stdout for debugging purposes, e.g.
// fmt.Println("this is a debug message")


func Solution(N int) int {
    // write your code in Go 1.4
    N64 := int64(N)
    binary := fmt.Sprintf("%s", strconv.FormatInt(N64, 2))
    arr := strings.Split(binary, "")
    
    count := 0
    gap := 0
    var firstOne string
    for _, el := range arr {
        if el == "1" && firstOne == "" {
            firstOne = el
        } else if el == "1" {
            if count > gap {
                gap = count
            }
            count = 0
            firstOne = el
        } else {
            count++
        }
    }
    
    return gap
}
