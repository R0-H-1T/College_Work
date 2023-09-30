import React from 'react'

export const Footer = () => {
    const today = new Date();
    // FOR STYLING INLINE ------------
    // const footerStyle = {
    //     backgroundColor: 'blue',
    //     color: '#fff'
    // }; 
//    <p style={footerStyle}>Copyright &copy; {today.getFullYear()}</p>

    //----------------------------

  return (
    <footer>
        <p>Copyright &copy; {today.getFullYear()}</p>
    </footer>
  )
}
