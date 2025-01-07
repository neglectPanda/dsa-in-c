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
      <tr colspan="2">
        <td>
          <p>Either way, these are just foundation knowledge. Both of them are slower than a turtle when handling large data sets.</p>
        </td>
      </tr>
    </tbody>
  </table>
</p>
