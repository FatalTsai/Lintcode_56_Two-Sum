 vector<int> twoSum(vector<int>& nums, int target) {
        // hash[i] represent  index of nums's value 
        // i  represent num's value
        unordered_map<int, int> hash;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(target - nums[i]) != hash.end()) { //hash.find is for finding the attribute
            
                // target - nums[i]'s index is smaller , put it in the front
                
                result.push_back(hash[target - nums[i]]);
                result.push_back(i);
                return result;
            }
            hash[nums[i]] = i;
        }
