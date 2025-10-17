const path = require("path");
var readLine = require("readline");

var rl = readLine.createInterface({
  input: process.stdin,
  output: process.stdout,
});

let t = null; // total test cases
let processed = 0; // how many cases processed
let freq = {};

rl.on("line", (line) => {
  if (t === null) {
    t = parseInt(line.trim());
    return;
  }

  let input_string = line.trim();
  if (freq.hasOwnProperty(input_string)) {
    freq[input_string]++;
  } else {
    freq[input_string] = 1;
  }

  processed++;
  if (processed === t) {
    let maxv = Object.values(freq)[0];
    let maxk = Object.keys(freq)[0];
    Object.keys(freq).forEach((k) => {
      console.log(k);
      console.log(freq[k]);
      console.log(maxv);
      if (freq[k] > maxv) {
        maxv = freq[k];
        maxk = k;
      }
    });
    console.log(freq);
    console.log(maxk);
    rl.close();
  }
});
