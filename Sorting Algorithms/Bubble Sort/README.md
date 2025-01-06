<h1>Bubble Sort</h1>
<p>So bubble sort is a sorting algorithm. It compares 2 consecutive elements and sort them.</p>
<p><i>Example:</i><br>
  Let's say you have an array with messy arranged elements like so<br>
  <code>int arr[] = {9, 2, 4, 1, 6, 8, 7, 5, 3, 0};</code><br>
  and you want to arrange them from decreasing to increasing order.<br>
</p>
<p>
  Check this <a href='https://en.wikipedia.org/wiki/Bubble_sort#/media/File:Bubble-sort-example-300px.gif' target="_blank">video</a> out for visual presentation.
</p>
<p>
  From the video, you can see it's comparing the elements. It's trying to see if the element at let's say arr[i] is bigger than arr[i+1].<br>
  If it is, then it swaps them out.<br><br>
  <i>Example:</i><br>
  Let's focus on the first two elements of the array, <code>9</code> and <code>2</code>.<br>
  The condition <code>arr[i] > arr[i+1]</code> will check if 9 <code>(arr[i])</code> is bigger than 2 <code>(arr[i+1])</code>. Since here it is <code>true</code>, it will swap out <code>9</code> and <code>2</code>.<br><br>
  <i>Therefore, the new arrangement of the array, focusing on the first two elements is:</i><br>
  <code>{2, 9, ...}</code><br><br>

  It's basically like this as it goes through all of the elements until it is sorted. Which means that the smallest value element <code>0</code> is in the first index <code>i = 0</code> and the largest value element <code>9</code> is at index <code>i = 9</code>
</p>

<h3>Code Explanation</h3>
<table>
  <tbody>
    <tr>
      <td>
        <code>bool isSwapped = false;</code><br>
        <p>We are initializing a boolean variable named isSwapped to false. This means that in the initial run of the program, nothing has been swapped yet.</p>
      </td>
    </tr>
    <tr>
      <code>int i = 0;</code><br>
      <p>This is a pass count of the array. In simple terms, this keeps count on the number of times the bubble sort has been completed.<br>
        <i>Example:</i><br>
        When <code>9</code> and <code>2</code> switches in the array, then <code>i = 0</code> will increment by <code>1</code>
      </p>
    </tr>
  </tbody>
</table>
