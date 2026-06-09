func longestConsecutive(nums []int) int {
    if len(nums) == 0 {
        return 0
    }

    s := make(map[int]struct{})

    for _, v := range nums {
        s[v] = struct{}{}
    }

    l := 1 

    for _, v := range nums {
        if _, exist := s[v - 1]; exist {
            continue
        } else {
            cs := 1
            c := v
            for {
                if _, exist := s[c + 1]; exist {
                    cs++
                    c++
                } else {
                    if l < cs {
                        l = cs
                    }
                    break
                }
            }
        }
    }
    return l
}
