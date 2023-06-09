<h2><a href="https://practice.geeksforgeeks.org/problems/5ae4f296db3e6bb74641c4087d587b6f89d9d135/1">Find Total Time Taken</a></h2><h3>Difficulty Level : Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size:18px"><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #ADC9FF !important;cursor: pointer !important;" highlightid="5zgsrt0vliuvr8fw">You are given an array </glasp><strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #ADC9FF !important;cursor: pointer !important;" highlightid="5zgsrt0vliuvr8fw">arr</glasp></strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #ADC9FF !important;cursor: pointer !important;" highlightid="5zgsrt0vliuvr8fw"> of size </glasp><strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #ADC9FF !important;cursor: pointer !important;" highlightid="5zgsrt0vliuvr8fw">n</glasp></strong>,<glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #F9F47F !important;cursor: pointer !important;" highlightid="4t1jge60r0zgxpje"> containing the values in between </glasp><strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #F9F47F !important;cursor: pointer !important;" highlightid="4t1jge60r0zgxpje">1</glasp></strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #F9F47F !important;cursor: pointer !important;" highlightid="4t1jge60r0zgxpje"> to </glasp><strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #F9F47F !important;cursor: pointer !important;" highlightid="4t1jge60r0zgxpje">n </glasp></strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #F9F47F !important;cursor: pointer !important;" highlightid="4t1jge60r0zgxpje">&amp;</glasp><strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #F9F47F !important;cursor: pointer !important;" highlightid="4t1jge60r0zgxpje"> time </glasp></strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #F9F47F !important;cursor: pointer !important;" highlightid="4t1jge60r0zgxpje">of size</glasp><strong><glasp class="highlighter--highlighted" style="font-weight: inherit !important;font-style: inherit !important;line-height: inherit !important;background-color: #F9F47F !important;cursor: pointer !important;" highlightid="4t1jge60r0zgxpje"> n,</glasp> </strong>containg time in sec, you are asked to determine the total time taken in order to pick all the array elements from left to right but there is a condition, If from left, previous elments are different it takes <strong>1 Sec</strong> to pick &amp; if element got repeated then it will take&nbsp;<strong>time[arr[i]].</strong></span></p>

<p><span style="font-size:18px"><strong>NOTE:</strong><br>
1. It takes <strong>1 sec </strong>to move from index i to i+1 (1 &lt;= i &lt; n).<br>
<strong>2</strong>. <strong>1-based indexing.</strong></span></p>

<p><span style="font-size:18px"><strong>Example 1:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 4
arr = {1, 2, 3, 3}
time = {1, 2, 3, 4}
<strong>Output:</strong>
5
<strong>Explanation:</strong>
for 1st element(1) = 0 Sec-&gt; total = 0
&nbsp;   2nd element(2) = 1 Sec-&gt; total = 1+0=1
&nbsp;   3rd element(3) = 1 Sec-&gt; total = 1+1=2
&nbsp;   4th element(3) : here element 3 is repeated
&nbsp;   so we have to calculate time by <strong>time[arr[i]]</strong>
&nbsp;   <strong>: </strong>time[arr[4]] =&gt; time[3] =&gt; 3 -&gt; total = 2+3 =5
here you can see 4th element(3) is repeated
so time will be not 1 sec &amp; we have to
calculate time by this: <strong>time[arr[i]].</strong></span></pre>

<p><span style="font-size:18px"><strong>Example 2:</strong></span></p>

<pre><span style="font-size:18px"><strong>Input:</strong>
n = 4
arr = {1, 2, 3, 4}
time = {1, 2, 3, 4}
<strong>Output:</strong>
3
<strong>Explanation:</strong>
for 1st element(1) = 0 Sec-&gt; total = 0
&nbsp;   2nd element(2) = 1 Sec-&gt; total = 1
&nbsp;   3rd element(3) = 1 Sec-&gt; total = 2
&nbsp;   4th element(4) = 1 Sec-&gt; total = 3
here you can see no elements are repeated
so time will be 1 sec else will have to 
calculate time by this: <strong>time[arr[i]].</strong></span>
</pre>

<p><span style="font-size:18px"><strong>Your Task:</strong><br>
You don't need to read input or print anything. Your task is to complete the function totalTime() which takes three variables n, arr, time, as explained in the problem statement, and returns the total time taken to pick all the elements.<br>
<br>
<strong>Expected Time Complexity:</strong> O(n)<br>
<strong>Expected Auxiliary Space:</strong> O(n)</span><br>
<br>
<span style="font-size:18px"><strong>Constraints:</strong><br>
1 &lt;= n &lt;= 10^5<br>
1 &lt;= arr[i] &lt;= n<br>
1 &lt;= time[i] &lt;= 10^5</span></p>
</div><br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Arrays</code>&nbsp;<code>Hash</code>&nbsp;<code>Data Structures</code>&nbsp;