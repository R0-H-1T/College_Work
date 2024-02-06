import React, { useState } from 'react'


export const Content = () => {
    const [items, setItems] = useState([
      {
          id: 1,
          checked: false,
          item: 'Gummy Bears'
      },
      { 
          id: 2,
          checked: false,
          item: 'Milky Way'
      },
      {
          id: 3,
          checked: false,
          item: 'Sneakers'
      }
    ]);

    const handleCheck = (id) => {
      const listItems = items.map(item => item.id === id ? { ...item, checked: !item.checked } : item)
      setItems(listItems)
    }

  return (
    <>
      <main>
        <ul>
          {
            items.map((item) => (
              <li className='item'>
                <input 
                type="checkbox"
                onChange={() => handleCheck(item.id)}
                checked={item.checked}
                 />
                <label>{item.item}</label>
              </li>
            ))
          }
        </ul>
      </main>
    </>
  )
}

