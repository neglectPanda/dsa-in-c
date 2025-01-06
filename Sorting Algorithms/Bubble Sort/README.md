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
  <code>{2, 9, ...}</code>
</p>
