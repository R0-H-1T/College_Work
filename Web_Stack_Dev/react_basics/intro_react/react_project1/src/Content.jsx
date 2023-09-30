import React, { useState } from 'react'


export const Content = () => {
    const [name, setName] = useState('NAME CHANGED');
    const [count, setCount] = useState(0);

    function nameHandler(){
      const names = ['Kevin', 'Bob', 'Marlo'];
      const int = Math.floor(Math.random() * 3);
      setName(names[int]);
    }

    const handleClick = () => {
      setCount(count + 1)
      console.log(count);
    }

    const handleClick2 = (name) => {
      console.log(`${name} You Clicked this button`);
    }

    const handleClick3 = (e) => {
      console.log(e.target);
    }
  return (
    <main>
        <h2>
            Hello {name}
        </h2>
        <button onClick={nameHandler} >Change Name!</button> <br />
        <button onClick={handleClick} >Show Count</button> <br />
        <button onClick={(name) => handleClick2('Rohit')} >Click</button> <br />
        <button onClick={(e) => handleClick3(e)} >Target</button>
    </main>
  )
}
