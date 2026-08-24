#!/usr/bin/node
// Prints a square of the requested size.

const size = parseInt(process.argv[2], 10);

if (Number.isNaN(size)) {
  console.log('Missing size');
} else if (size > 0) {
  for (let row = 0; row < size; row += 1) {
    console.log('#'.repeat(size));
  }
}
