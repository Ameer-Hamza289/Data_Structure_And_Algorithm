/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function(nums) {
     const n = nums.length;
    const answer = new Array(n).fill(1);

     // First pass: Calculate prefix products
    let prefix = 1;
    for (let i = 0; i < n; i++) {
        answer[i] = prefix; // Store the product of all elements before i
        prefix *= nums[i];  // Update the prefix product
    }

 // Second pass: Calculate suffix products and multiply
    let suffix = 1;
    for (let i = n - 1; i >= 0; i--) {
        answer[i] *= suffix; // Multiply with the product of all elements after i
        suffix *= nums[i];   // Update the suffix product
    }

    return answer;
    
};