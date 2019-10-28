# https://towardsdatascience.com/convolutional-neural-networks-for-beginners-practical-guide-with-python-and-keras-dc688ea90dca

from keras.datasets import mnist
from keras.utils import to_categorical(train_images, train_labels), (test_images, test_labels) =        
                              mnist.load_data()train_images = train_images.reshape((60000, 28, 28, 1))
train_images = train_images.astype('float32') / 255test_images = test_images.reshape((10000, 28, 28, 1))
test_images = test_images.astype('float32') / 255train_labels = to_categorical(train_labels)
test_labels = to_categorical(test_labels)model.compile(loss='categorical_crossentropy',
              optimizer='sgd',
              metrics=['accuracy'])model.fit(train_images, train_labels,
          batch_size=100,
          epochs=5,
          verbose=1)test_loss, test_acc = model.evaluate(test_images, test_labels)print(‘Test accuracy:’, test_acc)
