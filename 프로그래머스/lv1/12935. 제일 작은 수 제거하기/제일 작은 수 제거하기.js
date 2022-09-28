function solution(arr) {
  var min = Math.min(...arr);
  if (arr.length === 1) {
    return [-1];
  }
  return arr.filter((n) => n !== min);
}