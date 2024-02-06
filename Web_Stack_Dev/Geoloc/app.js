const api_key = process.env.api_key;

const HtmlWebpackPlugin = require('html-webpack-plugin');
 
//  module.exports = {
//    entry: 'app.js',
//    plugins: [
//      new HtmlWebpackPlugin({
//        inject: false,
//        template: './index.html',

//        // Pass the full url with the key!
//        apiUrl: `https://www.bing.com/api/maps/mapcontrol?callback=GetMap&key=${api_key}`,

//      })
//    ]
//  }

 
  

//const HtmlWebpackPlugin = require('html-webpack-plugin')

module.exports = {
  entry: 'index.js',
  output: {
    path: __dirname + '/dist',
    filename: 'index_bundle.js'
  },
  plugins: [
    new HtmlWebpackPlugin()
  ]
}
console.log(api_key)