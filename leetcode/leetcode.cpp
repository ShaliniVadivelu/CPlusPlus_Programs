// two sum
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int>m; //map to store the elements
        vector <int> result; 
    for (int i=0; i<nums.size();i++) 
    {
        /*checking whether diff b/w target and picked element is there in the map and 
        checking whether diff index and picked element index is not name */
      if(m.find(target-nums[i])!=m.end() && i !=m[target-nums[i]] 
        {                                       // if diff is there it wil go  next 2 step else print value in map
          result.push_back(m[target-nums[i]]); // pushing the index of diff element
          result.push_back(i);                 // pushing the index of picked element
        }
         m[nums[i]]=i;                         
    }
      return result;                           // printing the result
    }   
    
};

// palindrome
class Solution {
public:
    bool isPalindrome(int x) {
        long int digit, rev=0,x1;
        x1=x;
        if (x>=0)  
        {
        do {            
            digit=x %10;   
            rev=(rev *10) +digit;
            x=x/10;
        } while (x !=0);
        
            {
        if (x1==rev)                                                                                                                                                             
            return true;
        else
            return false;
            }
        }
            else 
                return false;
    }
};

// Leetcode
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>v1={{1}}; // 2d vector to store and print the output.
        
        for (int i=1;i<numRows;i++)
        {
            vector<int> v2;  //vectore to store the row elements then will push it to v1;
            //in pascals triangle we can  1 is the 1st element in all rows, so pushing 1 manually
            v2.push_back (1); 
        
        for (int j=1;j<=i-1;j++)
        {
            v2.push_back(v1[i-1][j-1]+ v1[i-1][j]); // used to print the elements inside 1st and last;
        }
            v2.push_back(1); //in all rows 1 is the last element,so manually pushing 1;
            v1.push_back(v2); //storing v2 elements to v1;
    }
     return v1; //printing v1;
    } 
};

