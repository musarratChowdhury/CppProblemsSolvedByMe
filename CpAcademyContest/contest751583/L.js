const path = require('path');
var readLine = require('readline');

var rl = readLine.createInterface({
    input: process.stdin,
    output: process.stdout
});

let N = null;  
let K= 0;          // total test cases
let processed = 0;  
let s_arr = [];     // how many cases processed

rl.on('line', (line) => {
    if (N === null) {
        N = parseInt(line.trim().split(' ')[0]);
        K = parseInt(line.trim().split(' ')[1]);
        return; 
    }

    let input = line.trim();
    s_arr.push(input);

    processed++;
    if (processed === K) {

        s_arr.sort();
        s_arr.forEach(s=>{
            console.log(s);
        });
        rl.close();
    }
});