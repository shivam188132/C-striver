import pandas as pd

# Sample DataFrame with a string date column
data = {'date': ['2024-05-14', '2024-05-15', '2024-05-16']}
df = pd.DataFrame(data)

# Convert string date column to datetime
df['date'] = pd.to_datetime(df['date'])

# Now the 'date' column is in datetime format
print(df)
