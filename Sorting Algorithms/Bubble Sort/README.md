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
      <td>
        <code>int i = 0;</code><br>
      <p>This is a pass count of the array. In simple terms, this keeps count on the number of times the bubble sort has been completed.<br>
        <i>Example:</i><br>
        When <code>9</code> and <code>2</code> switches in the array, then <code>i = 0</code> will increment by <code>1</code>
      </p>
      </td>
    </tr>
    <tr>
      <td>
        <code>for(int j = 0; j < size - 1 - i; j++)</code><br>
        <p>
          What I want to focus here is the logic <code>size - 1 - i</code>. In human words, this means size subtracted by 1 <code>(because the last element has nothing to be compared to on its right side)</code> and then subtracted by the pass count<br>
          <i>Here's how it works:</i><br>
          <ol>
            <li>In the first pass <code>i = 0</code>, the inner loop runs <code>size - 1</code> times, comparing all elements</li>
            <li>The second pass, <code>i = 1</code>, the inner loop runs <code>size - 2</code> because that's <code>size - 1 - 1 (i)</code>; it skips the last sorted element </li>
          </ol>
          <br>
          <i>Example:</i> (using a much simpler array)<br>
          <code>int arr[] = {4, 3, 2, 1};</code><br>
          We want to arrange this in ascending order.<br>
          <ul>
            <li>The first pass <code>i = 0</code> compares all elements of <code>j < size - 1</code>, the largest element value <code>4</code> is moved to the last position</li>
            <li>The second pass <code>i = 1</code> only compares up to the second-to-the-last position <code>j < size - 1 - 1</code>. So the 2nd largest element here, which is 3, is then moved to the second-to-the-last positon.</li>
            <li>So therefore, all the large element value will bubble up to the end giving us the final result<br><code>{1, 2, 3, 4}</code></li>
          </ul>
        </p>
      </td>
    </tr>
    <tr>
      <td>
        <code>if(arr[j] > arr[j + 1])</code><br>
        <p>This is the condition we need to check. In human words, this means that if the current element at index arr[j] is greater than its next element (assuming its direction is from left to right)<br>
          <i>Example:</i><br>
          Let's say we have an array <code>{1, 2, 3}</code> and then let's say <code>j = 0</code> (this is the first element).<br>
          <ul>
            <li><code>arr[j]</code> here is 1</li>
            <li><code>arr[j + 1]</code> is therefore, 2</li>
          </ul>
        </p>
      </td>
    </tr>
    <tr>
      <td>
        <p>If the condition above is satisfied, it will then proceed with the swapping, executed by the code below:</p><br>
        <code>int temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
          isSwapped = true;</code>
      </td>
    </tr>
  </tbody>
</table>
