Javascript

const wordcount = (str, pattern = /[^a-z]/gi) => str.split(pattern).filter(Boolean).length;

wordcount('How many words are in this sentence??'); // 7
