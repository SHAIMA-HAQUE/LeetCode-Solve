class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        map<char, char> map;
        set<char> set;
        
        for (int i = 0; i < s.length(); i++)
	{
		char c1 = s[i], c2 = t[i];
	
		// If c1 has been encountered before:
		if (map.find(c1) != map.end())
		{
			// Return false if first occurrence of c1 is mapped to
			// a different character.
			if (map[c1] != c2)
				return false;
		}

		// If c1 is encountered for the first time, it has not been mapped yet:
		else
		{
			// Return false if c2 is already mapped to some other char in str1
			if (set.find(c2) != set.end())
				return false;
		
			// All checks passed. So insert in the map, and the set.
			map[c1] = c2;
			set.insert(c2);
		}
	}
	return true;
    }
};