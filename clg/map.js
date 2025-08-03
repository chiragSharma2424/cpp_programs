// let arr = [1, 2, 3, 4];
// let ans = arr.map((ele) => {
//     console.log(ele * 2);
//     return ele * 2;
// });
// console.log(ans);


const crypto = require('crypto');

function hashWithPrefix(prefix) {
    let input = 596139;
    while(true) {
        let inputStr = "chirag" + input.toString();
        let hash = crypto.createHash('sha256').update(inputStr).digest('hex');
        if(hash.startsWith(prefix)) {
            return {
                input: inputStr,
                hash: hash
            }
        }
        input++;
    }
}

const result = hashWithPrefix('0000');
console.log(`input: ${result.input}`);
console.log(`hash: ${result.hash}`);