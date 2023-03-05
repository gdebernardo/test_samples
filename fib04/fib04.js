 function fibonacci(num) {
   if(num < 2)
     return num;
   let prevprev=0;
   let prev=1;
   let sum=1;
   let i=1;
   while (i<num) {
      sum=prevprev+prev;
      prevprev=prev;
      prev=sum;
      i+=1;
   }
   return sum;
 }

let n = process.argv.slice(2);
console.log("Fibonacci("+n+")= "+fibonacci(n));
