const str = prompt('Enter your string').toLowerCase();
const len = str.length;
const vowelList = 'aeiou';
const consonantList = 'bcdfghjklmnpqrstvwxyz';
let vowelCount = 0;
let consonantCount = 0;
let otherCharacters = 0;

for (let i = 0; i < len; i++) vowelList.indexOf(str[i]) !== -1 ? vowelCount++ : consonantList.indexOf(str[i]) !== -1 ? consonantCount++ : otherCharacters++;

console.log('Vowel Count: ' + vowelCount + '\nConsonant count: ' + consonantCount + '\nOther characters: ' + otherCharacters);
