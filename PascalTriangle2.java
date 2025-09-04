class Solution {
    public List<Integer> getRow(int rowIndex) {
         List<Integer> row = new ArrayList<>();
        row.add(1); // first row is always [1]

        for (int i = 1; i <= rowIndex; i++) {
            row.add(0); // expand size by 1
            // update from right to left
            for (int j = i; j > 0; j--) {
                row.set(j, row.get(j) + row.get(j - 1));
            }
        }
        return row;
    }
}
