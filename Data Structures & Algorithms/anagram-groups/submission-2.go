import "slices"

func groupAnagrams(strs []string) [][]string {
    m := make(map[string][]string)
    for _, s := range strs {
        r := []rune(s)
        slices.Sort(r)
        m[string(r)] = append(m[string(r)], s)
    }

    res := [][]string{}

    for _, s := range m {
        res = append(res, s)
    }

    return res
}
