func topKFrequent(nums []int, k int) []int {
    freq := make(map[int]int)

	for _, n := range nums {
		freq[n]++
	}

	type Pair struct {
		Num  int
		Freq int
	}

	pairs := make([]Pair, 0, len(freq))

	for num, count := range freq {
		pairs = append(pairs, Pair{
			Num:  num,
			Freq: count,
		})
	}

	sort.Slice(pairs, func(i, j int) bool {
		return pairs[i].Freq > pairs[j].Freq
	})

	res := make([]int, 0, k)

	for i := 0; i < k; i++ {
		res = append(res, pairs[i].Num)
	}

	return res
}
