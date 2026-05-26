func productExceptSelf(nums []int) []int {
	res := make([]int, 0, len(nums))

	for i := 0; i < len(nums); i++ {
		m := 1
		for j := 0; j < len(nums); j++ {
			if i == j {
				continue
			}
			
			m *= nums[j]
		}
		
		res = append(res, m)
	}

	return res
}
