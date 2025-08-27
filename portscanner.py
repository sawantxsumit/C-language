import socket


def scan(target , ports):
    for port in range(1, ports):
        scanport(target , port)

def scanport(ipaddress , port):
   try:
       sock= socket.socket()
       sock.connect((ipaddress , port))
       print("[+] port open " + str(port))
   except:
       print("[-] port closed" + str(port))
      # pass

targets = input("[*] enter targets to scan(split them by comma,) :")
ports = int(input("[*] enter how many ports you want to scan :"))
if ',' in targets:
    print("[*] scanning multiple targets ")
    for ip_addr in targets.split(','):
        scan(ip_addr.strip(' '), ports)
else:
    scan (targets, ports)       