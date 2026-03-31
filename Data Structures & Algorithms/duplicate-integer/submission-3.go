func hasDuplicate(nums []int) bool {
    size := len(nums)
    for i := 0; i < size; i++ {
        for j := i + 1; j < size; j++ {
            if nums[i] == nums[j] {
                return true
            }
        }
    }
    return false
}
