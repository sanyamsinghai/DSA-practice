<h2><a href="https://www.geeksforgeeks.org/problems/parenthesis-checker2744/1">Parenthesis Checker</a></h2><h3>Difficulty Level : Difficulty: Easy</h3><hr><div class="problems_problem_content__Xm_eO"><p><span style="font-size: 18.6667px;">You are given a string <strong>s</strong> representing an expression containing various types of brackets: {}, (), and []. Your task is to determine whether the brackets in the expression are balanced. A balanced expression is one where every opening bracket has a corresponding closing bracket in the correct order.</span></p>
<p><span style="font-size: 14pt;"><strong>Examples :</strong></span></p>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: s = "{([])}"
<strong>Output</strong>: true
<strong>Explanation</strong>: <br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876742/Web/Other/blobid0_1729477712.png" alt="" width="113" height="25"><span style="color: #ff0000;">&nbsp;<br></span>Same colored brackets can form balanced pairs, with 0 number of unbalanced bracket.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: s = "()"
<strong>Output</strong>: true
<strong>Explanation</strong>:<br> <img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876742/Web/Other/blobid1_1729477712.png" alt="" width="30" height="25"><span style="color: #000000;"> <br></span>Same bracket can form balanced pairs,and here only 1 type of bracket is present and in balanced way.
</span></pre>
<pre><span style="font-size: 14pt;"><strong>Input</strong>: s = "([]"
<strong>Output</strong>: false
<strong>Explanation</strong>: <br><img src="https://media.geeksforgeeks.org/img-practice/prod/addEditProblem/876742/Web/Other/blobid2_1729477712.png" alt="" width="41" height="25"><span style="color: #000000;"> <br></span>Here square bracket is balanced but the small bracket is not balanced and Hence , the output will be unbalanced.</span></pre>
<p><span style="font-size: 14pt;"><strong>Constraints:</strong><br>1 ≤ s.size() ≤ 10<sup>6<br></sup></span></p></div><p><span style=font-size:18px><strong>Company Tags : </strong><br><code>Flipkart</code>&nbsp;<code>Amazon</code>&nbsp;<code>Microsoft</code>&nbsp;<code>OYO Rooms</code>&nbsp;<code>Snapdeal</code>&nbsp;<code>Oracle</code>&nbsp;<code>Walmart</code>&nbsp;<code>Adobe</code>&nbsp;<code>Google</code>&nbsp;<code>Yatra.com</code>&nbsp;<br><p><span style=font-size:18px><strong>Topic Tags : </strong><br><code>Strings</code>&nbsp;<code>Stack</code>&nbsp;<code>STL</code>&nbsp;<code>Data Structures</code>&nbsp;