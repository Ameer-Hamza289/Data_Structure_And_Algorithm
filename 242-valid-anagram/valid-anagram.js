/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function(s, t) {
    const first=s.split('').sort();
    const second=t.split('').sort();

    return first.join()===second.join();
};