## 📖 About
Reconstruct Persian/Arabic sentences for use in the [u8g2 library](https://github.com/olikraus/u8g2/). In languages like Persian/Arabic, the letter is modified depending on where it should go in a word. Usually, when you print to the display ordinary Persian/Arabic text, each character is printed individually and is not joined together, whereas a computer would join it automatically on the screen but not modifying the actual data of each character.

## 📚 Description
Persian/Arabic script is very special with two essential features:
- It is written from right to left.
- The characters change shape according to their surrounding characters.

So when you try to print text written in Persian/Arabic script on VGA display in Persian/Arabic you’re pretty likely to end up with something that looks like this:

<p align="center">
  <img src="http://mpcabd.xyz/wp-content/uploads/2012/05/arabic-1.png">
</p>

## 📷 Screenshot
<p align="center">
  <img width="516" height="350" src="https://raw.githubusercontent.com/ens4dz/u8g2-persian-reshaper/master/esp32_vga_arabic.jpg?raw=true">
</p>

## ⚙️ Download & Usage
Download/Clone repository, then Install :

1-[u8g2 library](https://github.com/olikraus/u8g2/wiki/u8g2install).

2-[bitluni's ESP32Lib](https://github.com/bitluni/ESP32Lib)

and upload the code.



## 💵 Donation
If this project help you reduce time to develop, you can give a cup of coffee to the (https://github.com/idreamsi/u8g2-persian-reshaper)  :)

- Donate via Bitcoin: 176H7tbpfyUVKiwkkwj6BJfC1X7hQWTq8v
- [Donate via IDPay](https://idpay.ir/idreams)
