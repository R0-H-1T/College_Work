


let booklist = document.getElementById('bookList');
booklist.addEventListener('click', () => {
    
})


// const booksurl = "https://openlibrary.org/works/OL45804W.json"
// const books = fetch(booksurl);
// books
//   .then((response) => {
//     return response.json();
//   })
//   .catch(handleError);


async function logMovies() {
    const response = await fetch("https://raw.githubusercontent.com/benoitvallon/100-best-books/master/books.json");
    const movies = await response.json();
    movies.forEach(function(item) {
        console.log(item.author);
    });
}

  logMovies()


  