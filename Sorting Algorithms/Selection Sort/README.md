<h1>Selection Sort</h1>
<p>A sorting algorithm that loops through an array and looks for the smallest value and placing it in its correct position, one step at a time.</p>

<p>For visualization how selection sort works, check this <a href=""https://en.wikipedia.org/wiki/Selection_sort#/media/File:Selection-Sort-Animation.gif>GIF</a> out by wikipedia</p>

<p>Similar to <strong>bubble sort</strong>'s purpose, it will loop through the array to look for the smallest and largest elements and arrange them.<br>
<i>Here are their differences <code>(ofc according to how i understand them)</code></i><br>
  <table>
    <thead>
      <th>Bubble Sort</th>
      <th>Selection Sort</th>
    </thead>
    <tbody>
      <tr>
        <td>
          <p>Bubble sort will always look at two consecutive elements when arranging itself</p>
        </td>
        <td>
          <p>Selection sort will loop through all the elements in the array to find the least value element (smallest value) and place it in its proper position</p>
        </td>
      </tr>
      <tr>
        <td>
          <p>Bubble sort will always compare the two consecutive elements</p>
        </td>
        <td>
          <p>Selection sort does that too but instead of consecutive elements, per se, it will compare values across all the elements until it finds the right values to swap, and then the minimum value will be placed in the right position</p>
        </td>
      </tr>
      <tr>
        <td colspan="2">
          <p>Either way, these are just foundation knowledge. Both of them are slower than a turtle when handling large data sets.</p>
        </td>
      </tr>
    </tbody>
  </table>
</p>

<h3>Code Explanation</h3>
<table>
  <tbody>
    <tr>
      <td>
        <code>for(int i = 0; i < length - 1; i++)</code><br>
        <p>I want to emphasize on the <code>length - 1</code> part. So basically what this is just wont check the last element of the array because it will automatically be put in the right place as explained above how selection sort works. With this there are less passes making selection sort more efficient, per se.<br><i>NOTE: this is the outer loop</i></p>
      </td>
    </tr>
    <tr>
      <td>
        <code>int min = i;</code><br>
        <p>This here assumes that in the initial run of the program, where <code>i = 0</code> the first index is the smallest number in the entire array.</p>
      </td>
    </tr>
    <tr>
      <code>for(int j = i + 1; j < length; j++)</code><br>
      <em>This is the inner loop which will see all of the elements inside the loop.</em><br>
      <p>This part here in human words, <code>j = i + 1</code> is: j is assigned to whatever i's next element is.<br>
        <i>Example:</i><br>
        Let's say we have an array of numbers: <code>arr[] = {2, 4, 1, 5, 3}</code><br>
        at <code>i = 0</code> meaning the first index, <code>i = 0</code> is <code>2</code> from the array.<br>
        So, since <code>j = i + 1</code> therefore <code>j</code> is actually whatever is next to <code>2</code> which is <code>4</code><br>
        <ul>
          <li><p>><code>i = 0</code> is 2</p></li>
          <li><p><code>j = i + 1</code> is 4</p></li>
        </ul>
      </p>
    </tr>
  </tbody>
</table>
