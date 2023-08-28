<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <!-- Match the root element 'employees' -->
  <xsl:template match="employees">
    <html>
        <title>Employee list</title>
        <style>
            table,
    th,
    td {
        border: 1px solid black;
        border-collapse: collapse;
    }
     
    th,
    td {
        padding: 20px;
    }
     
    th {
        text-align: left;
         background-color: #f2f2d1;
    }
        </style>
      <body>
        <center>
            <h2>Employee Information</h2>
        </center>
        <table border="1">
          <tr>
            <th>First Name</th>
            <th>Last Name</th>
            <th>Position</th>
            <th>Salary</th>
            <th>Phone Number</th>
            <th>Email</th>
          </tr>
          <!-- Apply the template for each 'employee' element -->
          <xsl:apply-templates select="employee"/>
        </table>
      </body>
    </html>
  </xsl:template>

  <!-- Match each 'employee' element -->
  <xsl:template match="employee">
    <tr>
      <td><xsl:value-of select="personal_life/first_name"/></td>
      <td><xsl:value-of select="personal_life/last_name"/></td>
      <td><xsl:value-of select="employee_life/position"/></td>
      <td><xsl:value-of select="employee_life/salary"/></td>
      <td><xsl:value-of select="contact_info/phno"/></td>
      <td><xsl:value-of select="contact_info/email"/></td>
    </tr>
  </xsl:template>

</xsl:stylesheet>
