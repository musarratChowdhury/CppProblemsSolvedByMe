const path = require('path');
var readLine = require('readline');

var rl = readLine.createInterface({
    input: process.stdin,
    output: process.stdout
});

let t = null;            // total test cases
let processed = 0;       // how many cases processed

rl.on('line', (line) => {
    if (t === null) {
        t = parseInt(line.trim());
        return; 
    }

    let input_array = line.trim().split(' ').map(Number);

    processed++;
    if (processed === t) {
        rl.close();
    }
});