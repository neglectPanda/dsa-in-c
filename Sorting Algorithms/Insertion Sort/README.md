<h1>Insertion sort</h1>
<p>is a sorting algorithm that inserts an element into its proper position in an array(etc.) by comparing the element to its left side and shifting the elements on the left to have the desired arrangement.</p>

<p>Here's a <a href='https://en.wikipedia.org/wiki/Insertion_sort#/media/File:Insertion-sort-example-300px.gif'>visual representation</a> from wikipedia for better understanding.</p>

<h2>General Algorithm Explanation</h2>
<p>Let's say we have an array of numbers <code>int arr[] = {2, 4, 1, 5, 3};</code>. We want to arrange them in ascending order (smallest to largest).<br><br>
We assume that the smallest one here is at index <code>i = 1</code> which is <code>4</code>. It's this way so we can look to the left of it. Once a swap happens, everytime we loop through an element, it will always look at the elements at the left for comparison. If something is smaller, it will then get inserted at is proper position.
</p>

<h2>Code Explanation</h2>
<table>
  <tbody>
    <tr>
      <td>
        <code>for(int i = 1; i < size; i++)</code><br>
        <p><code>i = 1</code> means the index will start at the second element. It's like this so we can compare it to the element at the left.<br>This is the <strong>outer loop</strong> which will loop through all the elements.</p>
      </td>
    </tr>
    <tr>
      <td>
        <code>int key = arr[i];</code><br>
        <p>This is the variable we'll use to keep tractk of the elements we are looking at.</p>
      </td>
    </tr>
    <tr>
      <td>
        <code>int j = i - 1</code><br>
        <p>j is initialized to whatever is the element on the left of <code>i</code></p>
      </td>
    </tr>
    <tr>
      <td>
        <p>This is the <code>inner loop</code> which will focus on the elements shifting at the left</p>
        <code>while(j >= 0 && arr[j] > key){</code><br>
        <code>  arr[j+1] = arr[j];</code>
        <code>  j -= 1;</code>
        <code>}</code>
        <ul>
          <li>
            <p>The condition <code>j >= 0 && arr[j] > key</code> just means that if j hasnt reached 0 yet AND the element at arr[j] is greater than the key, we would switch them.<br><code>arr[j+1] is basically just <code>i</code>. Then, <code>j -= 1</code> just simply means shifting all the elements to the left</p>
          </li>
          <li>
            <p>If the condition(s) is/are no longer satisfied, meaning the element compared is smaller to the element that is being compared, then we just assign <code>arr[j+1]</code> to whatever the value of <code>key</code> is after the reassignments done.</p>
          </li>
        </ul>
      </td>
    </tr>
  </tbody>
</table>
