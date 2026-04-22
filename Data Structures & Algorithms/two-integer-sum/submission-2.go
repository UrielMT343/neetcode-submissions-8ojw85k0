func twoSum(nums []int, target int) []int {
    seen := make(map[int]int)
    res := []int{}

    for i, val := range nums {
        mVal, ok := seen[target - val]
        if ok {
            res = append(res, mVal)
            res = append(res, i)
            break
        }
        seen[val] = i
    }

    return res
}
