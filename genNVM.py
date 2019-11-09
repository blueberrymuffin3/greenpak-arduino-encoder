path = './src/nvm.h'

import xml.etree.ElementTree as ET
tree = ET.parse('GreenPAK.gp5')
root = tree.getroot()

nvmRaw = root.find('chip').find('nvmData').text
nvmBytes = [int(x, 16) for x in nvmRaw.split(' ')]
nvmHex = [hex(x) for x in nvmBytes]
code = 'byte nvm[] = {' + ', '.join(nvmHex) + '};'
with open(path, 'w+') as hFile:
  hFile.write(code)
  print(f'[Python CodeGen] Wrote {len(code)} bytes to {path}')
