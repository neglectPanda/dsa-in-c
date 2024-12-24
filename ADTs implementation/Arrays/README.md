<h1>This will show how the .push() and .pop() can manipulate arrays.</h1>

<ul>
  <li>
    <h3><code>.push()</code> adds an element in an array.</h3>
  </li>
  <li>
    <h3><code>.pop()</code> removes an element in an array.</h3>
  </li>
</ul>

<p>
  From my previous experiences with JavaScript, we can just call these functions to do something without knowing its implementation processes.
  The deal with ADTs is that high level languages use these functions to do something without us, the programmers really knowing 
  what's going on behind the scenes. 
</p>
<p><strong>Here are the JavaScript use-cases so you'll understand the gist.</strong></p>

<table>
  <thead>
    <tr>
      <th>JavaScript</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>
        <p>
          <code>.push()</code> - pushes an element at the end of the array <br>
          <p>
            <i>Example:</i> <br>
            Let's say you have an array <strong><i>[1, 2, 3, 4, 5]</i></strong> and you want to add 6 to the end of it. <code>.push()</code>
            can let you do that.<br>
            <div>
              <code>let arr = [1, 2, 3, 4, 5];</code><br>
              <code>arr.push(6);</code><br>
            </div>
            <br>
            <strong>result = [1, 2, 3, 4, 5, 6]</strong>
          </p>
        </p>
      </td>
    </tr>
    <tr>
      <td>
        <p>
          <code>.pop()</code> - removes the last element of an array <br>
          <p>
            <i>Example:</i><br>
            Let's use the resulting array from the <code>.push()</code> <i><strong>[1, 2, 3, 4, 5, 6]</strong></i><br>
            Here, we will remove 6 (the last element of the array)<br>
            <div>
              <code>let arr = [1, 2, 3, 4, 5, 6];</code><br>
              <code>arr.pop();</code>
            </div>
            <strong>result = [1, 2, 3, 4, 5]</strong>
          </p>
        </p>
      </td>
    </tr>
  </tbody>
</table>

<p>Now we will code these functions in C to get the gist of it.</p>
<h2>Phase 1</h2>
<p>This phase will follow the JavaScript Functions</p>
<code>Check Out Phase 1 above.</code>

<h2>Phase 2</h2>
<p>
  This will be the improved version: 
  <ul>
    <li>For the <code>.push()</code> and <code>.pop()</code> you can now choose which index to replace/remove values</li>
  </ul>
</p>
<code>Check Out Phase 2 above.</code>
