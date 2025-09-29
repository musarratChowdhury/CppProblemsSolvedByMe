// Node.js (process.stdin) — optimized, Codeforces-ready
'use strict';

process.stdin.resume();
process.stdin.setEncoding('utf8');

let data = '';
process.stdin.on('data', chunk => { data += chunk; });

process.stdin.on('end', () => {
  const tokens = data.trim().split(/\s+/).map(Number);
  let t = tokens[0], idx = 1;
  const out = [];

  while (t--) {
    // participants at tokens[idx] .. tokens[idx+3]
    const T = tokens[idx];
    let greater = 0;
    for (let j = 0; j < 4; j++) {
      if (tokens[idx + j] > T) greater++;
    }
    out.push(greater + 1); // rank = 1 + how many are strictly greater than T
    idx += 4;
  }

  console.log(out.join('\n'));
});
