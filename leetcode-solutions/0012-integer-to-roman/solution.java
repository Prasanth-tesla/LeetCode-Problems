class Solution {
    public String intToRoman(int num) {
        Map <Integer, String> rom = new LinkedHashMap <> ();
        rom.put(1000,"M");
        rom.put(900,"CM");
        rom.put(500,"D");
        rom.put(400,"CD");
        rom.put(100,"C");
        rom.put(90,"XC");
        rom.put(50,"L");
        rom.put(40,"XL");
        rom.put(10,"X");
        rom.put(9,"IX");
        rom.put(5,"V");
        rom.put(4,"IV");
        rom.put(1,"I");

        StringBuilder res = new StringBuilder();

        for(int val:rom.keySet()) {
            while (num >= val) {
                res.append(rom.get(val));
                num -= val;
            }
        }

        return res.toString();
    }
}
