type Solution struct{}

var sizes []int

func (s *Solution) Encode(strs []string) string {
	var res string
	sizes = make([]int, 0, len(strs))

	for _, s := range strs {
		sizes = append(sizes, len(s))
		res += s
	}

	return res
}

func (s *Solution) Decode(encoded string) []string {
	var res []string
	i := 0

	for _, n := range sizes {
		e := i + n
		subStr := encoded[i:e]
		res = append(res, subStr)
		i += n
	}

	return res
}
