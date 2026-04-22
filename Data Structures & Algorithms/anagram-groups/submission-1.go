import "slices"

func groupAnagrams(strs []string) [][]string {
    m := make(map[string][]string)
    for _, s := range strs {
        r := []rune(s)
        slices.Sort(r)
        str := string(r)
        m[str] = append(m[str], s)
    }

    res := [][]string{}

    for _, s := range m {
        res = append(res, s)
    }

    return res
}
