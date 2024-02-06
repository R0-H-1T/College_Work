var ejs = require('ejs');
var fs = require('fs');

const api_key = process.env.api_key
var htmlContent = fs.readFileSync(__dirname + '/index.ejs', 'utf8');

var htmlRenderized = ejs.render(htmlContent, {filename: 'index.ejs', exampleRenderEjs: api_key});

console.log(htmlRenderized);