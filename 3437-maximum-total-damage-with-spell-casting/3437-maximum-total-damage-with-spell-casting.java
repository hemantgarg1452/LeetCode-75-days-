class Solution {
    public long maximumTotalDamage(int[] power) {
        Map<Integer, Integer> powerFrequencyCals = new HashMap<>();
        for (int xPower : power) {
            powerFrequencyCals.put(xPower, powerFrequencyCals.getOrDefault(xPower, 0) + 1);
        }

        List<Integer> uniquePowersCals = new ArrayList<>(powerFrequencyCals.keySet());
        Collections.sort(uniquePowersCals);

        int totalPowerCnt = uniquePowersCals.size();
        if (totalPowerCnt == 1) return (long) uniquePowersCals.get(0) * powerFrequencyCals.get(uniquePowersCals.get(0));
        

        long[] finalMaxDmg = new long[totalPowerCnt + 1];

        for (int i = 1; i <= totalPowerCnt; ++i) {
            long presentDmg = (long) uniquePowersCals.get(i - 1) * powerFrequencyCals.get(uniquePowersCals.get(i - 1));
            long RecDmg = presentDmg;

            for (int j = i - 2; j >= 0; j--) {
                if (uniquePowersCals.get(i - 1) - uniquePowersCals.get(j) > 2) {
                    RecDmg += finalMaxDmg[j + 1];
                    break;
                }
            }

            long DmgLess = finalMaxDmg[i - 1];
            finalMaxDmg[i] = Math.max(RecDmg, DmgLess);
        }

        return finalMaxDmg[totalPowerCnt];
    }
}