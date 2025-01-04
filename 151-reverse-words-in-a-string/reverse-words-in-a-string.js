/**
 * @param {string} s
 * @return {string}
 */
var reverseWords = function (s) {
    if (!s.length) return s;
    const arr = s.trim().split(' ');
    let res = [];

    arr.forEach((a) => {
        if (a) {
            res.push(a);
        }
    })

    return res.reverse().join(' ');

};