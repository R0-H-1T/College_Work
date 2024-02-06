<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform" version="1.0">
  <xsl:output method="html" indent="yes"/>
  
  <xsl:template match="/dogs">
    <html>
      <head>
        <title>Dog List</title>
      </head>
      <body>

        <h1>List of Dogs</h1>

        
        <table border="1">
          <tr>
            <th>Breed</th>
            <th>Color</th>
            <th>Country</th>
          </tr>

          <!-- <xsl:apply-templates select="dogs/dog"/> -->
          <!-- <xsl:for-each select="dogs/dog">
          <tr>
            <td><xsl:value-of select="dog/breed"/></td>
            <td><xsl:value-of select="dog/color"/></td>
            <td><xsl:value-of select="dog/country"/></td>
          </tr>
          </xsl:for-each> -->

          <xsl:apply-templates select="dog"/>
        </table>
      </body>
    </html>
  </xsl:template>

  <xsl:template match="dog">
    <tr>
      <td><xsl:value-of select="breed"/></td>
      <td><xsl:value-of select="color"/></td>
      <td><xsl:value-of select="country"/></td>
    </tr>
  </xsl:template>
</xsl:stylesheet>
