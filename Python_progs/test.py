import seaborn as sns


import pandas as pd
import matplotlib.pyplot as plt


movie = pd.read_csv(r'./csv_s/movies.csv')

animation = movie[movie['Genre'] == 'Animation']
comedy = movie[movie['Genre'] == 'Comedy']
romance = movie[movie['Genre'] == 'Romance']
drama = movie[movie['Genre'] == 'Drama']





numeric_columns = ['Audience score %', 'Profitability', 'Rotten Tomatoes %', 'Worldwide Gross']

# Create a pair plot
sns.pairplot(movie[numeric_columns], diag_kind='kde')
plt.suptitle('Pair Plot of Numeric Columns', y=1.02)
plt.show()