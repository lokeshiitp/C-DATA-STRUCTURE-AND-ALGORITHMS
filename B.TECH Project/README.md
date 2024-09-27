
#Prediction of Resilience Modulus of Subgrade Soil Using Machine Learning Tools

Project Overview

This project focuses on predicting the Resilient Modulus (MR) of subgrade soil using machine learning (ML) algorithms. Resilient modulus is a key parameter in pavement design, and accurate prediction of MR is critical for ensuring the structural integrity of roads and highways.  To achieve this, various machine learning models have been implemented and compared for their predictive accuracy, including:  Artificial Neural Network (ANN) Support Vector Machine (SVM) Random Forest (RF) Multiple Linear Regression (MLR) The Random Forest model yielded the highest accuracy in predicting the resilient modulus compared to the other models.

Dataset

The dataset includes various soil properties like moisture content, density, and other factors that influence the resilient modulus. The data is preprocessed to handle missing values, scaling, and feature selection.

Models Implemented

Artificial Neural Network (ANN): A deep learning model capable of capturing non-linear relationships between the input features and the target variable (Resilient Modulus).

Support Vector Machine (SVM): A robust classifier/regressor that works well in high-dimensional spaces.

Random Forest (RF): An ensemble learning method that builds multiple decision trees and merges their results for improved accuracy.

Multiple Linear Regression (MLR): A baseline regression model that assumes a linear relationship between independent variables and the dependent variable.
Performance Evaluation
The performance of the models was evaluated using common regression metrics, such as:

Mean Squared Error (MSE)

R-squared (R²)

Mean Absolute Error (MAE)

Results

Out of all models, the Random Forest model achieved the highest accuracy and lowest error rates, indicating its superiority in predicting the resilient modulus for this dataset. 
Below are the performance metrics:

Random Forest: Best accuracy and generalization capability.

ANN: Good performance but prone to overfitting with small datasets.

SVM: Moderate accuracy with decent generalization.

MLR: Baseline performance, lowest accuracy among the models.

Conclusion

This project highlights the use of machine learning techniques for predicting the resilient modulus of subgrade soil. Among the tested models, Random Forest proved to be the most effective in capturing the underlying patterns of the dataset, making it a valuable tool for civil engineering applications in pavement design.

Future Work

Exploring more advanced feature selection techniques.
Using larger and more diverse datasets for better generalization.
Testing additional machine learning algorithms like Gradient Boosting or XGBoost.
