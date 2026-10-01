class Solution {
    public boolean isValid(String s) {
        Map<Character, Character> pairs = new HashMap<>();
        pairs.put(')', '(');
        pairs.put('}', '{');
        pairs.put(']', '[');

        List<Character> stack = new ArrayList<>();
        
        for(int i = 0; i < s.length(); i++) {
            if(pairs.containsKey(s.charAt(i))) {
                char top = '#';
                if(!stack.isEmpty()) 
                    top = stack.get(stack.size() - 1);

                if(top != pairs.get(s.charAt(i)))
                    stack.add(s.charAt(i));

                else stack.remove(stack.size() - 1);
            }
                
            else
                stack.add(s.charAt(i));
        }
            
        return stack.isEmpty();
    }
}