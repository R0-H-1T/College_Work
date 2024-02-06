<?xml version="1.0" encoding="UTF-8"?>

<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

<xsl:template match="/">
    <html>
        <title>Books List</title>
        <body>
            <center>
                <h1>All books</h1>
            </center>
            <table border="1">
                <tr  bgcolor="#9acd32">
                    <th>Author</th>
                    <th>Title</th>
                    <th>Publication</th>
                    <th>Release Date</th>
                </tr>
                <xsl:for-each select="books">
                    <tr>
                        <td> <xsl:value-of select="title" /> </td>
                        <td> <xsl:value-of select="title" /> </td>
                        <td> <xsl:value-of select="title" /> </td>
                    </tr>
                </xsl:for-each>
            </table>
        </body>
    </html>
</xsl:template>

</xsl:stylesheet>