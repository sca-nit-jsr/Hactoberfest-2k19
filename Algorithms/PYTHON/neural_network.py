from sklearn.metrics import classification_report, confusion_matrix
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier
import pandas as pd

# ----------------------------------------------------------------- #
# An implementation of two neural networks with different topology  #
# classifying iris flowers into three species based on sepal length #
#           and width as well as petal length and width.            #
#                                                                   #
#                           Dataset used:                           #
#               https://gist.github.com/netj/8836201                #
# ----------------------------------------------------------------- #


def read_data(file):
    """
    Reading the data and transforming the species from text to integers.
    :param file: String
    :return: numpy.ndarray
    """
    data = pd.read_csv(file)
    data.loc[data["variety"] == 'Setosa', 'variety'] = 0
    data.loc[data["variety"] == 'Versicolor', 'variety'] = 1
    data.loc[data["variety"] == 'Virginica', 'variety'] = 2

    return data.values


data = read_data("iris.csv")
X_train, X_test, y_train, y_test = train_test_split(data[:, :4], data[:, -1:], test_size=0.2)

# A neural network which consists of
# an input layer (R^4),
# one hidden layer (R^10)
# and an output layer (R^3).
mlp_single_hidden_layer = MLPClassifier(hidden_layer_sizes=(10,), activation="relu", solver="adam", max_iter=350,
                                        batch_size=10, verbose=True)

# A neural network which consists of
# an input layer (R^4),
# two hidden layers (R^5 and R^3)
# and an output layer (R^3).
mlp_multi_hidden_layer = MLPClassifier(hidden_layer_sizes=(5,3), activation="tanh", solver="adam", max_iter=500,
                                       batch_size=10, verbose=True)

# Training both networks
mlp_single_hidden_layer.fit(X_train, y_train.ravel())
mlp_multi_hidden_layer.fit(X_train, y_train.ravel())
print("--------------------------------\n")
print("Result of training (Single hidden layer): %5.3f" % mlp_single_hidden_layer.score(X_train, y_train))
print("Result of training (Multiple hidden layers): %5.3f" % mlp_multi_hidden_layer.score(X_train, y_train))
print("--------------------------------\n")

# Evaluating the model using the test data
pred_single = mlp_single_hidden_layer.predict(X_test)
pred_multi = mlp_multi_hidden_layer.predict(X_test)

print("Confusion Matrix (Single hidden layer):")
print(confusion_matrix(y_test, pred_single))
print("\nClassification Report (Single hidden layer):")
print(classification_report(y_test, pred_single))
print("\nConfusion Matrix (Multiple hidden layers):")
print(confusion_matrix(y_test, pred_multi))
print("\nClassification Report (Multiple hidden layers):")
print(classification_report(y_test, pred_multi))
print("--------------------------------\n")

print("Accuracy while testing: (Single hidden layer): %5.3f" % mlp_single_hidden_layer.score(X_test, y_test))
print("Accuracy while testing: (Multiple hidden layers): %5.3f" % mlp_multi_hidden_layer.score(X_test, y_test))
