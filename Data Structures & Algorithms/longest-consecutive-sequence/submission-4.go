import "slices"

func longestConsecutive(nums []int) int {
    if len(nums) == 0 {
        return 0
    }

    slices.Sort(nums)
    l := 1
    c := 1
    a := nums[0]
    for _, v := range nums {
        if a == v {
            continue
        }

        if v == (a + 1) {
            c++
        } else {
            if c > l {
                l = c
            }
            c = 1
        }
        a = v
    }

    if c > l {
        l = c
    }

    return l
}
