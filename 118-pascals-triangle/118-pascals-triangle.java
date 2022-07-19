class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> solution = new ArrayList<>();
        solution.add(List.of(1));
        
        for (int level = 1; level < numRows ; level++) {
            List<Integer> prev = solution.get(level - 1);
            List<Integer> curr = new ArrayList<>();
            curr.add(1);
            for (int pos = 1; pos < level; pos++) {
                curr.add(prev.get(pos - 1) + prev.get(pos));
            }
            curr.add(1);
            solution.add(curr);
        }
        
        return solution;
    }
}