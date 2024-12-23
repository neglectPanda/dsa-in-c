<h1>This is my early take on Data Structures and Algorithms in C</h1>

<h2>Data Types VS. Abstract Data Types (ADTs)</h2>
<table>
  <thead>
    <tr>
      <th>Data Type</th>
      <th>Abstract Data Types (ADTs)</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td>
        <p>Defines a certain domain of values
          <br>
          Defines operations to be used on values (+, -, *, /, etc.)
        </p>
      </td>
      <td>
        <p>
          Defines operations on values <strong>using functions</strong> without specifying 
          what is there inside the function and how the operations are performed
        </p>
      </td>
    </tr>
    <tr>
      <td>
        <i>Example</i>
        <br>
        <p>
          <strong>int</strong> type
          <br>
          &emsp; - Takes only integer values
          <br>
          &emsp; - Operations: Add, Subtract, Multiply, Divide (etc).
        </p>
      </td>
      <td>
        <i>Example</i>
        <br>
        <p>
          <strong>STACK ADT</strong>
          <br>
          &emsp; - stack contains elements of the same type arranged in sequential order (last in first out)
          <br>
          &emsp; - operations are - initialize, push, pop, isEmpty, isFull
        </p>
      </td>
    </tr>
  </tbody>
</table>
<h3>ADTs</h3>
<ul>
  <li>uses a data structure called a <strong>client</strong> program</li>
  <li>access interface only (frontend no backend)</li>
  <li>implements the DS is <strong>implementation</strong></li>
</ul>
<h4>ADVANTAGE</h4>
<p>A user wants to use stacking in a program, they can just use push pop functions/operations without knowing its implementation. Its just there. Abstract.</p>
