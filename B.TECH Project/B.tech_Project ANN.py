#!/usr/bin/env python
# coding: utf-8

# In[1]:


#libraries which are required for this project
import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
import seaborn as sns
import statistics
import math
import warnings
import sklearn
from sklearn import linear_model
warnings.filterwarnings("ignore")
get_ipython().run_line_magic('matplotlib', 'inline')


# In[2]:


#import data(csv) file
df=pd.read_csv("db.csv")


# In[3]:


df.head()


# In[4]:


#delete some columns from dataframe
df=df.drop(['STATE_CODE','SHRP_ID','CONSTRUCTION_NO','LAYER_NO','LAYER_TYPE','PROJECT_LAYER_CODE','MATL_CODE','DESCRIPTION','AASHTO_SOIL_CLASS_EXP','AASHTO_SOIL_CLASS'], axis=1)
df.head()


# In[5]:


index_def1=df[df['DESCRIPTION_EXP']=='Base Layer'].index


# In[6]:


df=df.drop(index_def1)


# In[7]:


df


# In[8]:


index_def2=df[df['DESCRIPTION_EXP']=='Subbase Layer'].index
df2=df.drop(index_def2)
df2


# In[9]:


df2.info()


# In[10]:


new_value=10
df2.loc[df2['REPR_THICKNESS'].notnull(), 'REPR_THICKNESS'] = new_value
df2


# In[11]:


df2.info()


# In[12]:


value_to_drop=10
df2 = df2[df2['REPR_THICKNESS'] != value_to_drop]
df2.head()


# In[13]:


df2.info()


# In[14]:


df2['PLASTICITY_INDEX'] = df2['PLASTICITY_INDEX'].fillna(df2['LIQUID_LIMIT'] - df2['PLASTIC_LIMIT'])
df2


# In[15]:


df2.info()


# In[16]:


df2=df2.drop(['LAYER_TYPE_EXP','DESCRIPTION_EXP','THREE_PASSING','TWO_PASSING','ONE_AND_HALF_PASSING','ONE_PASSING','THREE_FOURTHS_PASSING','ONE_HALF_PASSING','THREE_EIGHTHS_PASSING','POISSONS_RATIO'], axis=1)
df2.head()


# In[17]:


df2.describe(include="all")


# In[18]:


mean_LL = df2['LIQUID_LIMIT'].mean()
df2['LIQUID_LIMIT'].fillna(mean_LL, inplace=True)
mean_PL = df2['PLASTIC_LIMIT'].mean()
df2['PLASTIC_LIMIT'].fillna(mean_LL, inplace=True)
df2.info()


# In[19]:


df2['PLASTICITY_INDEX'] = df2['PLASTICITY_INDEX'].fillna(df2['LIQUID_LIMIT'] - df2['PLASTIC_LIMIT'])
df2.info()


# In[20]:


df2.info()


# In[21]:


df2.describe(include="all")


# In[22]:


df2.index = range(1, len(df2) + 1)
df2


# In[23]:


column = df2['MATL_CODE_EXP']

# Count the occurrences of each unique value in the column
value_counts = column.value_counts()

# Plotting the bar chart
plt.figure(figsize=(12, 8))
plt.bar(value_counts.index, value_counts.values)
plt.xlabel('Unique Values')
plt.ylabel('Count')
plt.title('Bar Chart of Count Corresponding to Data')
plt.xticks(rotation=90, fontsize=6)  # Rotate x-axis labels if needed
plt.show()


# In[24]:


hist=df2.hist('RESILIENT_MODULUS')
plt.show()


# In[25]:


x=df2['RESILIENT_MODULUS']
sns.displot(x, kde=True)


# In[26]:


df2.head()


# In[27]:


column = df2['STATE_CODE_EXP']

# Count the occurrences of each unique value in the column
value_counts = column.value_counts()

# Plotting the bar chart
plt.figure(figsize=(12, 8))
plt.bar(value_counts.index, value_counts.values)
plt.xlabel('Unique Values')
plt.ylabel('Count')
plt.title('Bar Chart of Count Corresponding to Data')
plt.xticks(rotation=90, fontsize=8)  # Rotate x-axis labels if needed
plt.show()


# In[28]:


df2.head()


# In[29]:


df2.info()


# In[30]:


#sns_plot=sns.pairplot(data=df2)
#sns_plot


# In[31]:


df2['MAX_LAB_DRY_DENSITY'] = df2['MAX_LAB_DRY_DENSITY'].astype(float)


# In[32]:


df2['OPTIMUM_LAB_MOISTURE'] = df2['OPTIMUM_LAB_MOISTURE'].astype(float)


# In[33]:


# Importing necessary libraries
import numpy as np
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from sklearn.ensemble import RandomForestRegressor
from sklearn.metrics import mean_squared_error
from sklearn.metrics import accuracy_score
from sklearn.metrics import r2_score, mean_squared_error
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler
from tensorflow.keras.models import Sequential
from tensorflow.keras.layers import Dense
from scipy.stats import pearsonr


# In[34]:


X = df2.drop(['STATE_CODE_EXP','MATL_CODE_EXP','REPR_THICKNESS','RESILIENT_MODULUS'], axis=1) # Features
y = df2['RESILIENT_MODULUS'] # Target variable


# In[35]:


# Splitting the dataset into training and testing sets
X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)


# In[36]:


# Standardize features by removing the mean and scaling to unit variance
scaler = StandardScaler()
X_train_scaled = scaler.fit_transform(X_train)
X_test_scaled = scaler.transform(X_test)


# In[37]:


# Define the neural network architecture
model = Sequential()
model.add(Dense(64, activation='relu', input_shape=(X_train_scaled.shape[1],)))
model.add(Dense(32, activation='relu'))
model.add(Dense(1))  # Output layer


# In[38]:


# Compile the model
model.compile(optimizer='adam', loss='mean_squared_error')


# In[39]:


# Train the model
model.fit(X_train_scaled, y_train, epochs=50, batch_size=32, verbose=1)


# In[40]:


# Evaluate the model on the test set
loss = model.evaluate(X_test_scaled, y_test)
print("Mean Squared Error on Test Set:", loss)


# In[41]:


# Make predictions
y_pred = model.predict(X_test_scaled)


# In[42]:


accuracy = model.evaluate(X_test_scaled, y_test)
print("Accuracy:", accuracy)


# In[43]:


r2 = r2_score(y_test, y_pred)
print(f'R^2 score: {r2:.2f}')


# In[ ]:





# In[44]:


# Compute the correlation matrix
correlation_matrix = df2.corr()


# In[45]:


# Set up the matplotlib figure
plt.figure(figsize=(10, 8))

# Draw the heatmap with the mask and correct aspect ratio
sns.heatmap(correlation_matrix, annot=True, fmt=".2f", cmap='coolwarm', cbar_kws={"shrink": .5})

# Add title
plt.title('Correlation Matrix')

# Show plot
plt.show()


# In[46]:


import numpy as np
import matplotlib.pyplot as plt

# Reshape y_test and predictions
y_test_reshaped = np.array(y_test).flatten()
predictions_reshaped = np.array(y_pred).flatten()

# Calculate the best fitting line
slope, intercept = np.polyfit(y_test_reshaped, predictions_reshaped, 1)
line_x = np.linspace(min(y_test_reshaped), max(y_test_reshaped), 100)
line_y = slope * line_x + intercept

# Plotting the actual vs. predicted values
plt.scatter(y_test_reshaped, predictions_reshaped, label='Actual vs. Predicted')

# Plotting the best fitting line
plt.plot(line_x, line_y, color='red', linestyle='--', label=f'Best Fit Line: y={slope:.2f}x+{intercept:.2f}')

plt.xlabel('Actual Resilient Modulus')
plt.ylabel('Predicted Resilient Modulus')
plt.title('Actual vs. Predicted Resilient Modulus')
plt.legend()
plt.grid(True)
plt.show()

# Print equation of the best fitting line
print(f"Equation of the best fitting line: y = {slope:.2f}x + {intercept:.2f}")


# In[47]:


#Comparing actual prices with predicted prices
compare = pd.DataFrame({'Actual': y_test.values, 'Predicted': y_pred.flatten()})
compare.head(n=15)


# In[48]:


from sklearn.metrics import mean_squared_error, mean_absolute_error, r2_score
import numpy as np

# Assuming y_test and y_pred are defined as your actual and predicted values from a regression model
# For example:
# y_test = np.array([3, -0.5, 2, 7])
# y_pred = np.array([2.5, 0.0, 2, 8])

# R-Squared
r_squared = r2_score(y_test, y_pred)
print("R-Squared:", r_squared)

# RMSE
rmse = np.sqrt(mean_squared_error(y_test, y_pred))
print("Root Mean Squared Error (RMSE):", rmse)

# MAE
mae = mean_absolute_error(y_test, y_pred)
print("Mean Absolute Error (MAE):", mae)

# R (Pearson Correlation Coefficient)
r, _ = pearsonr(y_test, y_pred.flatten())
print("Correlation Coefficient (R):", r)


# In[ ]:




